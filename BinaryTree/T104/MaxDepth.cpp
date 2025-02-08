#include<iostream>
#include<vector>

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
    int getdepth(TreeNode* node) {
        if (node == NULL) return 0;
        int leftdepth = getdepth(node->left);       // ◊Û
        int rightdepth = getdepth(node->right);     // ”“
        int depth = 1 + max(leftdepth, rightdepth); // ÷–
        return depth;
    }
    int maxDepth(TreeNode* root) {
        return getdepth(root);
    }
};

int main() {

    system("pause");
    return 0;
}