#include <iostream>

struct ListNode {
	int val;
	ListNode* next;
	ListNode():val(0), next(nullptr){}
};

ListNode* detectCycle(ListNode* head) {
	ListNode* slow = head;
	ListNode* fast = head;
	while (fast != nullptr && fast->next != nullptr)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow) {
			ListNode* index1 = fast;
			ListNode* index2 = head;
			while (index1 != index2)
			{
				index1 = index1->next;
				index2 = index2->next;
			}
			return index1;
		}
	}
	return nullptr;
}

int main() {

	/**
	* ʾ�� 1��
		���룺head = [3,2,0,-4], pos = 1
		�������������Ϊ 1 ������ڵ�
		���ͣ���������һ��������β�����ӵ��ڶ����ڵ㡣
	*/

	/**
	* ʾ�� 2��
		���룺head = [1,2], pos = 0
		�������������Ϊ 0 ������ڵ�
		���ͣ���������һ��������β�����ӵ���һ���ڵ�
	*/

	/**
	* ʾ�� 3��
		���룺head = [1], pos = -1
		��������� null
		���ͣ�������û�л���
	*/

	system("pause");
	return 0;
}