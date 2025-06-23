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

    void solve(TreeNode* &root, vector<int> &ans, int &lvl) {
        // bc
        if (!root) return;
        // right view node found
        if (lvl >= ans.size()) {
            ans.push_back(root->val);
        }

        lvl++;
        solve(root->right, ans, lvl);
        solve(root->left, ans, lvl);
        // bt
        lvl--;
    }

    vector<int> rightSideView(TreeNode* root) {
        // 01 approach - using lot

        // 02 approach - using rec
        vector<int> ans;
        int lvl = 0;
        solve(root, ans, lvl);

        return ans;
    }
};