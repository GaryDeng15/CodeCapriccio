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
	* ʾ�� 1��
		���룺head = [1,2,3,4,5]
		�����[5,4,3,2,1]
	*/
	
	/**
	* ʾ�� 2��
		���룺head = [1,2]
		�����[2,1]
	*/

	system("pause");
	return 0;
}