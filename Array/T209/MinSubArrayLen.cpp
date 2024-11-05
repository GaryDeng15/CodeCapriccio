#include <vector>
#include <iostream>

using namespace std;

//双指针解法
int minSubArrayLen(int target, vector<int>& nums) {
    int result = INT32_MAX, subLen = 0;
    int tempSum = 0;
    for (int start = 0, end = 0; end < nums.size(); end++) {
        tempSum += nums[end];
        while (tempSum >= target) {
            subLen = end - start + 1;
            tempSum -= nums[start++];
            result = result >= subLen ? subLen : result;
        }
    }
    return result == INT32_MAX ? 0 : result;
}

int main() {

    /**
    * 示例 1：
        输入：target = 7, nums = [2,3,1,2,4,3]
        输出：2
        解释：子数组 [4,3] 是该条件下的长度最小的子数组。
    *
    */


    /**
    * 示例 2：
        输入：target = 4, nums = [1,4,4]
        输出：1
    *
    */

    /**
    * 示例 3：
        输入：target = 11, nums = [1,1,1,1,1,1,1,1]
        输出：0
    *
    */

    vector<int> nums = { 1,1,1,1,1,1,1,1 };
    int target = 7;

    //int targetIndex  = search1(nums, target);

    cout << "minSubArrayLen -> " << minSubArrayLen(target, nums) << endl;

    system("pause");
    return 0;
}