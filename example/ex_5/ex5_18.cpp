#include <iostream>
using namespace std;

struct List
{
    int data;
    List *next;
};

void insert(List *&head, int num);
void ShowList(const List *head);

int main()
{
    int k;
    List *head = NULL;
    cout << "Please input a number: \n";
    cin >> k;
    while (k != 0)
    {
        insert(head, k);
        cout << "Please input a number: \n";
        cin >> k;
    }
    ShowList(head);
}

void insert(List *&head, int num)
{
    List *s, *p, *q;
    s = new List;
    s->data = num;
    s->next = NULL;
    if (head == NULL)
    {
        head = s;
        return;
    }
    if (head->data > s->data)
    {
        s->next = head;
        head = s;
        return;
    }
    for (q = head, p=head->next;p;q=p,p=p->next)
	{
		if(p->data>s->data)
		{
			s->next=p;
			q->next=s;
			return;
		}
		
	}
	q->next=NULL;
	return;
}

void ShowList(const List *head)
{
	cout<<"Now the items of list are:\n";
	while(head)
	{
		cout<<head->data<<endl;
		head=head->next;
		
	}
	cout<<endl;
}
// 使用临时指针
// void ShowList(const List *head)
// {
//     const List *temp = head; 
//     cout<<"Now the items of list are:\n";
//     while(temp)
//     {
//         cout<<temp->data<<endl;
//         temp=temp->next;
//     }
//     cout<<endl;
// }
