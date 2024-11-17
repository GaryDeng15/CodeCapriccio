#include <iostream>

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr){}
};

ListNode* removeNthFromEnd(ListNode* head, int n) {
	ListNode* dummyHead = new ListNode();
	dummyHead->next = head;
	ListNode* fast = dummyHead;
	ListNode* slow = dummyHead;
	while (n-- && fast != nullptr)
	{
		fast = fast->next;
	}
	fast = fast->next;
	while (fast)
	{
		fast = fast->next;
		slow = slow->next;
	}
	ListNode* nodeToDel = slow->next;
	slow->next = slow->next->next;
	delete nodeToDel;
	return dummyHead->next;
}

int main()
{

}