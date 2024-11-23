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
	* 454. ������� II
	�����ĸ��������� nums1��nums2��nums3 �� nums4 �����鳤�ȶ��� n ����������ж��ٸ�Ԫ�� (i, j, k, l) �����㣺
	0 <= i, j, k, l < n
	nums1[i] + nums2[j] + nums3[k] + nums4[l] == 0

	ʾ�� 1��
		���룺nums1 = [1,2], nums2 = [-2,-1], nums3 = [-1,2], nums4 = [0,2]
		�����2
		���ͣ�
		����Ԫ�����£�
		1. (0, 0, 0, 1) -> nums1[0] + nums2[0] + nums3[0] + nums4[1] = 1 + (-2) + (-1) + 2 = 0
		2. (1, 1, 0, 0) -> nums1[1] + nums2[1] + nums3[0] + nums4[0] = 2 + (-1) + (-1) + 0 = 0

	ʾ�� 2��
		���룺nums1 = [0], nums2 = [0], nums3 = [0], nums4 = [0]
		�����1
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