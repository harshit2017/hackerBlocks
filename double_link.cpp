//double_link.cpp

#include <iostream>
//#include <cstring>
//#include <algorithm>
using namespace std;

class node {
public:
	int data;
	node *next;
	node *prev;
	node(int d, node *n = 0, node  *p = 0): data(d), next(n), prev(p) {}
};


int main()
{
	int d;
	node *p, *n, *head = 0, *temp ;
	int i = 1;
	while (i <= 5)
	{
		cin >> d;
		if (head != 0)
		{	p = temp;
			temp->next = new node(d, n, p);
			temp = temp->next;
			temp->next = 0;

		}
		else
		{
			head = new node(d);
			temp = head;


		}


		++i;
	}
	for (node *i = head; i ; i = i->next)
	{
		cout << i->data << " ";
	}
	for (node *i = temp; i; i = i->prev)
	{
		cout << i->data << " ";
	}
}