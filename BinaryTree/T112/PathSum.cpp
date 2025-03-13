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
    // 递归法
private:
    bool traversal(TreeNode* cur, int count) {
        if (!cur->left && !cur->right && count == 0) return true; 
        if (!cur->left && !cur->right) return false; 

        if (cur->left) { 
            count -= cur->left->val; 
            if (traversal(cur->left, count)) return true;
            count += cur->left->val; 
        }
        if (cur->right) { 
            count -= cur->right->val; 
            if (traversal(cur->right, count)) return true;
            count += cur->right->val; 
        }
        return false;
    }

public:
    bool hasPathSum(TreeNode* root, int sum) {
        if (root == NULL) return false;
        return traversal(root, sum - root->val);
    }

    // 迭代法
    bool haspathsum(TreeNode* root, int sum) {
        if (root == null) return false;
        
        stack<pair<TreeNode*, int>> st;
        st.push(pair<TreeNode*, int>(root, root->val));
        while (!st.empty()) {
            pair<TreeNode*, int> node = st.top();
            st.pop();
            
            if (!node.first->left && !node.first->right && sum == node.second) return true;

            if (node.first->right) {
                st.push(pair<TreeNode*, int>(node.first->right, node.second + node.first->right->val));
            }

            if (node.first->left) {
                st.push(pair<TreeNode*, int>(node.first->left, node.second + node.first->left->val));
            }
        }
        return false;
    }
};

int main() {

    system("pause");
    return 0;
}