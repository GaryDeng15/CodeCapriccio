#include<iostream>
#include<vector>


using namespace std;

int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {

}

int main() {
	/**
	* 454. ������� II
	�����ĸ��������� nums1��nums2��nums3 �� nums4 �����鳤�ȶ��� n ����������ж��ٸ�Ԫ�� (i, j, k, l) �����㣺
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
	system("pause");
	return 0;
}