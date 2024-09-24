#include <iostream>
#include <iomanip>
using namespace std;

struct Jonse
{
	int code;
	Jonse *next;
};

Jonse *Creat(int);
void ShowList(Jonse *);
void Out(Jonse *, int, int);

int main()
{
	Jonse *head;
	int num, val, beg;

	// 初始化链表头指针
	// cout<<"Please input the number of total: "<<endl;
	// cin>>num;
	num = 8;
	head = Creat(num);

	// 展示链表
	ShowList(head);
	cout << endl;
	// 初始化起始位置
	// cout<<"Please input the code of begin: "<<endl;
	// cin>>beg;
	beg = 2;

	// 初始化计数间隔
	// cout << "Please input interval of counting: " << endl;
	// cin>>val;
	val = 5;

	// 输出新的链表
	cout << "the new list is: " << endl;
	Out(head, beg, val);
}

// 创建了一个循环链表
Jonse *Creat(int n)
{
	// 创建一个头节点h和一个临时节点p
	Jonse *h, *p;
	int i;
	// 动态分配内存给头节点h
	h = new Jonse;
	// 将p指向头节点h
	p = h;
	// 循环n次
	for (i = 1; i <= n; i++)
	{
		// 将当前节点的code值设置为i
		p->code = i;
		// 如果i小于n，说明还有节点需要创建
		if (i < n)
		{
			// 动态分配内存给下一个节点，并将p指向该节点
			p->next = new Jonse;
			// 将p移动到下一个节点
			p = p->next;
		}
	}
	// 将最后一个节点的next指针指向头节点h，形成环形链表
	p->next = h;
	// 返回头节点h
	return h;
}

void ShowList(Jonse *h)
{
	// 声明一个指向Jonse类型的指针p，并初始化为h
	Jonse *p;
	p = h;

	// 使用do-while循环遍历链表
	do
	{
		// 输出当前节点的code成员变量的值
		cout << p->code << '\t';

		// 将指针p移动到下一个节点
		p = p->next;

		// 循环直到指针p再次指向头节点h
	} while (p != h);
}

void Out(Jonse *h, int i, int d)
{
	Jonse *p, *q;
	int k;
	p = h;

	// 遍历到第i个节点
	for (k = 1; k < i; k++)
	{
		q = p;
		p = p->next;
	}

	// 当链表不是循环链表时
	while (p != p->next)
	{
		// 遍历到第d个节点
		for (k = 1; k < d; k++)
		{
			q = p;
			p = p->next;
		}

		// 输出当前节点的code
		cout << p->code << '\t';

		// 删除当前节点
		q->next = p->next;
		delete p;
		p = NULL;

		// 将p指向下一个节点
		p = q->next;
	}

	// 输出最后一个节点的code
	cout << p->code << endl;

	// 删除最后一个节点
	delete p;
	p = NULL;
}

// 1 2 3 4 5 6 7 8
// the new list is :
// 6 3 1 8 2 5 7 4