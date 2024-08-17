#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int userChoice = 0, computerChoice;
    char userInput;

    cout << "请输入你的选择(s:剪刀,r:石头,p:布): ";
    cin >> userInput;

    // 生成随机数作为电脑的选择
    srand(static_cast<unsigned int>(time(0)));
    computerChoice = rand() % 3;

    switch (userInput)
    {
    case 's':
        userChoice = 1; // 剪刀
        cout << "你选择了剪刀。\n";
        break;
    case 'r':
        userChoice = 0; // 石头
        cout << "你选择了石头。\n";
        break;
    case 'p':
        userChoice = 2; // 布
        cout << "你选择了布。\n";
        break;
    default:
        cout << "无效的选择。\n";
        return 1;
    }

    cout << "电脑选择了:";
    switch (computerChoice)
    {
    case 0:
        cout << "石头。\n";
        break;
    case 1:
        cout << "剪刀。\n";
        break;
    case 2:
        cout << "布。\n";
        break;
    }

    if (userChoice == computerChoice)
    {
        cout << "平局！\n";
    }

    else if ((userChoice == 1 && computerChoice == 0) ||
             (userChoice == 2 && computerChoice == 1) ||
             (userChoice == 0 && computerChoice == 2))
    {
        cout << "电脑赢了！\n";
    }

    else
    {
        cout << "你赢了！\n";
    }

    return 0;
}
