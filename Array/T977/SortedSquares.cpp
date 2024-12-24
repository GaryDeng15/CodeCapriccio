#include <vector>
#include <iostream>

using namespace std;

//双指针解法
vector<int> sortedSquares(vector<int>& nums) {
    vector<int> result(nums.size());
    int newIndex = nums.size() - 1;
    for (int front = 0, back = nums.size() - 1; front <= back;) {
        if (nums[front] * nums[front] > nums[back] * nums[back]) {
            result[newIndex--] = nums[front] * nums[front];
            front++;
        }
        else {
            result[newIndex--] = nums[back] * nums[back];
            back--;
        }
    }
    return result;
}

// 暴力解法
/**
* 
vector<int> sortedSquares(vector<int>& A) {
        for (int i = 0; i < A.size(); i++) {
            A[i] *= A[i];
        }
        sort(A.begin(), A.end()); // 快速排序
        return A;
}
*/

int main() {

    /**
    * 示例 1：
        输入：nums = [-4,-1,0,3,10]
        输出：[0,1,9,16,100]
        解释：平方后，数组变为 [16,1,0,9,100]
        排序后，数组变为 [0,1,9,16,100]
    *
    */


    /**
    * 示例 2：
        输入：nums = [-7,-3,2,3,11]
        输出：[4,9,9,49,121]
    *
    */

    vector<int> nums = { -4,-1,0,3,10 };
    //int target = 9;

    //int targetIndex  = search1(nums, target);

    vector<int> result = sortedSquares(nums);

    for (int elem : result)
    {
        cout << elem << ", ";
    }
    cout << endl;

    system("pause");
    return 0;
}