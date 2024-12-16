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
		traversal(cur->right, vec); // ��
		vec.push_back(cur->val);    // ��
	}

	vector<int> postorderTraversal(TreeNode* root) {
		vector<int> result;
		traversal(root, result);
		return result;
	}
};

int main() {

	/**
	* 145. �������ĺ������
	  
	  ����һ�ö������ĸ��ڵ� root ��������ڵ�ֵ�� ������� ��

	  ʾ�� 1��
	  ���룺root = [1,null,2,3]
	  �����[3,2,1]
	  ���ͣ�
	  
	  ʾ�� 2��
	  ���룺root = [1,2,3,4,5,null,8,null,null,6,7,9]
	  �����[4,6,7,5,2,9,8,3,1]
	  ���ͣ�

	  ʾ�� 3��
	  ���룺root = []
	  �����[]
	  
	  ʾ�� 4��
	  ���룺root = [1]
	  �����[1]

	  ��ʾ��
	  ���нڵ����Ŀ�ڷ�Χ [0, 100] ��
	  -100 <= Node.val <= 100

	  ���ף��ݹ��㷨�ܼ򵥣������ͨ�������㷨�����
	*/

	system("pause");
	return 0;
}