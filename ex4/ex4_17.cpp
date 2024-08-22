// 矩阵相乘
#include <iostream>
using namespace std;
#include <iomanip>

const int M = 3, P = 3, N = 2;
// int a[M][P], b[P][N];
int c[M][N] = {0};

bool multimatrix(const int a[M][P], int arow, int acol, const int b[P][N], int brow, int bcol, int c[M][N], int crow, int ccol);

int main()
{
    int i, j;
    // 定义矩阵A和矩阵B并初始化，省略输入部分
    int a[M][P] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};
    int b[P][N] = {{1, 1}, {2, 2}, {3, 3}};

    // // 提示用户输入矩阵A
    // cout << "Enter the matrix A: " << endl;
    // for (i = 0; i < M; i++)
    // {
    //     for (j = 0; j < P; j++)
    //     {
    //         // 从用户输入中获取矩阵A的元素
    //         cin >> a[i][j];
    //     }
    // }
    // // 提示用户输入矩阵B
    // cout << "Enter the matrix B: " << endl;
    // for (i = 0; i < P; i++)
    // {
    //     for (j = 0; j < N; j++)
    //     {
    //         // 从用户输入中获取矩阵B的元素
    //         cin >> b[i][j];
    //     }
    // }

    // 调用multimatrix函数进行矩阵乘法运算
    if (multimatrix(a, M, P, b, P, N, c, M, N))
    {
        // 如果矩阵乘法成功，则输出乘法结果
        for (i = 0; i < M; i++)
        {
            for (j = 0; j < N; j++)
            {
                // 输出矩阵C的元素
                cout << setw(5) << c[i][j];
            }
            cout << endl;
        }
    }
    else
    {
        // 如果矩阵乘法失败，则输出错误信息
        cout << "The matrix cannot be multiplied." << endl;
    }
    return 0;
}

bool multimatrix(const int a[M][P], int arow, int acol, const int b[P][N], int brow, int bcol, int c[M][N], int crow, int ccol)
{
    // 检查矩阵是否可以相乘
    if (acol != brow || crow != arow || bcol != ccol)
    {
        return false;
    }

    // 遍历矩阵c的每一行
    for (int i = 0; i < crow; i++)
    {
        // 遍历矩阵c的每一列
        for (int j = 0; j < ccol; j++)
        {
            // 遍历矩阵a的每一列（同时也是矩阵b的每一行）
            for (int k = 0; k < acol; k++)
            {
                // 计算矩阵c的元素值
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    // 返回成功
    return true;
}

/*
    6    6
   12   12
   18   18
*/