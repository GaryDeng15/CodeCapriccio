#include<iostream>
#include<string>

using namespace std;

bool isAnagram(string s, string t) {
	int charRecord[26] = {0};
	for (int i = 0; i < s.size(); i++) {
		charRecord[s[i] - 'a']++;
	}

	for (int j = 0; j < t.size(); j++) {
		charRecord[t[j] - 'a']--;
	}

	for (int index = 0; index < 26; index++) {
		if (charRecord[index] != 0) return false;
	}
	return true;
}

int main() {
	/**
	* ���������ַ��� s �� t ����дһ���������ж� t �Ƿ��� s ����ĸ��λ�ʡ�
	* 
		ʾ�� 1:
		����: s = "anagram", t = "nagaram"
		���: true

		ʾ�� 2:
		����: s = "rat", t = "car"
		���: false
	*/
	system("pause");
	return 0;
}