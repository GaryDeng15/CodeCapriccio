#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
	// a + b + c = 0;
	vector<vector<int>> result;
	sort(nums.begin(), nums.end());

	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] > 0) return result;

		// �� a ȥ��
		if (i > 0 && nums[i] == nums[i - 1]) continue;
		int left = i + 1;
		int right = nums.size() - 1;
		while (right > left) {
			if (nums[i] + nums[left] + nums[right] > 0) right--;
			else if (nums[i] + nums[left] + nums[right] < 0) left++;
			else {
				result.push_back(vector<int>{nums[i], nums[left], nums[right]});
				// �� b ȥ��
				while (right > left && nums[right] == nums[right - 1]) right--;
				// �� c ȥ��
				while (right > left && nums[left] == nums[left + 1]) left++;
				
				right--;
				left++;
			}
		}
	}
	return result;
}

int main() {
	/**
	* 15. ����֮��
		����һ���������� nums ���ж��Ƿ������Ԫ�� [nums[i], nums[j], nums[k]] ���� i != j��i != k �� j != k ��ͬʱ������ nums[i] + nums[j] + nums[k] == 0 �����㷵�����к�Ϊ 0 �Ҳ��ظ�����Ԫ�顣

		ע�⣺���в����԰����ظ�����Ԫ�顣

		ʾ�� 1��
		���룺nums = [-1,0,1,2,-1,-4]
		�����[[-1,-1,2],[-1,0,1]]
		���ͣ�
		nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0 ��
		nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0 ��
		nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0 ��
		��ͬ����Ԫ���� [-1,0,1] �� [-1,-1,2] ��
		ע�⣬�����˳�����Ԫ���˳�򲢲���Ҫ��
			
		ʾ�� 2��
		���룺nums = [0,1,1]
		�����[]
		���ͣ�Ψһ���ܵ���Ԫ��Ͳ�Ϊ 0 ��

		ʾ�� 3��
		���룺nums = [0,0,0]
		�����[[0,0,0]]
		���ͣ�Ψһ���ܵ���Ԫ���Ϊ 0 ��
 
		��ʾ��
		3 <= nums.length <= 3000
		-105 <= nums[i] <= 105
	*/

	system("pause");
	return 0;
}