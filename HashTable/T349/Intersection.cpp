#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
	// set��multiset�ײ�������������������������Ƚ�Ƶ����ʹ�� unordered_set ������
	// �� unordered_set Ԫ���ǲ��ظ��ģ�����ȥ��Ҫ��
	unordered_set<int> result_set;
	unordered_set<int> nums_set(nums1.begin(), nums1.end());
	for (int num : nums2) {
		if (nums_set.find(num) != nums_set.end()) result_set.insert(num);
	}
	return vector<int>(result_set.begin(), result_set.end());
}

int main() {
	/**
	* 349. ��������Ľ���
		������������ nums1 �� nums2 ���������ǵĽ�����
		�������е�ÿ��Ԫ��һ���� Ψһ �ġ����ǿ��� ��������������˳�� ��

		ʾ�� 1��
		���룺nums1 = [1,2,2,1], nums2 = [2,2]
		�����[2]

		ʾ�� 2��
		���룺nums1 = [4,9,5], nums2 = [9,4,9,8,4]
		�����[9,4]
		���ͣ�[4,9] Ҳ�ǿ�ͨ����
	*/
	system("pause");
	return 0;
}