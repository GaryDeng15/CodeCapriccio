//*** Not include in CodeCapriccio ***
#include <iostream>
#include <vector>

using namespace std;

class Solution {
    vector<int> helpArr;
    void process(vector<int>& nums, vector<int>& helpArr, int left, int right) {
        if (left >= right) {
            return;
        }
        int mid = (right + left) >> 1;
        process(nums, helpArr, left, mid);
        process(nums, helpArr, mid + 1, right);
        merge(nums, helpArr, left, mid, right);
    }

    void merge(vector<int>& nums, vector<int>& helpArr, int left, int mid, int right) {
        //vector<int> helpArr(nums.size());
        int helpIndex = 0;
        int leftIndex = left;
        int rightIndex = mid + 1;
        while (leftIndex <= mid && rightIndex <= right) {
            helpArr[helpIndex++] = nums[leftIndex] <= nums[rightIndex] ? nums[leftIndex++] : nums[rightIndex++];
        }
        while (leftIndex <= mid) {
            helpArr[helpIndex++] = nums[leftIndex++];
        }
        while (rightIndex <= right) {
            helpArr[helpIndex++] = nums[rightIndex++];
        }
        for (int i = 0; i < right - left + 1; ++i) {
            nums[i + left] = helpArr[i];
        }
    }

public:
    vector<int> sortArray(vector<int>& nums) {
        helpArr.resize(nums.size(), 0);
        process(nums, helpArr, 0, nums.size() - 1);
        return nums;
    }
};

int main() {

	/**
	*   912. ��������
		����һ���������� nums�����㽫�������������С�
		������� ��ʹ���κ����ú��� ������½�����⣬ʱ�临�Ӷ�Ϊ O(nlog(n))�����ҿռ临�ӶȾ�����С��

		ʾ�� 1��
		���룺nums = [5,2,3,1]
		�����[1,2,3,5]

		ʾ�� 2��
		���룺nums = [5,1,1,2,0,0]
		�����[0,0,1,1,2,5]

		��ʾ��
		1 <= nums.length <= 5 * 104
		-5 * 104 <= nums[i] <= 5 * 104
	*/

	Solution *solution = new Solution();
	vector<int> temp = { 1,-3,43,22,6,4,9,0,-2 };
	for (int i : temp) {
		cout << i << ", ";
	}
	cout << endl;
	solution->sortArray(temp);
	for (int i : temp) {
		cout << i << ", ";
	}
	cout << endl;
	delete solution;
	system("pause");
	return 0;
}