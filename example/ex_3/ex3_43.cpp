#include <iostream>
using namespace std;

#include <cassert>
void analyzeScore(int s);

int main()
{
    const int max = 100;
    const int min = 0;
    int score;
    cout << "Enter your score: ";
    cin >> score;
    analyzeScore(score);
    cout << "Done." << endl;
}

void analyzeScore(int s)
{
    assert(s >= 0);
    assert(s <= 100);
}