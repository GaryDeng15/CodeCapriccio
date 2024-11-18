#include <iostream>

struct ListNode {
	int val;
	ListNode* next;
	ListNode():val(0), next(nullptr){}
};

ListNode* detectCycle(ListNode* head) {
	ListNode* slow = head;
	ListNode* fast = head;
	bool cycleFlag = false;
	int entryIndex = -1;
	while (fast->next != nullptr)
	{

	}
}

int main() {

	/**
	* 示例 1：
		输入：head = [3,2,0,-4], pos = 1
		输出：返回索引为 1 的链表节点
		解释：链表中有一个环，其尾部连接到第二个节点。
	*/

	/**
	* 示例 2：
		输入：head = [1,2], pos = 0
		输出：返回索引为 0 的链表节点
		解释：链表中有一个环，其尾部连接到第一个节点
	*/

	/**
	* 示例 3：
		输入：head = [1], pos = -1
		输出：返回 null
		解释：链表中没有环。
	*/

	system("pause");
	return 0;
}