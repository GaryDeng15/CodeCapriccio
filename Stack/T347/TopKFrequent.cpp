#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>

using namespace std;

class mycomparison {
public:
    bool operator()(const pair<int, int>& left, const pair<int, int> right) {
        return left.second > right.second;
    }
};

vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> freq_map;
    for (int num : nums) {
        freq_map[num]++;
    }

    // С����
    priority_queue<pair<int, int>, vector<pair<int, int>>, mycomparison> pri_que;
    
    for (unordered_map<int, int>::iterator it = freq_map.begin(); it != freq_map.end(); it++) {
        pri_que.push(*it);
        if (pri_que.size() > k) pri_que.pop();
    }

    vector<int> result(k);
    for (int i = k - 1; i >= 0; i--) {
        result[i] = pri_que.top().first;
        pri_que.pop();
    }
    return result;
}

int main() {

    /**
    * 347. ǰ K ����ƵԪ��

      ����һ���������� nums ��һ������ k �����㷵�����г���Ƶ��ǰ k �ߵ�Ԫ�ء�����԰� ����˳�� ���ش𰸡�

      ʾ�� 1:      
      ����: nums = [1,1,1,2,2,3], k = 2
      ���: [1,2]

      ʾ�� 2:
      ����: nums = [1], k = 1
      ���: [1]
      
      ��ʾ��
      1 <= nums.length <= 105
      k ��ȡֵ��Χ�� [1, �����в���ͬ��Ԫ�صĸ���]
      ��Ŀ���ݱ�֤��Ψһ�����仰˵��������ǰ k ����ƵԪ�صļ�����Ψһ��
      
      ���ף���������㷨��ʱ�临�Ӷ� ���� ���� O(n log n) ������ n �������С��
    */

    system("pause");
    return 0;
}