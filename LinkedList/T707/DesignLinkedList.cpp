#include <iostream>

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class MyLinkedList {
public:
    ListNode* node;

    MyLinkedList() {
        node = new ListNode();
    }

    int get(int index) {
        return 0;
    }

    void addAtHead(int val) {

    }

    void addAtTail(int val) {

    }

    void addAtIndex(int index, int val) {

    }

    void deleteAtIndex(int index) {

    }
};



int main(){

    int index = 0, val = 0;
    MyLinkedList* obj = new MyLinkedList();
    int param_1 = obj->get(index);
    obj->addAtHead(val);
    obj->addAtTail(val);
    obj->addAtIndex(index,val);
    obj->deleteAtIndex(index);

	system("pause");
	return 0;
}