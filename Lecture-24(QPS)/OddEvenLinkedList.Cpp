//Leetocde Name:Odd Even Linked List


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
    ListNode* oddEvenList(ListNode* head) {
           if(head==NULL || head->next==NULL)
           return head;
        ListNode* odd=head;
        ListNode *even=head->next;
        ListNode* evenHead=head->next;
        ListNode* curr=head->next->next;
        int count =1;
        while(curr){
            if(count%2==1){
                odd->next=curr;
                odd=odd->next;
            }
            else{
                even->next=curr;
                even=even->next;
            }
            count++;
            curr=curr->next;
        }
       // odd->next=NULL;
        even->next=NULL;
        odd->next=evenHead;
        return head;
    }
};