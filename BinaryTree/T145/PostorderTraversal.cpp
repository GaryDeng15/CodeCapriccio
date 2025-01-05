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
		traversal(cur->left, vec);  // 左
		traversal(cur->right, vec); // 右
		vec.push_back(cur->val);    // 中
	}

	vector<int> postorderTraversal(TreeNode* root) {
		vector<int> result;
		traversal(root, result);
		return result;
	}

	// 迭代遍历
	vector<int> postorderTraversal(TreeNode* root) {
		stack<TreeNode*> st;
		vector<int> result;
		if (root == NULL) return result;
		st.push(root);
		while (!st.empty()) {
			TreeNode* node = st.top();
			st.pop();
			result.push_back(node->val);
			if (node->left) st.push(node->left); // 相对于前序遍历，这更改一下入栈顺序 （空节点不入栈）
			if (node->right) st.push(node->right); // 空节点不入栈
		}
		reverse(result.begin(), result.end()); // 将结果反转之后就是左右中的顺序了
		return result;
	}

	// 统一迭代遍历
	vector<int> postorderTraversal(TreeNode* root) {
		vector<int> result;
		stack<TreeNode*> st;
		if (root != NULL) st.push(root);
		while (!st.empty()) {
			TreeNode* node = st.top();
			if (node != NULL) {
				st.pop();
				st.push(node);                          // 中
				st.push(NULL);

				if (node->right) st.push(node->right);  // 右
				if (node->left) st.push(node->left);    // 左

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
	* 145. 二叉树的后序遍历
	  
	  给你一棵二叉树的根节点 root ，返回其节点值的 后序遍历 。

	  示例 1：
	  输入：root = [1,null,2,3]
	  输出：[3,2,1]
	  解释：
	  
	  示例 2：
	  输入：root = [1,2,3,4,5,null,8,null,null,6,7,9]
	  输出：[4,6,7,5,2,9,8,3,1]
	  解释：

	  示例 3：
	  输入：root = []
	  输出：[]
	  
	  示例 4：
	  输入：root = [1]
	  输出：[1]

	  提示：
	  树中节点的数目在范围 [0, 100] 内
	  -100 <= Node.val <= 100

	  进阶：递归算法很简单，你可以通过迭代算法完成吗？
	*/

	system("pause");
	return 0;
}