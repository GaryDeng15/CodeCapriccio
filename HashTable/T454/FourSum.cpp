#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
	unordered_map<int, int> record_map;
	int result = 0;
	for (int a : nums1) {
		for (int b : nums2) {
			record_map[a + b]++;
		}
	}

	for (int c : nums3) {
		for (int d : nums4) {
			result += record_map[0 - (c + d)];
		}
	}

	return result;
}

int main() {
	/**
	* 454. 四数相加 II
	给你四个整数数组 nums1、nums2、nums3 和 nums4 ，数组长度都是 n ，请你计算有多少个元组 (i, j, k, l) 能满足：
	0 <= i, j, k, l < n
	nums1[i] + nums2[j] + nums3[k] + nums4[l] == 0

	示例 1：
		输入：nums1 = [1,2], nums2 = [-2,-1], nums3 = [-1,2], nums4 = [0,2]
		输出：2
		解释：
		两个元组如下：
		1. (0, 0, 0, 1) -> nums1[0] + nums2[0] + nums3[0] + nums4[1] = 1 + (-2) + (-1) + 2 = 0
		2. (1, 1, 0, 0) -> nums1[1] + nums2[1] + nums3[0] + nums4[0] = 2 + (-1) + (-1) + 0 = 0

	示例 2：
		输入：nums1 = [0], nums2 = [0], nums3 = [0], nums4 = [0]
		输出：1
	*/

	vector<int> nums1 = {1, 2};
	vector<int> nums2 = {-2, -1};
	vector<int> nums3 = {-1, 2};
	vector<int> nums4 = {0, 2};

	/*vector<int> nums1 = { 0 };
	vector<int> nums2 = { 0 };
	vector<int> nums3 = { 0 };
	vector<int> nums4 = { 0 };*/

	int result = fourSumCount(nums1, nums2, nums3, nums4);
	cout << "Result is " << result << endl;
	system("pause");
	return 0;
}