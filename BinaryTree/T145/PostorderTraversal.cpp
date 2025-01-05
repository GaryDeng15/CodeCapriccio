#include<iostream>
#include<vector>
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

	// ��������
	vector<int> postorderTraversal(TreeNode* root) {
		stack<TreeNode*> st;
		vector<int> result;
		if (root == NULL) return result;
		st.push(root);
		while (!st.empty()) {
			TreeNode* node = st.top();
			st.pop();
			result.push_back(node->val);
			if (node->left) st.push(node->left); // �����ǰ������������һ����ջ˳�� ���սڵ㲻��ջ��
			if (node->right) st.push(node->right); // �սڵ㲻��ջ
		}
		reverse(result.begin(), result.end()); // �������ת֮����������е�˳����
		return result;
	}

	// ͳһ��������
	vector<int> postorderTraversal(TreeNode* root) {
		vector<int> result;
		stack<TreeNode*> st;
		if (root != NULL) st.push(root);
		while (!st.empty()) {
			TreeNode* node = st.top();
			if (node != NULL) {
				st.pop();
				st.push(node);                          // ��
				st.push(NULL);

				if (node->right) st.push(node->right);  // ��
				if (node->left) st.push(node->left);    // ��

			}
			else {
				st.pop();
				node = st.top();
				st.pop();
				result.push_back(node->val);
			}
		}
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