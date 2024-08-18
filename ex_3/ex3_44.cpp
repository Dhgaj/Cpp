
#include <iostream>
#include <cstdlib> // For exit()
#include <cctype>  // For toupper()

using namespace std;

int main()
{
    int ch;
    cout << "Yes or No ? ";
    ch = cin.get(); // 使用 cin.get() 代替 _getch()
    cout << "\n";

    if (toupper(ch) == 'Y')
    {
        cout << "Yes.\n";
        exit(1);
    }
    else
    {
        cout << "No.\n";
        exit(0);
    }
}

// #include <conio.h>
// // 这是在 Windows 环境中使用的库，MacOS 不支持该库
// int main()
// {
//     int ch;
//     _cputs("Yes or No ?");
//     ch = _getch();
//     _cputs("\n");
//     if (toupper(ch) == 'Y')
//     {
//         _cputs("Yes.\n");
//         exit(1);
//     }
//     else
//     {
//         _cputs("No.\n");
//         exit(0);
//     }
// }