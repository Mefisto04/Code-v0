/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* solve(ListNode* start, ListNode* end){
        if(start == end) return NULL;
        ListNode* slow = start;
        ListNode* fast = start;
        while(fast->next!=end){
            slow = slow->next;
            fast = fast->next;
        }
        TreeNode* head = new TreeNode(slow->val);
        head->left = solve(start,slow);
        head->right = solve(slow->next,end);
        return head;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        if(head == NULL) return NULL;
        return solve(head,NULL);
    }
};