#include<iostream>
#include<stack>
#include<vector>
#include<string>
#include<queue>

using namespace std;

class MyQueue {
public:
    MyQueue() {}

    void push(int num) {
        // ��С��num�Ķ�����
        while (!NumQue.empty() && num > NumQue.back()) NumQue.pop_back();
        NumQue.push_back(num);
    }

    void pop(int num) {
        if (!NumQue.empty() && num == NumQue.front()) NumQue.pop_front();
    }

    int getMaxVal() {
        return NumQue.front();
    }

private:
    deque<int> NumQue;
};

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    vector<int> result;
    MyQueue queue;
    for (int i = 0; i < k; i++) {
        queue.push(nums[i]);
    }
    result.push_back(queue.getMaxVal());
    for (int i = k; i < nums.size(); i++) {
        // �ƶ���������
        queue.pop(nums[i - k]);
        queue.push(nums[i]);
        // �ռ����ֵ
        result.push_back(queue.getMaxVal());
    }
    return result;
}


int main() {

    /**
    * 239. �����������ֵ
      
      ��ʾ
      ����һ���������� nums����һ����СΪ k �Ļ������ڴ������������ƶ�����������Ҳࡣ��ֻ���Կ����ڻ��������ڵ� k �����֡���������ÿ��ֻ�����ƶ�һλ��
      
      ���� ���������е����ֵ ��
      
      ʾ�� 1��
      ���룺nums = [1,3,-1,-3,5,3,6,7], k = 3
      �����[3,3,5,5,6,7]
      ���ͣ�
      �������ڵ�λ��                ���ֵ
      ---------------               -----
      [1  3  -1] -3  5  3  6  7       3
       1 [3  -1  -3] 5  3  6  7       3
       1  3 [-1  -3  5] 3  6  7       5
       1  3  -1 [-3  5  3] 6  7       5
       1  3  -1  -3 [5  3  6] 7       6
       1  3  -1  -3  5 [3  6  7]      7
      
      ʾ�� 2��
      ���룺nums = [1], k = 1
      �����[1]
    */
    vector<int> nums = { 1, 3, -1, -3, 5, 3, 6, 7 };
    int k = 3;
    
    
    vector<int> result = maxSlidingWindow(nums, k);
    for (int elem : result) {
        cout << elem << ", ";
    }
    cout << endl;

    system("pause");
    return 0;
}