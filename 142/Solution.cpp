/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *findPos(ListNode* fast, ListNode* head) {
        while(fast && head) {
            if(fast == head) return head;
            fast = fast->next;
            head = head->next;
        }
        return nullptr;
    }
    
    ListNode *detectCycle(ListNode *head) {
        ListNode * slow = head, *fast;
        if(head == nullptr) return head;
        fast = head;
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow) return findPos(fast, head);
        }
        return nullptr;
    }
};
