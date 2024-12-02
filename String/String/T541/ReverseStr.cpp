#include<iostream>
#include<string>
#include<vector>

using namespace std;

string reverseStr(string s, int k) {
	for (int i = 0; i < s.size(); i += (2 * k)) {
		if (i + k <= s.size()) {
			rev(s, i, i + k - 1);
			continue;
		}
		rev(s, i, s.size() - 1);
	}
	return s;
}

void rev(string& str, int start, int end) {
	for (int i = start, j = end; i < j; i++, j--) {
		swap(str[i], str[j]);
	}
}

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