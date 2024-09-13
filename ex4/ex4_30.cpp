// #include <iostream>
// using namespace std;

// int main()
// {
//     const char *name[5] = {"LiHua", "HeXiaoMing", "ZhangLi", "SunFei", "ChenBao"};
//     char *pt;
//     int i, j, k;

//     for (i = 0; i < 4; i++)
//     {
//         k = i;
//         for (j = i + 1; j < 5; j++)
//         {
//             if (strcmp(name[k], name[j]) > 0)
//                 k = j;
//         }
//         if (k != i)
//         {
//             pt = name[k];
//             name[k] = name[i];
//             name[i] = pt;
//         }
//     }
//     for (i = 0; i < 5; i++)
//     {
//         cout << "Name[" << i << "]" << name[i] << endl;
//     }
// }

#include <iostream>
#include <cstring> // 包含strcmp函数的头文件
using namespace std;

int main()
{
    const char *name[5] = {"LiHua", "HeXiaoMing", "ZhangLi", "SunFei", "ChenBao"};
    const char *pt;
    int i, j, k;

    // 外层循环，用于确定当前待比较的元素
    for (i = 0; i < 4; i++)
    {
        k = i;
        // 内层循环，用于与当前待比较的元素进行比较
        for (j = i + 1; j < 5; j++)
        {
            // 使用 strcmp 函数比较字符串大小
            // strcmp 是完全比较
            if (strcmp(name[k], name[j]) > 0)
                k = j;
        }

        // 如果找到了更小的元素，则进行交换
        if (k != i)
        {
            pt = name[k];
            name[k] = name[i];
            name[i] = pt;
        }
    }

    // 输出排序后的结果
    for (i = 0; i < 5; i++)
    {
        cout << "Name[" << i << "]" << name[i] << endl;
    }
}