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
    bool compare(TreeNode* left, TreeNode* right) {
        // �ų��սڵ�
        if (left == NULL && right != NULL) return false;
        else if (left != NULL && right == NULL) return false;
        else if (left == NULL && right == NULL) return true;
        // �ų���ֵ��ͬ
        else if (left->val != right->val) return false;

        // ��ʱ���ǣ����ҽڵ㶼��Ϊ�գ�����ֵ��ͬ�����
        // ��ʱ�����ݹ飬����һ����ж�
        bool outside = compare(left->left, right->right);   // ���������� ����������
        bool inside = compare(left->right, right->left);    // ���������ҡ� ����������
        bool isSame = outside && inside;                    // ���������С� ���������� ���߼�����
        return isSame;

    }

    bool isSymmetric(TreeNode* root) {
        if (root == NULL) return true;
        return compare(root->left, root->right);
    }
};

int main() {

    system("pause");
    return 0;
}