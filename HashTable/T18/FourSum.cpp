#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    for (int k = 0; k < nums.size(); k++) {
        // ��֦����
        if (nums[k] > target && nums[k] >= 0) {
            break; // ����ʹ��break��ͳһͨ������return����
        }
        // ��nums[k]ȥ��
        if (k > 0 && nums[k] == nums[k - 1]) {
            continue;
        }
        for (int i = k + 1; i < nums.size(); i++) {
            // 2����֦����
            if (nums[k] + nums[i] > target && nums[k] + nums[i] >= 0) {
                break;
            }

            // ��nums[i]ȥ��
            if (i > k + 1 && nums[i] == nums[i - 1]) {
                continue;
            }
            int left = i + 1;
            int right = nums.size() - 1;
            while (right > left) {
                // nums[k] + nums[i] + nums[left] + nums[right] > target �����
                if ((long)nums[k] + nums[i] + nums[left] + nums[right] > target) {
                    right--;
                    // nums[k] + nums[i] + nums[left] + nums[right] < target �����
                }
                else if ((long)nums[k] + nums[i] + nums[left] + nums[right] < target) {
                    left++;
                }
                else {
                    result.push_back(vector<int>{nums[k], nums[i], nums[left], nums[right]});
                    // ��nums[left]��nums[right]ȥ��
                    while (right > left && nums[right] == nums[right - 1]) right--;
                    while (right > left && nums[left] == nums[left + 1]) left++;

                    // �ҵ���ʱ��˫ָ��ͬʱ����
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
	* 18. ����֮��
	  ����һ���� n ��������ɵ����� nums ����һ��Ŀ��ֵ target �������ҳ���������������ȫ�������Ҳ��ظ�����Ԫ�� [nums[a], nums[b], nums[c], nums[d]] ����������Ԫ��Ԫ��һһ��Ӧ������Ϊ������Ԫ���ظ�����
		0 <= a, b, c, d < n
		a��b��c �� d ������ͬ
		nums[a] + nums[b] + nums[c] + nums[d] == target
		����԰� ����˳�� ���ش� ��

		ʾ�� 1��
		���룺nums = [1,0,-1,0,-2,2], target = 0
		�����[[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

		ʾ�� 2��
		���룺nums = [2,2,2,2,2], target = 8
		�����[[2,2,2,2]
	*/
	system("pause");
	return 0;
}