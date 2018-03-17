//rev_ll_data.cpp

#include <iostream>
//#include <cstring>
//#include <algorithm>
using namespace std;

class node {
public://as they need to be accessed outside the function
	node(int d)//constructor
	{
		data = d;
		next = NULL;
	}
	int data;//data of node
	node *next;//pointer to next node

};

void reverse(node *head, int N)
{
	for (int i = 0; i < N; ++i)
	{	node *cur = head;
		for (int j = 0; j < N - i - 1; ++j)
		{
			int m = cur->data;
			cur->data = cur->next->data;
			cur->next->data = m;
			cur = cur->next;
		}

	}
}

void display( node *head, int N)
{	node *cur_r = head;
	for (int i = 0; i < N; ++i)
	{
		cout << cur_r->data << " ";
		cur_r = cur_r->next;
	}
}



void insertion(int N)
{	int d;
	node *head = NULL;
	node *p;
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
	reverse(head, N);
	display(head, N);
}


int main()
{
	int N;
	cin >> N;
	insertion(N);


}