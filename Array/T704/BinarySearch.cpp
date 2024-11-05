#include <vector>
#include <iostream>

using namespace std;

// 左闭右闭写法。
int search1(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1, middle;

    while (left <= right) {
        middle = (left + right) / 2;
        if (nums[middle] > target) {
            right = middle - 1;
        }
        else if (nums[middle] < target) {
            left = middle + 1;
        }
        else {
            return middle;
        }

    }

    return -1;
}

// 左闭右开写法。
int search2(vector<int>& nums, int target) {
    int left = 0, right = nums.size(), middle;

    while (left < right) {

        middle = (left + right) / 2;

        if (nums[middle] > target) {
            right = middle;
        }
        else if (nums[middle] < target) {
            left = middle + 1;
        }
        else {
            return middle;
        }
    }

    return -1;
}

// 左开右闭写法。
int search3(vector<int>& nums, int target) {
    int left = -1, right = nums.size() - 1, middle;

    while (left < right) {

        middle = (left + right) / 2 + 1;

        if (nums[middle] > target) {
            right = middle - 1;
        }
        else if (nums[middle] < target) {
            left = middle;
        }
        else {
            return middle;
        }
    }

    return -1;
}

int main() {

    /**
    * 示例 1:
        输入: nums = [-1,0,3,5,9,12], target = 9
        输出: 4
        解释: 9 出现在 nums 中并且下标为 4
    *
    */


    /**
    * 示例 2:
        输入: nums = [-1,0,3,5,9,12], target = 2
        输出: -1
        解释: 2 不存在 nums 中因此返回 -1
    *
    */

    vector<int> nums = { -1,0,3,5,9,12 };
    int target = 9;

    //int targetIndex  = search1(nums, target);

    int targetIndex = search3(nums, target);

    cout << "The index of target is " << targetIndex << endl;

    system("pause");
    return 0;
}