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
    int kthSmallest(TreeNode* root, int k) {
        int count = 0;
        int answer = 0;
        checksum(root, k, count, answer);
        return answer;
    }
    void checksum(TreeNode* q, int k, int& count, int& answer) {
        if (!q) return;
        checksum(q->left, k, count, answer);
        count++;
        if (count == k) {
            answer = q->val;
            return;
        }
        checksum(q->right, k, count, answer);
    }
};

// class Solution {
// public:
//     int kthSmallest(TreeNode* root, int k) {
//         // with the number k we iterate left that multiple number of times
//         // if left doesnt exist then iterate to right side
//         if(k==0 ) return root->val;
//         if(!root || !k) return 0;
//         for(int j=0;j<=k;j++){
//             if(root->left){
//                 checksum(root->left);
//             }
//             else if(root->right){
//                 checksum(root->right);
//             }
//         }

//     }
//     int checksum(TreeNode* q){
//         if(!q || q==nullptr) return 0;
//         else return q->val;

//     }
// };
