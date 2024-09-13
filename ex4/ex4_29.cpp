#include <iostream>
using namespace std;

int main()
{
    char *name[5] = {"LiHua", "HeXioaMing", "ZhangLi", "SunFei", "ChenBao"};
    char in_name[20];
    int i, flag = 0;

    cout << "Enter a name: ";
    cin >> in_name;
    for (i = 0; i < 5; i++)
    {
        if (strcmp(name[i], in_name) == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        cout << "The name is in the list." << endl;
    else
        cout << "The name is not in the list." << endl;
    return 0;
}