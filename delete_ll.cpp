//delete_ll.cpp

#include <iostream>
//#include <cstring>
//#include <algorithm>
using namespace std;
class node {
public:
	int data;
	node *next;
	node(int d) {
		data = d;
		next = NULL;
	}
};

void del(node *&head, int pos)
{
	node *cur = head->next, *prev = head;

	for (int i = 1; cur; cur = cur->next)
	{	if (pos == 0)
		{	node *temp = head;
			head = head->next;
			delete temp;
			return;
		}
		else if (i == pos)
		{
			prev->next = cur->next;
			delete cur;
			return;
		}
		++i;
		prev = prev->next;
	}
}

int main()
{
	int n, q;
	cin >> n >> q;
	node *head = 0;
	node *p = 0;
	int i = 0, d;
	while (i < n)
	{
		cin >> d;
		if (head == 0)
		{	head = new node(d);
			p = head;
		}
		else {
			p->next = new node(d);
			p = p->next;
		}

		++i;
	}


	int pos[q];
	for (int i = 0; i < q; ++i)
	{

		cin >> pos[i];

	}

	for (int i = 0; i < q; ++i)
	{
		del(head, pos[i]);

		node *m = head;
		for (; m; m = m->next)
		{
			cout << m->data << " ";

		}
		cout << endl;
	}

}