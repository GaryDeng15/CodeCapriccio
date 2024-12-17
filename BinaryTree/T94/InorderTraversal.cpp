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
	void traversal(TreeNode* cur, vector<int>& vec) {
		if (cur == NULL) return;
		traversal(cur->left, vec);  // ��
		vec.push_back(cur->val);    // ��
		traversal(cur->right, vec); // ��
	}

	vector<int> inorderTraversal(TreeNode* root) {
		vector<int> result;
		traversal(root, result);
		return result;
	}
};

int main() {

	/**
	* 94. ���������������
	  
	  ����һ���������ĸ��ڵ� root ������ ���� ���� ���� ��
	  
	  ʾ�� 1��
	  ���룺root = [1,null,2,3]
	  �����[1,3,2]
	  
	  ʾ�� 2��
	  ���룺root = []
	  �����[]
	  
	  ʾ�� 3��
	  ���룺root = [1]
	  �����[1]

	  ��ʾ��
	  ���нڵ���Ŀ�ڷ�Χ [0, 100] ��
	  -100 <= Node.val <= 100

	  ����: �ݹ��㷨�ܼ򵥣������ͨ�������㷨�����
	*/

	system("pause");
	return 0;
}