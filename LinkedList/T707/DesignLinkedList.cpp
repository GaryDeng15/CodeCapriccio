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

    struct LinkedNode{
        int val;
        LinkedNode* next;
        LinkedNode(int val) : val(val), next(nullptr) {}
    };
private:
    LinkedNode* _dumyHead;
    int _size;

public:
    MyLinkedList() {
        _dumyHead = new LinkedNode(0);
        _size = 0;
    }

    int get(int index) {
        if (index > (_size - 1) || index < 0) {
            return -1;
        }
        LinkedNode* current = _dumyHead->next;
        while (index--) {
            current = current->next;
        }
        return current->val;
    }

    void addAtHead(int val) {
        LinkedNode* newNode = new LinkedNode(val);
        newNode->next = _dumyHead->next;
        _dumyHead->next = newNode;
        _size++;
    }

    void addAtTail(int val) {
        LinkedNode* newNode = new LinkedNode(val);
        LinkedNode* current = _dumyHead;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
        _size++;
    }

    void addAtIndex(int index, int val) {
        if (index > _size || index < 0) {
            return;
        }
        LinkedNode* current = _dumyHead;
        while (index--) {
            current = current->next;
        }
        LinkedNode* newNode = new LinkedNode(val);
        newNode->next = current->next;
        current->next = newNode;
        _size++;
    }

    void deleteAtIndex(int index) {
        if (index >= _size || index < 0) {
            return;
        }
        LinkedNode* current = _dumyHead;
        while (index--) {
            current = current->next;
        }
        LinkedNode* nodeToDel = current->next;
        current->next = current->next->next;
        delete nodeToDel;
        _size--;
    }

    void nodeIter() {
        LinkedNode* current = _dumyHead;
        while (current->next != nullptr) {
            cout << current->val << " ";
            current = current->next;
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

    int getindex = 0, addHeadVal = 33, addTailVal = -1, addIndex = 7, addValAtIndex = 77, delIndex = 0;
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