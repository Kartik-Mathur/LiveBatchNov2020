
//leetcode Problem Name:Remove Duplicates From sorted List

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
    ListNode* deleteDuplicates(ListNode* head) {
          if(!head) return NULL;
        ListNode *cur = head,*pick = head;
        while (cur) {
            if(pick->val != cur->val) {
                pick->next = cur;
                pick = cur;
            }
            cur = cur->next;
        }
        pick->next = NULL;
        return head;
        
    }
};