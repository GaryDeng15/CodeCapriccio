#include <iostream>
using namespace std;

//struct ListNode {
//    int val;
//    ListNode* next;
//    //ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    //ListNode(int x, ListNode* next) : val(x), next(next) {}
//};

class MyLinkedList {

    struct ListNode {
        int val;
        ListNode* next;
        ListNode(int x) : val(x), next(nullptr) {}
    };

private:
    ListNode* _dummyHead;
    int _size;

public:
    MyLinkedList() {
        _dummyHead = new ListNode(0);
        _size = 0;
    }

    int get(int index) {
        if (_size <= 0 || index > _size - 1 || index < 0)
        {
            return -1;
        }
        ListNode* current = new ListNode(0);
        current->next = _dummyHead;
        while (index-- >= 0) {
            current = current->next;
        }
        return current->val;
    }

    void addAtHead(int val) {
        ListNode* current = new ListNode(val);
        current->next = _dummyHead;
        _dummyHead = current;
        _size++;
    }

    void addAtTail(int val) {
        ListNode* current = new ListNode(0);
        current->next = _dummyHead;
        int count = _size;
        while (count-- >= 0) {
            current = current->next;
        }
        ListNode* newNode = new ListNode(val);
        current->next = newNode;
        _size++;
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > _size - 1)
        {
            return;
        }
        ListNode* current = new ListNode(0);
        ListNode* before = new ListNode(0);
        current->next = _dummyHead;
        before->next = current;
        while (index-- >= 0) {
            before = before->next;
            current = current->next;
        }
        ListNode* addNode = new ListNode(val);
        before->next = addNode;
        addNode->next = current;
        _size++;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index > _size - 1)
        {
            return;
        }
        ListNode* current = new ListNode(0);
        ListNode* before = new ListNode(0);
        current->next = _dummyHead;
        before->next = current;
        while (index-- >= 0) {
            before = before->next;
            current = current->next;
        }
        before->next = current->next;
        delete current;
        _size--;
    }

    void nodeIter() {
        ListNode* current = new ListNode(0);
        current->next = _dummyHead;
        int count = _size;
        while (count-- >= 0) {
            current = current->next;
            cout << current->val << ", ";
            //current = current->next;
        }
        cout << endl;
    }
};



int main(){

    /*int index = 0, val = 0;
    MyLinkedList* obj = new MyLinkedList();
    int param_1 = obj->get(index);
    obj->addAtHead(val);
    obj->addAtTail(val);
    obj->addAtIndex(index,val);
    obj->deleteAtIndex(index);*/

    MyLinkedList* obj = new MyLinkedList();
    for (int i = 1; i < 13; i++)
    {
        obj->addAtTail(i);
    }
    obj->nodeIter();

    int getindex = 3, addHeadVal = -1, addTailVal = 100, addIndex = 5, addValAtIndex = 66, delIndex = 5;
    cout << "The val of "<< getindex <<" is " << obj->get(getindex)<< endl;

    obj->addAtHead(addHeadVal);
    cout << "After add " << addHeadVal << " at head: ";
    obj->nodeIter();

    obj->addAtTail(addTailVal);
    cout << "After add " << addTailVal << " at tail: ";
    obj->nodeIter();

    obj->addAtIndex(addIndex, addValAtIndex);
    cout << "After add " << addValAtIndex << " at "<< addIndex << ": ";
    obj->nodeIter();

    obj->deleteAtIndex(delIndex);
    cout << "Dlete at index " << delIndex << " after: ";
    obj->nodeIter();

	system("pause");
	return 0;
}