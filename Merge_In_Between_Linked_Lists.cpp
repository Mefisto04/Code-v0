class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *prev = list1; 
        ListNode *temp1 = list1; 
        ListNode *curr = list1;
        a--; 
        while(temp1 != NULL && a--) {
            temp1 = temp1->next;
            prev = temp1;
        }
        
        temp1 = list1;  
        while(temp1 != NULL && b--) {
            temp1 = temp1->next;
            curr = temp1;
        }
        
        ListNode *temp2 = list2; 
        while(temp2->next != NULL) {
            temp2 = temp2->next;
        }
        
        prev->next = list2;  
        temp2->next = curr->next; 
        
        return curr;  
    }
};