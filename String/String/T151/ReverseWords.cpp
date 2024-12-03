#include<iostream>
#include<string>
#include<vector>

using namespace std;

void reverseStr(string& str, int start, int end) {
	for (int i = start, j = end; i < j; i++, j--) {
		swap(str[i], str[j]);
	}
}

void removeExtraSpace(string& s) {
	int slow = 0;
	for (int fast = 0; fast < s.size(); ++fast) {
		if (s[fast] != ' ') {
			if (slow != 0) s[slow++] = ' ';
			while (fast < s.size() && s[fast] != ' ') {
				s[slow++] = s[fast++];
			}
		}
	}
	s.resize(slow);
}

string reverseWords(string s) {
	// ˫ָ��ȥ������ո�
	removeExtraSpace(s);

	// �ַ������巴ת
	reverseStr(s, 0, s.size() - 1);

	// ���������ڲ��ַ���ת
	int start = 0;
	for (int i = 0; i <= s.size(); ++i) {
		if (i == s.size() || s[i] == ' ') {
			reverseStr(s, start, i - 1);
			start = i + 1;
		}
	}
	return s;
}

int main() {

	/**
	* 151. ��ת�ַ����еĵ���
	  ����һ���ַ��� s �����㷴ת�ַ����� ���� ��˳��
	  ���� ���ɷǿո��ַ���ɵ��ַ�����s ��ʹ������һ���ո��ַ����е� ���� �ָ�����
	  ���� ���� ˳��ߵ��� ���� ֮���õ����ո����ӵĽ���ַ�����
	  ע�⣺�����ַ��� s�п��ܻ����ǰ���ո�β��ո���ߵ��ʼ�Ķ���ո񡣷��صĽ���ַ����У����ʼ�Ӧ�����õ����ո�ָ����Ҳ������κζ���Ŀո�
	
	ʾ�� 1��
	���룺s = "the sky is blue"
	�����"blue is sky the"

	ʾ�� 2��
	���룺s = "  hello world  "
	�����"world hello"
	���ͣ���ת����ַ����в��ܴ���ǰ���ո��β��ո�

	ʾ�� 3��
	���룺s = "a good   example"
	�����"example good a"
	���ͣ�����������ʼ��ж���Ŀո񣬷�ת����ַ�����Ҫ�����ʼ�Ŀո���ٵ�����һ����
 
	��ʾ��

	1 <= s.length <= 104
	s ����Ӣ�Ĵ�Сд��ĸ�����ֺͿո� ' '
	s �� ���ٴ���һ�� ����
	*/

	string case1 = "  hello world  ";
	cout << "Origin string: \"" << case1 <<"\""<< endl;
	case1 = reverseWords(case1);
	cout << "Reverse words string: \"" << case1 <<"\""<< endl;

	system("pause");
	return 0;
}