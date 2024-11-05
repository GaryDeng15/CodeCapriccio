#include <vector>
#include <iostream>

using namespace std;

// ����ұ�д����
int search1(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1, middle;

    while (left <= right) {
        middle = (left + right) / 2;
        if (nums[middle] > target) {
            right = middle - 1;
        }
        else if (nums[middle] < target) {
            left = middle + 1;
        }
        else {
            return middle;
        }

    }

    return -1;
}

// ����ҿ�д����
int search2(vector<int>& nums, int target) {
    int left = 0, right = nums.size(), middle;

    while (left < right) {

        middle = (left + right) / 2;

        if (nums[middle] > target) {
            right = middle;
        }
        else if (nums[middle] < target) {
            left = middle + 1;
        }
        else {
            return middle;
        }
    }

    return -1;
}

// ���ұ�д����
int search3(vector<int>& nums, int target) {
    int left = -1, right = nums.size() - 1, middle;

    while (left < right) {

        middle = (left + right) / 2 + 1;

        if (nums[middle] > target) {
            right = middle - 1;
        }
        else if (nums[middle] < target) {
            left = middle;
        }
        else {
            return middle;
        }
    }

    return -1;
}

int main() {

    /**
    * ʾ�� 1:
        ����: nums = [-1,0,3,5,9,12], target = 9
        ���: 4
        ����: 9 ������ nums �в����±�Ϊ 4
    *
    */


    /**
    * ʾ�� 2:
        ����: nums = [-1,0,3,5,9,12], target = 2
        ���: -1
        ����: 2 ������ nums ����˷��� -1
    *
    */

    vector<int> nums = { -1,0,3,5,9,12 };
    int target = 9;

    //int targetIndex  = search1(nums, target);

    int targetIndex = search3(nums, target);

    cout << "The index of target is " << targetIndex << endl;

    system("pause");
    return 0;
}