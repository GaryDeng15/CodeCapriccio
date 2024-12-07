#include<iostream>
#include<stack>

using namespace std;

bool isValid(string s) {
    stack<int> bracketStack;
    // ��֦���ַ���Ԫ�ظ�������ż��һ��������Ч�ַ�����
    if (s.size() % 2 != 0) return false;
    for (int i = 0; i < s.size(); i++) {
        // ���������ţ���ջ��Ӧ�������š�
        if (s[i] == '(') bracketStack.push(')');
        else if (s[i] == '{') bracketStack.push('}');
        else if (s[i] == '[') bracketStack.push(']');
        // 1.�����Ŷ��˵���� 2.���Ͳ�ƥ��
        else if (bracketStack.empty() || s[i] != bracketStack.top()) return false;
        else bracketStack.pop();
    }
    // 3.�����Ŷ��˵����
    return bracketStack.empty();
}

int main() {

    /**
    * 20. ��Ч������
      ��ʾ
      ����һ��ֻ���� '('��')'��'{'��'}'��'['��']' ���ַ��� s ���ж��ַ����Ƿ���Ч��
      
      ��Ч�ַ��������㣺
      �����ű�������ͬ���͵������űպϡ�
      �����ű�������ȷ��˳��պϡ�
      ÿ�������Ŷ���һ����Ӧ����ͬ���͵������š�
      
      
      ʾ�� 1��
      ���룺s = "()"
      �����true
      
      ʾ�� 2��
      ���룺s = "()[]{}"
      �����true
      
      ʾ�� 3��
      ���룺s = "(]"
      �����false
      
      ʾ�� 4��
      ���룺s = "([])"
      �����true
      
      ��ʾ��
      1 <= s.length <= 104
      s �������� '()[]{}' ���
    */

    system("pause");
    return 0;
}