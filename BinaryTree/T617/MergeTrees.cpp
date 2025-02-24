#include<iostream>
#include<vector>
#include<string>

using namespace std;

//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* mergeTrees_preOrder(TreeNode* t1, TreeNode* t2) {
        if (t1 == NULL) return t2; 
        if (t2 == NULL) return t1; 
        t1->val += t2->val;                             
        t1->left = mergeTrees_preOrder(t1->left, t2->left);
        t1->right = mergeTrees_preOrder(t1->right, t2->right);
        return t1;
    }

    TreeNode* mergeTrees_midOrder(TreeNode* t1, TreeNode* t2) {
        if (t1 == NULL) return t2;
        if (t2 == NULL) return t1;
        t1->left = mergeTrees_midOrder(t1->left, t2->left);    
        t1->val += t2->val;                                    
        t1->right = mergeTrees_midOrder(t1->right, t2->right); 
        return t1;
    }
};

int main() {

    system("pause");
    return 0;
}