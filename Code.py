import os
import json
import requests
import subprocess
from datetime import datetime


REPO_PATH = "E:\V sem\leetcode"
SESSION_COOKIE = "eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJfYXV0aF91c2VyX2lkIjoiNzc1Mjg4MyIsIl9hdXRoX3VzZXJfYmFja2VuZCI6ImRqYW5nby5jb250cmliLmF1dGguYmFja2VuZHMuTW9kZWxCYWNrZW5kIiwiX2F1dGhfdXNlcl9oYXNoIjoiYzZiOGUyOTFjOWVmNGNlYzRjYjBjZmZmOTBkZjBlMWUxYjQ2NzgyYjE4ZGM0NzU4ODJkYzE1NGFkZDEyZDFhMyIsInNlc3Npb25fdXVpZCI6ImZiMGI0MGM5IiwiaWQiOjc3NTI4ODMsImVtYWlsIjoia2F3YWxlbWF5dXIyQGdtYWlsLmNvbSIsInVzZXJuYW1lIjoibWVmaXN0b18wNCIsInVzZXJfc2x1ZyI6Im1lZmlzdG9fMDQiLCJhdmF0YXIiOiJodHRwczovL2Fzc2V0cy5sZWV0Y29kZS5jb20vdXNlcnMvYXZhdGFycy9hdmF0YXJfMTcwMjA2MTk4MC5wbmciLCJyZWZyZXNoZWRfYXQiOjE3NDI1ODg1MjgsImlwIjoiMjQwMTo0OTAwOjg4MWY6N2JlNDo3MWU1OmZmNjA6ZDZhYTo0MDUwIiwiaWRlbnRpdHkiOiJlNjViYTU0YjUyYWY2NzM1YjRiYWZiNWJiM2QzZWJhNCIsImRldmljZV93aXRoX2lwIjpbIjBkNzhiYmI4MGY5YTFjODZjOTFkMjk2Y2NmMjBlZjJhIiwiMjQwMTo0OTAwOjg4MWY6N2JlNDo3MWU1OmZmNjA6ZDZhYTo0MDUwIl0sIl9zZXNzaW9uX2V4cGlyeSI6MTIwOTYwMH0.dJRpnUygvneZMdMnmUql2k0uJLYi2j_Ew9aL9LLcErk"
CSRF_TOKEN = "2KcwHIbOMth0EC1SOTcoQokFNuZuVco8OuDSoNKFbWnmCMuxwEct4XMGTBDkchCm"
HEADERS = {
    "Cookie": f"LEETCODE_SESSION={SESSION_COOKIE}; csrftoken={CSRF_TOKEN}",
    "x-csrftoken": CSRF_TOKEN,
    "User-Agent": "Mozilla/5.0"
}

def fetch_leetcode_submissions():
    submissions = []
    offset = 30  
    limit = 30  

    while True:
        url = f"https://leetcode.com/api/submissions/?offset={offset}&limit={limit}"
        response = requests.get(url, headers=HEADERS)
        
        if response.status_code != 200:
            print("Failed to fetch submissions. Check your cookies.")
            break

        data = response.json()
        fetched_submissions = data.get("submissions_dump", [])
        
        if not fetched_submissions:
            break  # No more submissions to fetch
        
        submissions.extend(fetched_submissions)
        offset += limit  # Move to the next page

    return submissions

def commit_submission(title, code, lang, timestamp):
    file_extension = {
        "python3": "py",
        "java": "java",
        "cpp": "cpp",
        "c": "c",
        "javascript": "js"
    }.get(lang, "txt")

    filename = f"{title.replace(' ', '_')}.{file_extension}"
    filepath = os.path.join(REPO_PATH, filename)

    with open(filepath, "w") as f:
        f.write(code)

    commit_time = datetime.utcfromtimestamp(timestamp).strftime('%Y-%m-%dT%H:%M:%S')

    subprocess.run(["git", "add", filename], cwd=REPO_PATH)
    subprocess.run(["git", "commit", "-m", f"Add {title}", "--date", commit_time], cwd=REPO_PATH)

def main():
    os.chdir(REPO_PATH)

    submissions = fetch_leetcode_submissions()
    if not submissions:
        print("No submissions found.")
        return

    for sub in submissions:
        commit_submission(
            title=sub["title"],
            code=sub["code"],
            lang=sub["lang"],
            timestamp=sub["timestamp"]
        )

    subprocess.run(["git", "push"], cwd=REPO_PATH)

if __name__ == "__main__":
    main()