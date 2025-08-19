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
class Solution {

    void solve(TreeNode * root,int targetSum,int sum,vector<vector<int>> &ans,vector<int> curr){

      // base case.

      if(root == NULL) return;


      if(root -> left == NULL && root -> right == NULL){
        sum += root -> val;
        curr.push_back(root -> val);

     
     if(sum == targetSum){
        ans.push_back(curr);
     }
       return;
      }


       sum += root -> val;
       curr.push_back(root -> val);


       if(root -> left){
        solve(root -> left,targetSum,sum,ans,curr);
       }
     

      if(root -> right){
        solve(root -> right,targetSum,sum,ans,curr);
      }






    }




public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {

           
        // using the optimal solution.
     
        vector<vector<int>> ans;

        if(root == NULL) return ans;

        vector<int>curr;
      
          solve(root,targetSum,0,ans,curr);


          return ans;

    }
};

