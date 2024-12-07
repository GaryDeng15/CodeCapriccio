#include<iostream>
#include<stack>

using namespace std;

bool isValid(string s) {
    stack<int> bracketStack;
    // 剪枝，字符串元素个数不是偶数一定不是有效字符串。
    if (s.size() % 2 != 0) return false;
    for (int i = 0; i < s.size(); i++) {
        // 遇到左括号，入栈相应的右括号。
        if (s[i] == '(') bracketStack.push(')');
        else if (s[i] == '{') bracketStack.push('}');
        else if (s[i] == '[') bracketStack.push(']');
        // 1.右括号多了的情况 2.类型不匹配
        else if (bracketStack.empty() || s[i] != bracketStack.top()) return false;
        else bracketStack.pop();
    }
    // 3.左括号多了的情况
    return bracketStack.empty();
}

int main() {

    /**
    * 20. 有效的括号
      提示
      给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。
      
      有效字符串需满足：
      左括号必须用相同类型的右括号闭合。
      左括号必须以正确的顺序闭合。
      每个右括号都有一个对应的相同类型的左括号。
      
      
      示例 1：
      输入：s = "()"
      输出：true
      
      示例 2：
      输入：s = "()[]{}"
      输出：true
      
      示例 3：
      输入：s = "(]"
      输出：false
      
      示例 4：
      输入：s = "([])"
      输出：true
      
      提示：
      1 <= s.length <= 104
      s 仅由括号 '()[]{}' 组成
    */

    system("pause");
    return 0;
}