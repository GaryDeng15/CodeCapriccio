#include <iostream>

struct LinkedNode {
	int val;
	LinkedNode* next;
	LinkedNode() :val(0), next(nullptr){}
};

LinkedNode* swapPairs(LinkedNode* head) {
	LinkedNode* dummyHead = new LinkedNode();
	dummyHead->next = head;
	LinkedNode* cur = dummyHead;
	while ((cur->next != nullptr) && (cur->next->next != nullptr)) {
		LinkedNode* temp1 = cur->next;
		LinkedNode* temp2 = cur->next->next->next;

		cur->next = cur->next->next;
		cur->next->next = temp1;
		cur->next->next->next = temp2;

		cur = cur->next->next;
	}
	return dummyHead->next;
}

int main() {
	/**
	* 示例 1：
		输入：head = [1,2,3,4]
		输出：[2,1,4,3]
	*/

	/**
	* 示例 2：
		输入：head = []
		输出：[]
	*/

	/**
	* 示例 3：
		输入：head = [1]
		输出：[1]
	*/
	system("pause");
	return 0;
}