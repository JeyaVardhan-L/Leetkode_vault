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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<pair<TreeNode*, TreeNode*>>same_nodes;
        same_nodes.push({p,q});
        while(!same_nodes.empty()){
            auto [P , Q] = same_nodes.front();
            same_nodes.pop();
            if(!P && !Q) continue;
            else if(!P || !Q) return false;

            else {
                if(P->val != Q->val) return false;
            }
            same_nodes.push({P->left,Q->left});
            same_nodes.push({P->right,Q->right});
        }
    return true;
    }
};
