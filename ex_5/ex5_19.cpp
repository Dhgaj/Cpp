#include <iostream>
using namespace std;

struct List
{
	int data;
	List *next; 
};

void del(List *&head;int key)
{
	List *p;
	if(!head)
	{
		cout<<"The head is NULL";
		return;
	}
	
	if(head->data==key)
	{
		p=head;
		head=head->next;
		delete p;
		p=NULL;
		cout<<"The head of list have been deleted./n";
		return;
	}
	
	for(List *pg;pg->next;pg=pg->next)
	{
		if(pg->next->data==key)
		{
			p=pg->next;
			pg->next=p->next;
			delete p;
			p=NULL;
			cout<<"The key is"
			return;
		}
	}
	cout<<"There is no key !";
	return;
}