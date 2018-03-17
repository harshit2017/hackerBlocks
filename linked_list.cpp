//linked_list.cpp

#include <iostream>
//#include <cstring>
//#include <algorithm>
using namespace std;

class node {
public:
	int data;
	node *next;
	node(int d, node * q = 0): data(d), next(q) {}
};


/*void sort(node * head, int N)
{

	for (int i = 0; i < N; ++i)
	{
		node * cur = head;
		node *curn = head->next;
		//cout << cur->next->data;
		//cout << "end";

		for (int j = 0; j < N; ++j)
		{	if (curn == NULL)
			{
				break;
			}
			if ((cur->data) >= (curn->data))
			{
				int m = cur->data;
				cur->data = curn->data;
				curn->data = m;
			}
			//cout << "end";

			cur = cur->next;
			curn = curn->next;
		}
	}
	node * p = head;
	for (int i = 0; i < N; ++i)
	{
		cout << p->data << " ";
		p = p->next;
	}
}



*/
int main()
{
	int N;
	cin >> N;
	int d;
	node *  head = 0;
	node *p = 0;
	for (int i = 0; i < N; ++i)
	{	cin >> d;
		if (head == 0)
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

	for (int i = 0; i < N - 1; ++i)
	{	node * m = head;



		for (int j = 0; j < N - 1; ++j)
		{	if (m->data > m->next->data)
			{	int c = m->data;
				m->data = m->next->data;
				m->next->data = c;

			}
			m = m->next;
		}

		//sort(head, N);

	}
	node * s = head;
	for (int i = 0; i < N; ++i)
	{
		cout << s->data;
		s = s->next;
	}
}