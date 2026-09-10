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
public:
    int count;
    vector<int> sumOfN(TreeNode * root){
        if(!root) return {0,0};

        int sum = root->val;
        int totalN = 1;
        if(root->left){
            auto left= sumOfN(root->left);
            sum+=left[0];
            totalN+=left[1];
        }
        if(root->right){
            auto right= sumOfN(root->right);
            sum+=right[0];
            totalN+=right[1];
        }
        if((sum)/totalN == root->val) count++;

        return {sum,totalN};       
    }
    int averageOfSubtree(TreeNode* root) {
        count = 0;
        sumOfN(root);

        return count;
    }
};