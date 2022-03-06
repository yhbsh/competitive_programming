#include <bits/stdc++.h>
#include <unordered_map>

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

struct node {
    // C++ STL
    unordered_map<ListNode*, ListNode*> _pre;
    ListNode *_tail;
    node(ListNode *head) {
        ListNode *prev = NULL;
        while(head != NULL) {
            _tail = head;
            _pre[head] = prev;
            prev = head;
            head = head->next;
        }
    }
    ListNode *getPrev(ListNode *curr) {
        return _pre[curr];
    }

    ListNode *getTail() {
        return _tail;
    }

};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        node A(l1), B(l2);

        ListNode *f = A.getTail();
        ListNode *s = B.getTail();
        ListNode *res = NULL;

        int carry = 0;

        while (f != NULL && s != NULL) {
            int sum = f->val + s->val + carry;
            if (res == NULL) {
                res = new ListNode(sum % 10);
            } else {
                ListNode *ptr = new ListNode(sum % 10);
                ptr->next = res;
                res = ptr; // ensuring the new nodes are added to the left..
            }
            carry = sum / 10;
            f = A.getPrev(f);
            s = B.getPrev(s);
        }

        while(f != NULL) {
            int sum = carry + f->val;
            ListNode *ptr = new ListNode(sum % 10);
            ptr->next = res;
            res = ptr; // ensuring the new nodes are added to the left..
            carry = sum / 10;
            f = A.getPrev(f);
        }

        while (s != NULL) {
            int sum = carry + s->val;
            ListNode *ptr = new ListNode(sum % 10);
            ptr->next = res;
            res = ptr; // ensuring the new nodes are added to the left..
            carry = sum / 10;
            s = B.getPrev(s);
        }

        if (carry) {
            ListNode *ptr = new ListNode(1);
            ptr->next = res;
            res = ptr; // ensuring the new nodes are added to the left..       
        }

        return res;

    }
};