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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == nullptr) return root; // ��һ�������û�ҵ�ɾ���Ľڵ㣬�������սڵ�ֱ�ӷ�����
        if (root->val == key) {
            // �ڶ�����������Һ��Ӷ�Ϊ�գ�Ҷ�ӽڵ㣩��ֱ��ɾ���ڵ㣬 ����NULLΪ���ڵ�
            if (root->left == nullptr && root->right == nullptr) {
                ///! �ڴ��ͷ�
                delete root;
                return nullptr;
            }
            // �����������������Ϊ�գ��Һ��Ӳ�Ϊ�գ�ɾ���ڵ㣬�Һ��Ӳ�λ �������Һ���Ϊ���ڵ�
            else if (root->left == nullptr) {
                auto retNode = root->right;
                ///! �ڴ��ͷ�
                delete root;
                return retNode;
            }
            // ��������������Һ���Ϊ�գ����Ӳ�Ϊ�գ�ɾ���ڵ㣬���Ӳ�λ����������Ϊ���ڵ�
            else if (root->right == nullptr) {
                auto retNode = root->left;
                ///! �ڴ��ͷ�
                delete root;
                return retNode;
            }
            // ��������������Һ��ӽڵ㶼��Ϊ�գ���ɾ���ڵ���������ŵ�ɾ���ڵ����������������ڵ�����ӵ�λ��
            // ������ɾ���ڵ��Һ���Ϊ�µĸ��ڵ㡣
            else {
                TreeNode* cur = root->right; // ��������������Ľڵ�
                while (cur->left != nullptr) {
                    cur = cur->left;
                }
                cur->left = root->left; // ��Ҫɾ���Ľڵ㣨root������������cur�����ӵ�λ��
                TreeNode* tmp = root;   // ��root�ڵ㱣��һ�£�������ɾ��
                root = root->right;     // ���ؾ�root���Һ�����Ϊ��root
                delete tmp;             // �ͷŽڵ��ڴ棨���ﲻдҲ���ԣ���C++����ֶ��ͷ�һ�°ɣ�
                return root;
            }
        }
        if (root->val > key) root->left = deleteNode(root->left, key);
        if (root->val < key) root->right = deleteNode(root->right, key);
        return root;
    }
};

int main() {

    system("pause");
    return 0;
}