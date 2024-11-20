#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
	// set、multiset底层是树，对于索引、查找需求比较频繁的使用 unordered_set 更合理
	// 且 unordered_set 元素是不重复的，符合去重要求。
	unordered_set<int> result_set;
	unordered_set<int> nums_set(nums1.begin(), nums1.end());
	for (int num : nums2) {
		if (nums_set.find(num) != nums_set.end()) result_set.insert(num);
	}
	return vector<int>(result_set.begin(), result_set.end());
}

int main() {
	/**
	* 349. 两个数组的交集
		给定两个数组 nums1 和 nums2 ，返回它们的交集。
		输出结果中的每个元素一定是 唯一 的。我们可以 不考虑输出结果的顺序 。

		示例 1：
		输入：nums1 = [1,2,2,1], nums2 = [2,2]
		输出：[2]

		示例 2：
		输入：nums1 = [4,9,5], nums2 = [9,4,9,8,4]
		输出：[9,4]
		解释：[4,9] 也是可通过的
	*/
	system("pause");
	return 0;
}