#include<iostream>
#include<string>
#include<vector>

using namespace std;

void getNext(int* next, const string& str) {
    // i-ǰ׺��ĩβ j-��׺��ĩβ
    // ��ʼ��
    int j = 0;
    next[0] = 0;
    for (int i = 1; i < str.size(); i++) {
        // ��ƥ��ʱj��������
        while (j > 0 && str[j] != str[i]) {
            j = next[j - 1];
        }
        // ƥ��ʱjǰ��
        if (str[j] == str[i])
            j++;
        //����next����
        next[i] = j;
    }
}

bool repeatedSubstringPattern(string s) {
    if (s.size() == 0) return false;
    int len = s.size();
    int* next = new int[len];
    getNext(next, s);
    if (next[len - 1] != 0 && len % (len - next[len - 1]) == 0) {
        return true;
    }
    return false;
}

int main() {

	/*
	* 459. �ظ������ַ���
	  ����һ���ǿյ��ַ��� s ������Ƿ����ͨ��������һ���Ӵ��ظ���ι��ɡ�
	  
	  ʾ�� 1:
	  ����: s = "abab"
	  ���: true
	  ����: �����Ӵ� "ab" �ظ����ι��ɡ�

	  ʾ�� 2:
	  ����: s = "aba"
	  ���: false

	  ʾ�� 3:
	  ����: s = "abcabcabcabc"
	  ���: true
	  ����: �����Ӵ� "abc" �ظ��Ĵι��ɡ� (���Ӵ� "abcabc" �ظ����ι��ɡ�)
	  
	  ��ʾ��
	  1 <= s.length <= 104
	  s ��СдӢ����ĸ���
	*/

	system("pause");
	return 0;
}