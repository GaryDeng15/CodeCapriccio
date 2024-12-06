#include<iostream>
#include<queue>

using namespace std;

class MyStack {
public:
    queue<int> MyQueue;

    MyStack() {

    }

    void push(int x) {
        MyQueue.push(x);
    }

    int pop() {
        int size = MyQueue.size();
        size--;
        while (size--) {
            MyQueue.push(MyQueue.front());
            MyQueue.pop();
        }
        int result = MyQueue.front();
        MyQueue.pop();
        return result;
    }

    int top() {
        return MyQueue.back();
    }

    bool empty() {
        return MyQueue.empty();
    }
};

int main() {

    /**
    * 225. �ö���ʵ��ջ
      �����ʹ����������ʵ��һ�������ȳ���LIFO����ջ����֧����ͨջ��ȫ�����ֲ�����push��top��pop �� empty����
      
      ʵ�� MyStack �ࣺ
      void push(int x) ��Ԫ�� x ѹ��ջ����
      int pop() �Ƴ�������ջ��Ԫ�ء�
      int top() ����ջ��Ԫ�ء�
      boolean empty() ���ջ�ǿյģ����� true �����򣬷��� false ��
      
      
      ע�⣺
      ��ֻ��ʹ�ö��еı�׼���� ���� Ҳ���� push to back��peek/pop from front��size �� is empty ��Щ������
      ����ʹ�õ�����Ҳ��֧�ֶ��С� �����ʹ�� list ���б����� deque��˫�˶��У���ģ��һ������ , ֻҪ�Ǳ�׼�Ķ��в������ɡ�
      
      
      ʾ����
      ���룺
      ["MyStack", "push", "push", "top", "pop", "empty"]
      [[], [1], [2], [], [], []]
      �����
      [null, null, null, 2, 2, false]
      
      ���ͣ�
      MyStack myStack = new MyStack();
      myStack.push(1);
      myStack.push(2);
      myStack.top(); // ���� 2
      myStack.pop(); // ���� 2
      myStack.empty(); // ���� False
      
      
      ��ʾ��
      1 <= x <= 9
      ������100 �� push��pop��top �� empty
      ÿ�ε��� pop �� top ����֤ջ��Ϊ��
      
      ���ף����ܷ����һ��������ʵ��ջ��
    */

    system("pause");
    return 0;
}