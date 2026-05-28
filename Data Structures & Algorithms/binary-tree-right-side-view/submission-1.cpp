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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        if (!root) return result;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int levelSize = q.size();  // number of nodes at current level

            for (int i = 0; i < levelSize; i++) {
                TreeNode* node = q.front();
                q.pop();

                // Only add the LAST node of each level (rightmost visible)
                if (i == levelSize - 1) {
                    result.push_back(node->val);
                }

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
        }

        return result;
    }
};

// my first try
//  vector<int> rightSideView(TreeNode* root) {
// or there is best way that we iterate over left side until left side is done
// once left node is complete
// iterate right side till same depth
// vector<int> rightSideView(TreeNode* root) {
//     vector<int> final;
//     int depth = 0;
//     if (!root) return final;
//     queue<TreeNode*> q;
//     q.push(root);
//     while (!q.empty()) {
//         int levelsize = q.size();
//         TreeNode* node = q.front();
//         q.pop();
//         final.push_back(node->val);
//         if (node->right) {
//             depth++;
//             q.push(node->right);
//             rightSideView(node->right);
//         } else if (node->left) {
//             q.push(node->left);
//             rightSideView(node->left);
//             depth++;
//         } else {
//             rightSideView(node->left);
//         }
//     }
//     return final;
// }

// push right to queue in last and push first
// vector<int> rightSideView(TreeNode* root) {
//     vector<int> result;
//     if (!root) return result;

//     queue<TreeNode*> q;
//     q.push(root);

//     while (!q.empty()) {
//         int levelSize = q.size();  // number of nodes at current level

//         for (int i = 0; i < levelSize; i++) {
//             TreeNode* node = q.front();
//             q.pop();

//             // Only add the LAST node of each level (rightmost visible)
//             if (i == levelSize - 1) {
//                 result.push_back(node->val);
//             }

//             if (node->left)  q.push(node->left);
//             if (node->right) q.push(node->right);
//         }
//     }

//     return result;
// }