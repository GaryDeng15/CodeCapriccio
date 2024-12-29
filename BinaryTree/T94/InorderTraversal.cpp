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
		vec.push_back(cur->val);    // ��
		traversal(cur->right, vec); // ��
	}

	// �ݹ����
	vector<int> inorderTraversal(TreeNode* root) {
		vector<int> result;
		traversal(root, result);
		return result;
	}

	// ��������
	vector<int> inorderTraversal(TreeNode* root) {
		vector<int> result;
		stack<TreeNode*> st;
		TreeNode* cur = root;
		while (cur != NULL || !st.empty()) {
			if (cur != NULL) { // ָ�������ʽڵ㣬���ʵ���ײ�
				st.push(cur); // �����ʵĽڵ�Ž�ջ
				cur = cur->left;                // ��
			}
			else {
				cur = st.top(); // ��ջ�ﵯ�������ݣ�����Ҫ��������ݣ��Ž�result����������ݣ�
				st.pop();
				result.push_back(cur->val);     // ��
				cur = cur->right;               // ��
			}
		}
		return result;
	}

	// ͳһ��������
	vector<int> inorderTraversal(TreeNode* root) {
		vector<int> result;
		stack<TreeNode*> st;
		if (root != NULL) st.push(root);
		while (!st.empty()) {
			TreeNode* node = st.top();
			if (node != NULL) {
				st.pop(); // ���ýڵ㵯���������ظ������������ٽ�������ڵ���ӵ�ջ��
				if (node->right) st.push(node->right);  // ����ҽڵ㣨�սڵ㲻��ջ��

				st.push(node);                          // ����нڵ�
				st.push(NULL); // �нڵ���ʹ������ǻ�û�д�������սڵ���Ϊ��ǡ�

				if (node->left) st.push(node->left);    // �����ڵ㣨�սڵ㲻��ջ��
			}
			else { // ֻ�������սڵ��ʱ�򣬲Ž���һ���ڵ�Ž������
				st.pop();           // ���սڵ㵯��
				node = st.top();    // ����ȡ��ջ��Ԫ��
				st.pop();
				result.push_back(node->val); // ���뵽�����
			}
		}
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