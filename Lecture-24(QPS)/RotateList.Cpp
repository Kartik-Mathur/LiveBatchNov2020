
//leetcode Problem Name:Rotate List


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
    int count(ListNode *p)
    {
        int c=0;
        while(p)
        {
            c++;
            p=p->next;
        }
        return c;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || k==0) return head;
        int size=count(head);
        k=k%size;
        if(k==0) return head;
        
        k=size-k;
        ListNode *prev=head,*cur=head;
        while(k)
        {
            k--;
            prev=cur;
            cur=cur->next;
        }
        
        ListNode *p=head;
        while(p->next) p=p->next;
        
        prev->next=NULL;
        p->next=head;
        head=cur;
        return head;
    }
};