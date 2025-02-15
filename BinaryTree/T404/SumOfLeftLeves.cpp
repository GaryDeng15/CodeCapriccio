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
    int sumOfLeftLeaves(TreeNode* root) {
        if (root == NULL) return 0;
        if (root->left == NULL && root->right == NULL) return 0;

        int leftValue = sumOfLeftLeaves(root->left);    // ◊Û
        if (root->left && !root->left->left && !root->left->right) { 
            leftValue = root->left->val;
        }
        int rightValue = sumOfLeftLeaves(root->right);  // ”“

        int sum = leftValue + rightValue;               // ÷–
        return sum;
    }
};

int main() {

    system("pause");
    return 0;
}