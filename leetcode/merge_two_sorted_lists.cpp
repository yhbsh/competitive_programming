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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* fh1 = l1;
        ListNode* fh2 = l2;
        ListNode* fh3;
        if(fh1== NULL){
            return fh2;
        }
        if(fh2 == NULL){
            return fh1;
        }
       
            if(fh1-> val < fh2->val){
               fh3 = fh1;
                fh3->next = mergeTwoLists(l1->next, l2);
            }
            else{
               fh3 = fh2;
                fh3->next = mergeTwoLists(l1, l2->next);
            }
            
        
        return fh3;
    }
};