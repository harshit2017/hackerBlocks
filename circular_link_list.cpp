//circular_link_list.cpp
#include <iostream>
//#include <cstring>
//#include <algorithm>
using namespace std;


class node {
public:
	int data;
	node *next;
	node(int d)
	{
		data = d;
		next = NULL;
	}
};

node* input(int N)
{	int d;
	node *head = NULL, *p;
	for (int i = 0; i < N; ++i)
	{
		cin >> d;
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
	}
	return head;
}


int main()
{
	int N;
	cin >> N;
	node *head = input(N);
	sort(head, N);
}
