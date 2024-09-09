#include <iostream>
using namespace std;
#include <vector>

int main()
{
    // 定义一个向量,将数组的前五个元素赋值给向量a
    int n[] = {1, 3, 5, 7, 9};
    vector<int> a(n, n + 5);
    // 输出初始向量a中的元素
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
    // 向量a末尾增加一个元素
    a.push_back(11);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
    // 向量a末尾删除一个元素
    a.pop_back();
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
    // 向量a中指定个数插入指定位置
    // a.insert(a.begin() , 100); // 将100插入向量a的第一个位置前面
    // a.insert(a.begin() + 2, 100); // 将100插入向量a的第三个位置前面
    // a.insert(a.begin() + 2, 2, 100); // 将两个100插入向量a的第三个位置前面
    // a.insert(a.begin(), a.begin(), a.end()); // 将向量a中的所有元素插入到向量a的第一个位置前面
    // a.erase(a.begin() + 1); // 将向量a中的第二个元素删除
    a.erase(a.begin() + 1, a.begin() + 3); // 将向量a中的第二个元素和第三个元素删除
    for (int i = 0; i < a.size(); i++)     // 用size()避免输出超出向量a长度的随机数
    {
        cout << a[i] << "\t";
    }
    cout << endl;
    a.clear();
    for (int i = 0; i < a.size(); i++) // 用size()避免输出超出向量a长度的随机数
    {
        cout << a[i] << "\t";
    }
    cout << endl;

    return 0;
}