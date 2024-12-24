#include <vector>
#include <iostream>

using namespace std;

//˫ָ��ⷨ
vector<int> sortedSquares(vector<int>& nums) {
    vector<int> result(nums.size());
    int newIndex = nums.size() - 1;
    for (int front = 0, back = nums.size() - 1; front <= back;) {
        if (nums[front] * nums[front] > nums[back] * nums[back]) {
            result[newIndex--] = nums[front] * nums[front];
            front++;
        }
        else {
            result[newIndex--] = nums[back] * nums[back];
            back--;
        }
    }
    return result;
}

// �����ⷨ
/**
* 
vector<int> sortedSquares(vector<int>& A) {
        for (int i = 0; i < A.size(); i++) {
            A[i] *= A[i];
        }
        sort(A.begin(), A.end()); // ��������
        return A;
}
*/

int main() {

    /**
    * ʾ�� 1��
        ���룺nums = [-4,-1,0,3,10]
        �����[0,1,9,16,100]
        ���ͣ�ƽ���������Ϊ [16,1,0,9,100]
        ����������Ϊ [0,1,9,16,100]
    *
    */


    /**
    * ʾ�� 2��
        ���룺nums = [-7,-3,2,3,11]
        �����[4,9,9,49,121]
    *
    */

    vector<int> nums = { -4,-1,0,3,10 };
    //int target = 9;

    //int targetIndex  = search1(nums, target);

    vector<int> result = sortedSquares(nums);

    for (int elem : result)
    {
        cout << elem << ", ";
    }
    cout << endl;

    system("pause");
    return 0;
}