
//Leetocde Name:Palindrome Linked List

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
    
        ListNode* reverselist(ListNode* head){
        ListNode* pre = NULL;
        ListNode* curr = NULL;
        
        while(head != NULL){
            curr = head->next;
            head->next = pre;
            pre = head;
            head = curr;
        }
        return pre;
    }
    
    bool isPalindrome(ListNode* head) {
          if(head == NULL || head->next == NULL)
            return true;
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next; 
            fast = fast->next->next;
        }
        
        //reverse the second half
        slow->next = reverselist(slow->next);
        slow = slow->next;
        
        //compare first and last,second and second last and so on..
        while(slow != NULL){
            if(slow->val != head->val)
                return false;
            slow = slow->next;
            head = head->next;
        }
        return true;
        
    }
};