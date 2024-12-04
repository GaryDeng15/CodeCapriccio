#include<iostream>
#include<stack>

using namespace std;

class MyQueue {
public:
    stack<int> stackIn;
    stack<int> stackOut;

    MyQueue() {

    }

    void push(int x) {
        stackIn.push(x);
    }

    int pop() {
        if (stackOut.empty())
        {
            while (!stackIn.empty()) { 
                stackOut.push(stackIn.top());
                stackIn.pop();
            }
        }
        int result = stackOut.top();
        stackOut.pop();
        return result;
    }

    int peek() {
        int result = this->pop();
        stackOut.push(result);
        return result;
    }

    bool empty() {
        return stackIn.empty() && stackOut.empty();
    }
};

int main() {

    /**
    * 232. ��ջʵ�ֶ���
      �����ʹ������ջʵ�������ȳ����С�����Ӧ��֧��һ�����֧�ֵ����в�����push��pop��peek��empty����
      ʵ�� MyQueue �ࣺ
      
      void push(int x) ��Ԫ�� x �Ƶ����е�ĩβ
      int pop() �Ӷ��еĿ�ͷ�Ƴ�������Ԫ��
      int peek() ���ض��п�ͷ��Ԫ��
      boolean empty() �������Ϊ�գ����� true �����򣬷��� false

      ˵����
      �� ֻ�� ʹ�ñ�׼��ջ���� ���� Ҳ����ֻ�� push to top, peek/pop from top, size, �� is empty �����ǺϷ��ġ�
      ����ʹ�õ�����Ҳ��֧��ջ�������ʹ�� list ���� deque��˫�˶��У���ģ��һ��ջ��ֻҪ�Ǳ�׼��ջ�������ɡ�
      
      ʾ�� 1�� 
      ���룺
      ["MyQueue", "push", "push", "peek", "pop", "empty"]
      [[], [1], [2], [], [], []]
      �����
      [null, null, null, 1, 1, false]
      
      ���ͣ�
      MyQueue myQueue = new MyQueue();
      myQueue.push(1); // queue is: [1]
      myQueue.push(2); // queue is: [1, 2] (leftmost is front of the queue)
      myQueue.peek(); // return 1
      myQueue.pop(); // return 1, queue is [2]
      myQueue.empty(); // return false
 

      ��ʾ��
      1 <= x <= 9
      ������ 100 �� push��pop��peek �� empty
      �������в���������Ч�� �����磬һ���յĶ��в������ pop ���� peek ������
      
      
      ���ף�
      ���ܷ�ʵ��ÿ��������̯ʱ�临�Ӷ�Ϊ O(1) �Ķ��У����仰˵��ִ�� n ����������ʱ�临�Ӷ�Ϊ O(n) ����ʹ����һ���������ܻ��ѽϳ�ʱ�䡣
    */

    system("pause");
    return 0;
}