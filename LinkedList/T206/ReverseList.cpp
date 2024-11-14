#include <iostream>

using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
};

ListNode* reverseList(ListNode* head) {
	ListNode* temp;
	ListNode* pre = nullptr;
	ListNode* cur = head;
	while (cur) {
		temp = cur->next;
		cur->next = pre;
		pre = cur;
		cur = temp;
	}
	return pre;
}

int main() {

	/**
	* 示例 1：
		输入：head = [1,2,3,4,5]
		输出：[5,4,3,2,1]
	*/
	
	/**
	* 示例 2：
		输入：head = [1,2]
		输出：[2,1]
	*/

	system("pause");
	return 0;
}