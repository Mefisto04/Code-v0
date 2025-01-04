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
class Solution {
public:
    int findCommonDivisor(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    void insertAtMiddle(ListNode* curr, int gcd) {
        ListNode* newNode = new ListNode(gcd);
        newNode->next = curr->next;
        curr->next = newNode;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (!head || !head->next) {
            return head;
        }
        ListNode* curr = head;      
        ListNode* next = head->next; 
        while (next != nullptr) {
            int gcd = findCommonDivisor(curr->val, next->val);
            insertAtMiddle(curr, gcd);
            curr = curr->next->next; 
            next = next->next;
        }
        return head;
    }
};
