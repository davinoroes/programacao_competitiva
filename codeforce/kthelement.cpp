#include<bits/stdc++.h>
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void kesimo(TreeNode* root, int k, int *contador, int *resultado){
        if(root == NULL || *contador >= k) return;
        kesimo(root->left,k,contador,resultado);
        (*contador)++;
        if(*contador == k){
            *resultado = root->val;
            return;
        }
        kesimo(root->right,k,contador,resultado);
    }

    int kthSmallest(TreeNode* root, int k) {
        int cont = 0;
        int resp = -1;
        kesimo(root, k, &cont, &resp);
        return resp;
    }
    
};

//a ideia vai ser, fazer o percurso em ordem da árvore, e a partir de um contador, achar o k-ésimo dessa ordem;