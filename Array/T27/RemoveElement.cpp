#include <vector>
#include <iostream>

using namespace std;

// 快慢指针解法：快指针指向遍历的元素下标，慢指针指向新数组的下标。
int removeElement(vector<int>& nums, int val) {
    int fastIndex = 0;
    int slowIndex = 0;

    for (fastIndex = 0; fastIndex < nums.size(); fastIndex++) {
        if (nums[fastIndex] != val)
        {
            nums[slowIndex++] = nums[fastIndex];
        }
    }

    return slowIndex;
}

/**
* 
* 
* 暴力解法
// 时间复杂度：O(n^2)
// 空间复杂度：O(1)
int removeElement(vector<int>& nums, int val) {
    int size = nums.size();
    for (int i = 0; i < size; i++) {
        if (nums[i] == val) { // 发现需要移除的元素，就将数组集体向前移动一位
            for (int j = i + 1; j < size; j++) {
                nums[j - 1] = nums[j];
            }
            i--; // 因为下标i以后的数值都向前移动了一位，所以i也向前移动一位
            size--; // 此时数组的大小-1
        }
    }
    return size;
}
*/

int main() {

    /**
    * 示例 1：
        输入：nums = [3,2,2,3], val = 3
        输出：2, nums = [2,2,_,_]
        解释：你的函数函数应该返回 k = 2, 并且 nums 中的前两个元素均为 2。
        你在返回的 k 个元素之外留下了什么并不重要（因此它们并不计入评测）。
    *
    */


    /**
    * 示例 2：
        输入：nums = [0,1,2,2,3,0,4,2], val = 2
        输出：5, nums = [0,1,4,0,3,_,_,_]
        解释：你的函数应该返回 k = 5，并且 nums 中的前五个元素为 0,0,1,3,4。
        注意这五个元素可以任意顺序返回。
        你在返回的 k 个元素之外留下了什么并不重要（因此它们并不计入评测）。
    *
    */

    vector<int> nums = { 3,2,2,3 };
    int val = 2;

    cout << "The newSize is " << removeElement(nums, val) << endl;

    for (int elem : nums) {
        cout << elem << ", ";
    }
    cout << endl;

    system("pause");
    return 0;
}