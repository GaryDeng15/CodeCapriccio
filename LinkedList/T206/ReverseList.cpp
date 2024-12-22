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

// 递归的写法
/**
* ListNode* reverse(ListNode* pre,ListNode* cur){
        if(cur == NULL) return pre;
        ListNode* temp = cur->next;
        cur->next = pre;
        // 可以和双指针法的代码进行对比，如下递归的写法，其实就是做了这两步
        // pre = cur;
        // cur = temp;
        return reverse(cur,temp);
    }
    ListNode* reverseList(ListNode* head) {
        // 和双指针法初始化是一样的逻辑
        // ListNode* cur = head;
        // ListNode* pre = NULL;
        return reverse(NULL, head);
    }
*/

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