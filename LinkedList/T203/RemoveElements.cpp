#include <iostream>
#include <vector>

using namespace std;

/**Definition for singly-linked list.**/
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// 经典解法，单独处理头节点
ListNode* removeElements(ListNode* head, int val) {
    while (head != NULL && head->val == val)
    {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    ListNode* current = head;
    while (current != NULL && current->next != NULL)
    {
        if (current->next->val == val)
        {
            ListNode* temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
        else
        {
            current = current->next;
        }
    }
    return head;
}

int main() {
    /**
    * 示例 1：

        输入：head = [1,2,6,3,4,5,6], val = 6
        输出：[1,2,3,4,5]
    */
    vector<int> input = { 1,2,6,3,4,5,6 };
    int val = 6; 
    ListNode* head;
    for (int i = 0; i < input.size(); i++)
    {
        
    }
    ListNode* result = removeElements(head, val);

    while (result != NULL && result->next !=NULL)
    {
        cout << result->val << ", ";
        result = result->next;
    }
    cout << endl;

    system("pause");
    return 0;
}