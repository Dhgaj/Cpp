#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> b(3, vector<int>(4, 0));
    int m, n;
    for (m = 0; m < b.size(); m++)
    {
        for (n = 0; n < b[m].size(); n++)
        {
            b[m][n] = m + n;
        }
    }
    for (m = 0; m < b.size(); m++)
    {
        for (n = 0; n < b[m].size(); n++)
        {
            cout << b[m][n] << " ";
        }
        cout << endl;
    }
}

// 0 1 2 3
// 1 2 3 4
// 2 3 4 5
