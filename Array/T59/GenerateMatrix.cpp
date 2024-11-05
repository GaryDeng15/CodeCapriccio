#include <vector>
#include <iostream>

using namespace std;

// 左闭右开写法
vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> result(n, vector<int>(n, 0));
    int startx = 0, starty = 0;
    int offset = 1;
    int loop = n / 2;
    int mid = n / 2;
    int i, j;
    int count = 1;
    while (loop --) {
        i = startx;
        j = starty;
        for (j; j < n - offset; j++) {
            result[i][j] = count++;
        }
        for (i; i < n - offset; i++) {
            result[i][j] = count++;
        }
        for (j; j > starty; j--) {
            result[i][j] = count++;
        }
        for (i; i > startx; i--) {
            result[i][j] = count++;
        }
        startx++;
        starty++;
        offset++;
    }

    if (n % 2 == 1)
    {
        // result[i + 1][j + 1] = count; 这种写法也可以，但LeetCode运行不通过？？？
        result[mid][mid] = count;
    }

    return result;
}

int main() {

    /**
    * 示例 1：
        输入：n = 3
        输出：[[1,2,3],[8,9,4],[7,6,5]]
    *
    */


    /**
    * 示例 2：

        输入：n = 1
        输出：[[1]]
    *
    */

    vector<vector<int>> result = generateMatrix(5);
    system("pause");
    return 0;
}