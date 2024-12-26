#include <vector>
#include <iostream>

using namespace std;

// ����ָ��ⷨ����ָ��ָ�������Ԫ���±꣬��ָ��ָ����������±ꡣ
int removeElement(vector<int>& nums, int val) {
    int fastIndex = 0;
    int slowIndex = 0;

    for (fastIndex = 0; fastIndex < nums.size(); fastIndex++) {
        if (nums[fastIndex] != val)
        {
            nums[slowIndex++] = nums[fastIndex];
        }
    }

    return slowIndex;
}

/**
* 
* 
* �����ⷨ
// ʱ�临�Ӷȣ�O(n^2)
// �ռ临�Ӷȣ�O(1)
int removeElement(vector<int>& nums, int val) {
    int size = nums.size();
    for (int i = 0; i < size; i++) {
        if (nums[i] == val) { // ������Ҫ�Ƴ���Ԫ�أ��ͽ����鼯����ǰ�ƶ�һλ
            for (int j = i + 1; j < size; j++) {
                nums[j - 1] = nums[j];
            }
            i--; // ��Ϊ�±�i�Ժ����ֵ����ǰ�ƶ���һλ������iҲ��ǰ�ƶ�һλ
            size--; // ��ʱ����Ĵ�С-1
        }
    }
    return size;
}
*/

int main() {

    /**
    * ʾ�� 1��
        ���룺nums = [3,2,2,3], val = 3
        �����2, nums = [2,2,_,_]
        ���ͣ���ĺ�������Ӧ�÷��� k = 2, ���� nums �е�ǰ����Ԫ�ؾ�Ϊ 2��
        ���ڷ��ص� k ��Ԫ��֮��������ʲô������Ҫ��������ǲ����������⣩��
    *
    */


    /**
    * ʾ�� 2��
        ���룺nums = [0,1,2,2,3,0,4,2], val = 2
        �����5, nums = [0,1,4,0,3,_,_,_]
        ���ͣ���ĺ���Ӧ�÷��� k = 5������ nums �е�ǰ���Ԫ��Ϊ 0,0,1,3,4��
        ע�������Ԫ�ؿ�������˳�򷵻ء�
        ���ڷ��ص� k ��Ԫ��֮��������ʲô������Ҫ��������ǲ����������⣩��
    *
    */

    vector<int> nums = { 3,2,2,3 };
    int val = 2;

    cout << "The newSize is " << removeElement(nums, val) << endl;

    for (int elem : nums) {
        cout << elem << ", ";
    }
    cout << endl;

    system("pause");
    return 0;
}