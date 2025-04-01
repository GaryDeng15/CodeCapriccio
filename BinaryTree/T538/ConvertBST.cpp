#include<iostream>
#include<vector>
#include<string>
#include<stack>

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
private:
    // �ݹ鷨
    int pre = 0; // ��¼ǰһ���ڵ����ֵ
    void traversal(TreeNode* cur) { // ���������
        if (cur == NULL) return;
        traversal(cur->right);
        cur->val += pre;
        pre = cur->val;
        traversal(cur->left);
    }
public:
    TreeNode* convertBST(TreeNode* root) {
        pre = 0;
        traversal(root);
        return root;
    }

// ������
private:
    int pre; // ��¼ǰһ���ڵ����ֵ
    void traversal(TreeNode* root) {
        stack<TreeNode*> st;
        TreeNode* cur = root;
        while (cur != NULL || !st.empty()) {
            if (cur != NULL) {
                st.push(cur);
                cur = cur->right;   // ��
            }
            else {
                cur = st.top();     // ��
                st.pop();
                cur->val += pre;
                pre = cur->val;
                cur = cur->left;    // ��
            }
        }
    }
public:
    TreeNode* convertBST(TreeNode* root) {
        pre = 0;
        traversal(root);
        return root;
    }
};

int main() {

    system("pause");
    return 0;
}