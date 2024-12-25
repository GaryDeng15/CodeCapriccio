#include<iostream>
#include<string>
#include<vector>

using namespace std;

string reverseStr(string s, int k) {
	for (int i = 0; i < s.size(); i += 2 * k) {
		if (i + k <= s.size()) {
			reverse(s.begin() + i, s.begin() + i + k);
			continue;
		}
		reverse(s.begin() + i, s.begin() + s.size());
	}
	return s;
}

// ��һ��˼·
/**
* string reverseStr(string s, int k) {
        int n = s.size(),pos = 0;
        while(pos < n){
            //ʣ���ַ������ڵ���k�����
            if(pos + k < n) reverse(s.begin() + pos, s.begin() + pos + k);
            //ʣ���ַ�������k����� 
            else reverse(s.begin() + pos,s.end());
            pos += 2 * k;
        }
        return s;
    }
*/

int main() {

	/**
	* 541. ��ת�ַ��� II
	  ����һ���ַ��� s ��һ������ k�����ַ�����ͷ����ÿ������ 2k ���ַ����ͷ�ת�� 2k �ַ��е�ǰ k ���ַ���
	  ���ʣ���ַ����� k ������ʣ���ַ�ȫ����ת��
	  ���ʣ���ַ�С�� 2k �����ڻ���� k ������תǰ k ���ַ��������ַ�����ԭ����
 
		ʾ�� 1��
		���룺s = "abcdefg", k = 2
		�����"bacdfeg"

		ʾ�� 2��
		���룺s = "abcd", k = 2
		�����"bacd"

		��ʾ��
		1 <= s.length <= 104
		s ����СдӢ�����
		1 <= k <= 104
	*/
	system("pause");
	return 0;
}