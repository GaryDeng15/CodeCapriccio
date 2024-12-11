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
        // 把小于num的都弹出
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
        // 移动滑动窗口
        queue.pop(nums[i - k]);
        queue.push(nums[i]);
        // 收集最大值
        result.push_back(queue.getMaxVal());
    }
    return result;
}


int main() {

    /**
    * 239. 滑动窗口最大值
      
      提示
      给你一个整数数组 nums，有一个大小为 k 的滑动窗口从数组的最左侧移动到数组的最右侧。你只可以看到在滑动窗口内的 k 个数字。滑动窗口每次只向右移动一位。
      
      返回 滑动窗口中的最大值 。
      
      示例 1：
      输入：nums = [1,3,-1,-3,5,3,6,7], k = 3
      输出：[3,3,5,5,6,7]
      解释：
      滑动窗口的位置                最大值
      ---------------               -----
      [1  3  -1] -3  5  3  6  7       3
       1 [3  -1  -3] 5  3  6  7       3
       1  3 [-1  -3  5] 3  6  7       5
       1  3  -1 [-3  5  3] 6  7       5
       1  3  -1  -3 [5  3  6] 7       6
       1  3  -1  -3  5 [3  6  7]      7
      
      示例 2：
      输入：nums = [1], k = 1
      输出：[1]
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