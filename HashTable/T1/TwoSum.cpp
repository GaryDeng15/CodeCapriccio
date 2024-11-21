#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
	unordered_map<int, int> result_map;
	for (int i = 0; i < nums.size(); i++) {
		auto iter = result_map.find(target - nums[i]);
		if (iter != result_map.end())
		{
			return { iter->second, i };
		}
		result_map.insert(pair<int, int>(nums[i], i));
	}
	return {};
}

int main() {
	/**
	* 1. ����֮��
	  ����һ���������� nums ��һ������Ŀ��ֵ target�������ڸ��������ҳ� ��ΪĿ��ֵ target  ���� ���� ���������������ǵ������±ꡣ
	  ����Լ���ÿ������ֻ���Ӧһ���𰸣������㲻��ʹ��������ͬ��Ԫ�ء�
	  ����԰�����˳�򷵻ش𰸡�
	*
		ʾ�� 1��
			���룺nums = [2,7,11,15], target = 9
			�����[0,1]
			���ͣ���Ϊ nums[0] + nums[1] == 9 ������ [0, 1] ��

		ʾ�� 2��
		���룺nums = [3,2,4], target = 6
		�����[1,2]

		ʾ�� 3��
		���룺nums = [3,3], target = 6
		�����[0,1]
 

		��ʾ��

		2 <= nums.length <= 104
		-109 <= nums[i] <= 109
		-109 <= target <= 109
		ֻ�����һ����Ч��
	*/
	system("pause");
	return 0;
}