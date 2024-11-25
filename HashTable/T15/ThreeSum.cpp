#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++) {
        
        if (nums[i] > 0) {
            continue;
        }
        if (i > 0 && nums[i] == nums[i - 1]) { 
            continue;
        }
        unordered_set<int> set;
        for (int j = i + 1; j < nums.size(); j++) {
            if (j > i + 2
                && nums[j] == nums[j - 1]
                && nums[j - 1] == nums[j - 2]) { 
                continue;
            }
            int c = 0 - (nums[i] + nums[j]);
            if (set.find(c) != set.end()) {
                result.push_back({ nums[i], nums[j], c });
                set.erase(c);
            }
            else {
                set.insert(nums[j]);
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