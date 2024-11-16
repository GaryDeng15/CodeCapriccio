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
	* ʾ�� 1��
		���룺head = [1,2,3,4]
		�����[2,1,4,3]
	*/

	/**
	* ʾ�� 2��
		���룺head = []
		�����[]
	*/

	/**
	* ʾ�� 3��
		���룺head = [1]
		�����[1]
	*/
	system("pause");
	return 0;
}