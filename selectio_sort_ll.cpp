//selectio_sort_ll.cpp

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

node* insertion(int N)
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
	return head;
}

void sort(node *cur)
{
	while (cur->next != NULL)
	{	node *temp = cur->next;
		node *pos = cur;
		int min = cur->data;//cout << min;
		while (temp != NULL)
		{
			if (min > temp->data)
			{
				min = temp->data;
				pos = temp;

			}
			//cout << min;
			temp = temp->next;
		}
		//cout << "h";
		int temp_d = cur->data;
		cur->data = pos->data;
		pos->data = temp_d;

		cur = cur->next;
	}
}
void display(node *head)
{
	node *p = head;
	while (p != NULL)
	{
		cout << p->data << " ";
		p = p->next;
	}
}
int main()
{
	int N;
	cin >> N;
	node *head = insertion(N);
	sort(head);
	display(head);
}