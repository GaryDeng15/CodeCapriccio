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
		traversal(cur->left, vec);  // 左
		vec.push_back(cur->val);    // 中
		traversal(cur->right, vec); // 右
	}

	vector<int> inorderTraversal(TreeNode* root) {
		vector<int> result;
		traversal(root, result);
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