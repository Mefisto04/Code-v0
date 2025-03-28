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
    int deepestLeavesSum(TreeNode* root) {
	int sum = 0, n;
	queue<TreeNode*> q; 
	q.push(root);
	while(!q.empty()){
		sum = 0, n = q.size();
		for(int i = 0; i < n; i++){
			auto top = q.front(); q.pop();
			sum += top -> val;     
			if(top -> left) q.push(top -> left);
			if(top -> right) q.push(top -> right);
		}                
	}
	return sum; 
}
};