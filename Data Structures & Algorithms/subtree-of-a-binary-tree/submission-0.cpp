class Solution {
   public:
    bool isSame(TreeNode* a, TreeNode* b) {
        if (!a && !b) return true;
        if (!a || !b) return false;

        return a->val == b->val && isSame(a->left, b->left) && isSame(a->right, b->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!subRoot) return true;
        if (!root) return false;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();

            if (isSame(node, subRoot)) return true;

            if (node->left) q.push(node->left);

            if (node->right) q.push(node->right);
        }

        return false;
    }
};