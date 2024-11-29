#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    for (int k = 0; k < nums.size(); k++) {
        // 剪枝处理
        if (nums[k] > target && nums[k] >= 0) {
            break; // 这里使用break，统一通过最后的return返回
        }
        // 对nums[k]去重
        if (k > 0 && nums[k] == nums[k - 1]) {
            continue;
        }
        for (int i = k + 1; i < nums.size(); i++) {
            // 2级剪枝处理
            if (nums[k] + nums[i] > target && nums[k] + nums[i] >= 0) {
                break;
            }

            // 对nums[i]去重
            if (i > k + 1 && nums[i] == nums[i - 1]) {
                continue;
            }
            int left = i + 1;
            int right = nums.size() - 1;
            while (right > left) {
                // nums[k] + nums[i] + nums[left] + nums[right] > target 会溢出
                if ((long)nums[k] + nums[i] + nums[left] + nums[right] > target) {
                    right--;
                    // nums[k] + nums[i] + nums[left] + nums[right] < target 会溢出
                }
                else if ((long)nums[k] + nums[i] + nums[left] + nums[right] < target) {
                    left++;
                }
                else {
                    result.push_back(vector<int>{nums[k], nums[i], nums[left], nums[right]});
                    // 对nums[left]和nums[right]去重
                    while (right > left && nums[right] == nums[right - 1]) right--;
                    while (right > left && nums[left] == nums[left + 1]) left++;

                    // 找到答案时，双指针同时收缩
                    right--;
                    left++;
                }
            }

        }
    }
    return result;
}

int main() {
	/**
	* 18. 四数之和
	  给你一个由 n 个整数组成的数组 nums ，和一个目标值 target 。请你找出并返回满足下述全部条件且不重复的四元组 [nums[a], nums[b], nums[c], nums[d]] （若两个四元组元素一一对应，则认为两个四元组重复）：
		0 <= a, b, c, d < n
		a、b、c 和 d 互不相同
		nums[a] + nums[b] + nums[c] + nums[d] == target
		你可以按 任意顺序 返回答案 。

		示例 1：
		输入：nums = [1,0,-1,0,-2,2], target = 0
		输出：[[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

		示例 2：
		输入：nums = [2,2,2,2,2], target = 8
		输出：[[2,2,2,2]
	*/
	system("pause");
	return 0;
}