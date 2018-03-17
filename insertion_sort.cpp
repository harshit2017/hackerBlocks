//insertion_sort.cpp

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

void sort(node *head, int N)
{	node *ahead = head->next;
	while (ahead != NULL)
	{
		node *cur = head;
		while ( cur != ahead ) //sort the given ll
		{
			if (cur->data > ahead->data)
			{
				int temp = cur->data;
				cur->data = ahead->data;
				ahead->data = temp;
			}
			cur = cur->next;
			//ahead = ahead->next;

		}
		ahead = ahead->next;
	}
	node *p = head;
	for (int i = 0; i < N; ++i)//print sorted ll
	{
		cout << p->data << " ";
		p = p->next;
	}
}

int main()
{
	int N;
	cin >> N;
	node *head = input(N);
	sort(head, N);
}