#include <vector>
#include <iostream>

using namespace std;

// ����ҿ�д��
vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> result(n, vector<int>(n, 0));
    int startx = 0, starty = 0;
    int offset = 1;
    int loop = n / 2;
    int mid = n / 2;
    int x, y;
    int count = 1;
    while (loop --) {
        x = startx;
        y = starty;
        for (y; y < n - offset; y++) {
            result[x][y] = count++;
        }
        for (x; x < n - offset; x++) {
            result[x][y] = count++;
        }
        for (y; y > starty; y--) {
            result[x][y] = count++;
        }
        for (x; x > startx; x--) {
            result[x][y] = count++;
        }
        startx++;
        starty++;
        offset++;
    }

    if (n % 2 == 1)
    {
        // result[i + 1][j + 1] = count; ����д��Ҳ���ԣ���LeetCode���в�ͨ��������
        result[mid][mid] = count;
    }

    return result;
}

int main() {

    /**
    * ʾ�� 1��
        ���룺n = 3
        �����[[1,2,3],[8,9,4],[7,6,5]]
    *
    */


    /**
    * ʾ�� 2��

        ���룺n = 1
        �����[[1]]
    *
    */

    vector<vector<int>> result = generateMatrix(1);
    system("pause");
    return 0;
}