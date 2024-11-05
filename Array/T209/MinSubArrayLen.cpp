#include <vector>
#include <iostream>

using namespace std;

//˫ָ��ⷨ
int minSubArrayLen(int target, vector<int>& nums) {
    int result = INT32_MAX, subLen = 0;
    int tempSum = 0;
    for (int start = 0, end = 0; end < nums.size(); end++) {
        tempSum += nums[end];
        while (tempSum >= target) {
            subLen = end - start + 1;
            tempSum -= nums[start++];
            result = result >= subLen ? subLen : result;
        }
    }
    return result == INT32_MAX ? 0 : result;
}

int main() {

    /**
    * ʾ�� 1��
        ���룺target = 7, nums = [2,3,1,2,4,3]
        �����2
        ���ͣ������� [4,3] �Ǹ������µĳ�����С�������顣
    *
    */


    /**
    * ʾ�� 2��
        ���룺target = 4, nums = [1,4,4]
        �����1
    *
    */

    /**
    * ʾ�� 3��
        ���룺target = 11, nums = [1,1,1,1,1,1,1,1]
        �����0
    *
    */

    vector<int> nums = { 1,1,1,1,1,1,1,1 };
    int target = 7;

    //int targetIndex  = search1(nums, target);

    cout << "minSubArrayLen -> " << minSubArrayLen(target, nums) << endl;

    system("pause");
    return 0;
}