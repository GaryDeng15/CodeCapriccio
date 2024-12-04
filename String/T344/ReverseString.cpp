#include<iostream>
#include<vector>

using namespace std;

void reverseString(vector<char>& s) {
	for (int i = 0, j = s.size() - 1; i < s.size() / 2; i++, j--) {
		swap(s[i], s[j]);
	}
}

int main() {

	/*
	* 344. ��ת�ַ���
      ��дһ���������������ǽ�������ַ�����ת�����������ַ������ַ����� s ����ʽ������
      ��Ҫ�����������������Ŀռ䣬�����ԭ���޸��������顢ʹ�� O(1) �Ķ���ռ�����һ���⡣

	  ʾ�� 1��
	  ���룺s = ["h","e","l","l","o"]
	  �����["o","l","l","e","h"]

	  ʾ�� 2��
	  ���룺s = ["H","a","n","n","a","h"]
	  �����["h","a","n","n","a","H"]
 
	  ��ʾ��
	  1 <= s.length <= 105
	  s[i] ���� ASCII ����еĿɴ�ӡ�ַ�
	*/

	system("pause");
	return 0;
}