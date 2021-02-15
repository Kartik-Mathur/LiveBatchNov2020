/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class data1{
    public:
    int sum;
    int min_v;
    int max_v;
    bool isBst;
    
    data1(int s,int m1,int m2,bool is){
        sum = s;
        min_v=m1;
        max_v=m2;
        isBst = is;
    }
};

data1 BinaryToBst(TreeNode* root,int& ans){
    if(root==NULL){
        return {0,INT_MAX,INT_MIN,true};
    }
    
    if(root->left==NULL && root->right==NULL){
        ans = max(ans,root->val);
        return {root->val,root->val,root->val,true};
    }
    
    data1 l = BinaryToBst(root->left,ans);
    data1 r = BinaryToBst(root->right,ans);
    
    if(root->val==4){
        cout << l.sum << " " << l.min_v << " " << l.max_v << " "<< l.isBst << endl;
          cout << r.sum << " " << r.min_v << " " << r.max_v << " "<< r.isBst << endl;
    }
    
    
    
    if(l.isBst && r.isBst && root->val>l.max_v && root->val<r.min_v){
        //this subtree is bst
        int s = (l.sum)+(r.sum)+(root->val);
        
         ans = max(ans,s);
         //changed from min = l.min_v to  min=min(root->val,l.min_v,r.min_v)
         //as any one of them can be null too then min_v is INT_MAX for that section
        return {s,min(l.min_v,min(root->val,r.min_v)),max(root->val,max(r.max_v,l.max_v)),true};
        
    }
    

      int s = l.sum+r.sum+root->val;
    //this subtree is not bst
    return {s,min(l.min_v,min(root->val,r.min_v)),max(r.max_v,max(l.max_v,root->val)),false};
    
}


class Solution {

public:
    int maxSumBST(TreeNode* root) {
        int ans =0;
        BinaryToBst(root,ans);
        return ans;
    }
};