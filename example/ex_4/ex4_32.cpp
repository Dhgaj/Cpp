#include <iostream>
#include <string>
using namespace std;

void PrintAttributes(const string &str);

int main()
{
    string s1, s2;
    PrintAttributes(s1);
    s1 = "My string object: ";
    PrintAttributes(s1);
    s2 = "New string object: ";
    PrintAttributes(s2);
}
void PrintAttributes(const string &str)
{
    cout << "size: " << str.size() << endl;
    cout << "length: " << str.length() << endl;
    cout << "capacity: " << str.capacity() << endl;
    cout << "max_size: " << str.max_size() << endl;
}