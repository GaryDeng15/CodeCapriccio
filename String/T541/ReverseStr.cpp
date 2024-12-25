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

// 另一种思路
/**
* string reverseStr(string s, int k) {
        int n = s.size(),pos = 0;
        while(pos < n){
            //剩余字符串大于等于k的情况
            if(pos + k < n) reverse(s.begin() + pos, s.begin() + pos + k);
            //剩余字符串不足k的情况 
            else reverse(s.begin() + pos,s.end());
            pos += 2 * k;
        }
        return s;
    }
*/

int main() {

	/**
	* 541. 反转字符串 II
	  给定一个字符串 s 和一个整数 k，从字符串开头算起，每计数至 2k 个字符，就反转这 2k 字符中的前 k 个字符。
	  如果剩余字符少于 k 个，则将剩余字符全部反转。
	  如果剩余字符小于 2k 但大于或等于 k 个，则反转前 k 个字符，其余字符保持原样。
 
		示例 1：
		输入：s = "abcdefg", k = 2
		输出："bacdfeg"

		示例 2：
		输入：s = "abcd", k = 2
		输出："bacd"

		提示：
		1 <= s.length <= 104
		s 仅由小写英文组成
		1 <= k <= 104
	*/
	system("pause");
	return 0;
}