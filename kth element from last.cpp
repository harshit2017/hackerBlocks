//kth element from last.cpp

#include <iostream>
//#include <cstring>
//#include <algorithm>
using namespace std;

class node {
public:
	int data;
	node *next;
	node(int d)//constructor
	{
		data = d;
		next = NULL;
	}
};
int last_element(node *head, int k)
{
	node *cur = head, *ahead = head;
	int element;
	for (int i = 1; i < k; ++i)
	{
		ahead = ahead->next;
	}
	while (ahead->next != NULL)
	{
		cur = cur->next;
		ahead = ahead->next;
	}
	return cur->data;
}

int main()
{
	node *head = NULL, *p;
	int d;
	cin >> d;
	while (d != -1)
	{
		if (head == NULL)
		{
			head = new node(d);
			p = head;
		}
		else
		{
			p->next = new node(d);
			p = p->next;
		}
		cin >> d;
	}
	int k;
	cin >> k;
	cout <<	last_element(head, k);
}