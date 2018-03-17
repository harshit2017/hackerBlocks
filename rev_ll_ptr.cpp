//rev_ll_ptr.cpp

#include <iostream>
//#include <cstring>
#include <algorithm>
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

void display(node *cur_r)
{
	while (cur_r != 0)
	{
		cout << cur_r->data << " ";
		cur_r = cur_r->next;
	}
}


void reverse(node *cur, int N)
{	node *prev = NULL, *ahead;
	while (cur != NULL)
	{
		ahead = cur->next;
		cur->next = prev;
		prev = cur;
		cur = ahead;
	}
	free(cur);
	display(prev);
}

void insertion(int N)
{
	node *head = NULL;
	node *p;
	int d;
	for (int i = 0; i < N; ++i)
	{	cin >> d;
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
}



int main()
{
	int N;
	cin >> N;
	insertion(N);

}