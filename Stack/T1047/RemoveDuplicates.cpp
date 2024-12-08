#include<iostream>
#include<stack>

using namespace std;

string removeDuplicates(string s) {
    stack<int> iteredElem;
    for (int i = 0; i < s.size(); i++) {
        if (iteredElem.empty() || s[i] != iteredElem.top()) {
            iteredElem.push(s[i]);
        }
        else {
            iteredElem.pop();
        }

    }
    string newString;
    newString.resize(iteredElem.size());
    for (int i = newString.size() - 1; i >= 0; i--) {
        newString[i] = iteredElem.top();
        iteredElem.pop();
    }
    return newString;
}

int main() {

    /**
    * 1047. ɾ���ַ����е����������ظ���
      
      ��ʾ
      ������Сд��ĸ��ɵ��ַ��� s���ظ���ɾ��������ѡ��������������ͬ����ĸ����ɾ�����ǡ�
      �� s �Ϸ���ִ���ظ���ɾ��������ֱ���޷�����ɾ����
      ����������ظ���ɾ�������󷵻����յ��ַ������𰸱�֤Ψһ��

      ʾ����
      ���룺"abbaca"
      �����"ca"
      ���ͣ�
      ���磬�� "abbaca" �У����ǿ���ɾ�� "bb" ��������ĸ��������ͬ�����Ǵ�ʱΨһ����ִ��ɾ���������ظ��֮�����ǵõ��ַ��� "aaca"��������ֻ�� "aa" ����ִ���ظ���ɾ�����������������ַ���Ϊ "ca"��
      
      ��ʾ��
      1 <= s.length <= 105
      s ����СдӢ����ĸ��ɡ�
    */

    system("pause");
    return 0;
}