#include <iostream>
using namespace std;

struct Node
{
    int date;
    Node *next;
};

void CreatList(Node *&head)
{
    Node *s, *p;
    s = new Node;
    cin >> s->date;

    while (s->date != 0)
    {
        if (head == NULL)
        {
            head = s;
        }
        else
        {
            p->next = s;
            p = s;
            s = new Node;
            cin >> s->date;
        }
    }
    p->next = NULL;
    delete s;
    return;
}

void ShowList(Node *head)
{
    cout << "Now the items of node are:\n";
    while (head)
    {
        cout << head->date << endl;
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    CreatList(head);
    ShowList(head);
    return 0;
}