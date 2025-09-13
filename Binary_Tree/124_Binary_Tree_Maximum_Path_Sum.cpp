class Solution {
public:
    int maxSum;

    int solve(TreeNode* root){
        if(!root)
            return 0;
        
        int left = solve(root->left);
        int right = solve(root->right);

        int neeche_mil_gya = left + right + root->val;
        int koi_ek_aacha = max(left, right) + root->val;
        int sirf_root_aacha = root->val;

        maxSum = max({maxSum, neeche_mil_gya, koi_ek_aacha, sirf_root_aacha});

        return max({koi_ek_aacha,sirf_root_aacha});
    }

    int maxPathSum(TreeNode* root) {
        maxSum = INT_MIN;
        solve(root);
        return maxSum;
    }
};