#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    // 创建一个字符串对象s并初始化为"StringObject"
    string s("StringObject");
    // 获取字符串s的长度
    int len = s.length();
    // 分配一个长度为len+1的字符数组ptr1，用于存储字符串s的拷贝
    char *ptr1 = new char[len + 1];
    // 将字符串s的内容拷贝到字符数组ptr1中
    strcpy(ptr1, s.data());
    // 分配另一个长度为len+1的字符数组ptr2，用于存储字符串s的拷贝
    char *ptr2 = new char[len + 1];
    // 将字符串s的内容拷贝到字符数组ptr2中
    strcpy(ptr2, s.c_str());
    // 输出字符串s的内容
    cout << "string s is:" << s << endl;
    // 输出字符数组ptr1的内容
    cout << "ptr1 is:" << ptr1 << endl;
    // 输出字符数组ptr2的内容
    cout << "ptr2 is:" << ptr2 << endl;
    // 释放字符数组ptr1的内存
    delete[] ptr1;
    // 释放字符数组ptr2的内存
    delete[] ptr2;
}