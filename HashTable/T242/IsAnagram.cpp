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
	* 给定两个字符串 s 和 t ，编写一个函数来判断 t 是否是 s 的字母异位词。
	* 
		示例 1:
		输入: s = "anagram", t = "nagaram"
		输出: true

		示例 2:
		输入: s = "rat", t = "car"
		输出: false
	*/
	system("pause");
	return 0;
}