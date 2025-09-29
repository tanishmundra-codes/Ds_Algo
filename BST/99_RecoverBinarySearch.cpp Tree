class Solution {
public:
    TreeNode* first = nullptr; 
    TreeNode* second = nullptr;
    TreeNode* prev = new TreeNode(INT_MIN);

    void inorder(TreeNode* root){
        if(!root){
            return;
        }

        inorder(root->left);

        // [1,3,2]
        if(prev != nullptr && prev->val > root->val){ // agr hamra curr node prev se small hai
            if(first == nullptr){ // 3 jo ki prev hai aur 2 jo ki curr hai 
                first = prev; // toh phela ele mil gya
            }
            second = root; // second hamra curr element hoga
        }else{
            prev = root; // hamesha prev ko upate kerte rho
        }

        inorder(root->right);
    }

    void recoverTree(TreeNode* root) {
    
        if(!root){
            return ;
        }
        inorder(root);
        if(first != NULL && second != NULL){
            swap(first->val, second->val);
        }
    }
};
