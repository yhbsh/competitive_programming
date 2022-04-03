/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    int get_length(ListNode *head)
    {
        int answer = 0;
        while (head)
        {
            head = head->next;
            answer++;
        }

        return answer;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        int la = get_length(headA);
        int lb = get_length(headB);

        for (int i = 0; i < la - lb; i++)
        {
            headA = headA->next;
        }
        for (int i = 0; i < lb - la; i++)
        {
            headB = headB->next;
        }

        while (headA != headB)
        {
            headA = headA->next;
            headB = headB->next;
        }

        return headA;
    }
};