#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void inorder(TreeNode *root, vector<int>& order){
    TreeNode *current = root;
    if(current == NULL) return;
    inorder(current->left, order);
    order.push_back(current->val);
    inorder(current->right,order);
}

vector<int> inorderTraversal(TreeNode* root) {
    vector<int> result;
    inorder(root,result);
    return result;
}

int main(){
    return 0;
}