#include<iostream>
#include<string>
#include<vector>

using namespace std;

void getNext(int* next, const string& str) {
    // i-前缀的末尾 j-后缀的末尾
    // 初始化
    int j = 0;
    next[0] = 0;
    for (int i = 1; i < str.size(); i++) {
        // 不匹配时j持续回退
        while (j > 0 && str[j] != str[i]) {
            j = next[j - 1];
        }
        // 匹配时j前进
        if (str[j] == str[i])
            j++;
        //更新next数组
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
	* 459. 重复的子字符串
	  给定一个非空的字符串 s ，检查是否可以通过由它的一个子串重复多次构成。
	  
	  示例 1:
	  输入: s = "abab"
	  输出: true
	  解释: 可由子串 "ab" 重复两次构成。

	  示例 2:
	  输入: s = "aba"
	  输出: false

	  示例 3:
	  输入: s = "abcabcabcabc"
	  输出: true
	  解释: 可由子串 "abc" 重复四次构成。 (或子串 "abcabc" 重复两次构成。)
	  
	  提示：
	  1 <= s.length <= 104
	  s 由小写英文字母组成
	*/

	system("pause");
	return 0;
}