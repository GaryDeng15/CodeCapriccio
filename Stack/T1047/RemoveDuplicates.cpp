#include<iostream>
#include<stack>

using namespace std;

string removeDuplicates(string s) {
    string result;
    for (char current : s) {
        if (result.empty() || current != result.back()) result.push_back(current);
        else result.pop_back();
    }
    return result;
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