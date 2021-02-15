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

class compare{
    public:
    bool operator()(ListNode* a,ListNode* b){
        return a->val>b->val;
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)
            return NULL;
        priority_queue<ListNode*,vector<ListNode*>,compare> pq;
        int n=lists.size();
        for(int i=0;i<n;i++){
          
            ListNode* h1=lists[i];
            if(h1!=NULL){
            pq.push(h1);
                cout << "Not Null" << endl;
            }
        }
        ListNode* h=NULL; //first node
        ListNode* curr=NULL;  //last node
        while(!pq.empty()){
            ListNode* temp = pq.top();
                
            pq.pop();
              if(temp==NULL)
                  continue;
            if(h==NULL){
                h=temp;
                curr=temp;
            }
            else{
                curr->next = temp;
                curr=curr->next;
            }
            if(temp->next!=NULL){
                pq.push(temp->next);
            }
            
        }
       
        return h;
        
        
        
    }
};