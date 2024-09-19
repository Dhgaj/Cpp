#include <iostream>
#include <cstring>

int main()
{
    char str1[50];
    char str2[50];

    strcpy(str1, "computer world");
    strncpy(str2, str1, 15);
    str2[14] = '\0'; // 确保字符串以null结尾

    std::cout << str1 << std::endl;
    std::cout << str2 << std::endl;

    return 0;
}