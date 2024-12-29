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
		vec.push_back(cur->val);    // 中
		traversal(cur->right, vec); // 右
	}

	// 递归遍历
	vector<int> inorderTraversal(TreeNode* root) {
		vector<int> result;
		traversal(root, result);
		return result;
	}

	// 迭代遍历
	vector<int> inorderTraversal(TreeNode* root) {
		vector<int> result;
		stack<TreeNode*> st;
		TreeNode* cur = root;
		while (cur != NULL || !st.empty()) {
			if (cur != NULL) { // 指针来访问节点，访问到最底层
				st.push(cur); // 将访问的节点放进栈
				cur = cur->left;                // 左
			}
			else {
				cur = st.top(); // 从栈里弹出的数据，就是要处理的数据（放进result数组里的数据）
				st.pop();
				result.push_back(cur->val);     // 中
				cur = cur->right;               // 右
			}
		}
		return result;
	}

	// 统一迭代遍历
	vector<int> inorderTraversal(TreeNode* root) {
		vector<int> result;
		stack<TreeNode*> st;
		if (root != NULL) st.push(root);
		while (!st.empty()) {
			TreeNode* node = st.top();
			if (node != NULL) {
				st.pop(); // 将该节点弹出，避免重复操作，下面再将右中左节点添加到栈中
				if (node->right) st.push(node->right);  // 添加右节点（空节点不入栈）

				st.push(node);                          // 添加中节点
				st.push(NULL); // 中节点访问过，但是还没有处理，加入空节点做为标记。

				if (node->left) st.push(node->left);    // 添加左节点（空节点不入栈）
			}
			else { // 只有遇到空节点的时候，才将下一个节点放进结果集
				st.pop();           // 将空节点弹出
				node = st.top();    // 重新取出栈中元素
				st.pop();
				result.push_back(node->val); // 加入到结果集
			}
		}
		return result;
	}
};

int main() {

	/**
	* 94. 二叉树的中序遍历
	  
	  给定一个二叉树的根节点 root ，返回 它的 中序 遍历 。
	  
	  示例 1：
	  输入：root = [1,null,2,3]
	  输出：[1,3,2]
	  
	  示例 2：
	  输入：root = []
	  输出：[]
	  
	  示例 3：
	  输入：root = [1]
	  输出：[1]

	  提示：
	  树中节点数目在范围 [0, 100] 内
	  -100 <= Node.val <= 100

	  进阶: 递归算法很简单，你可以通过迭代算法完成吗？
	*/

	system("pause");
	return 0;
}