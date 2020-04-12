//Ahmad Amjad Mughal
//BSCS-6C
//121672

#include <iostream>
using namespace std;

struct node
{
	int data;
	node *next;

};
class list
{
	node *head, *tail;
public:
	list()
	{
		head = NULL;
		tail = NULL;
	}
	void createnode(int value)
	{
		node *temp = new node;
		temp->data = value;
		temp->next = NULL;
		if (head == NULL)
		{
			head = temp;
			tail = temp;
			temp = NULL;
		}
		else
		{
			tail->next = temp;
			tail = temp;
		}
	}

	void display(){
		{
			node *temp = new node;
			temp = head;
			while (temp != NULL)
			{
				cout << temp->data << "  ";
				temp = temp->next;
			}
		}
	}

		void insert_start(int value)
		{
			node *temp = new node;
			temp->data = value;
			temp->next = head;
			head = temp;
		}
		void insert_position(int pos, int value)
		{
			node *previous = new node;
			node *current = new node;
			node *temp = new node;
			current = head;
			for (int i = 1; i < pos; i++)
			{
				previous = current;
				current = current->next;
			}
			temp->data = value;
			previous->next = temp;
			temp->next = current;
		}
		void deleteFirst()
		{
			node *temp = new node;
			temp = head;
			head = head->next;
			delete temp;
		}
		void deleteLast()
		{
			node *current = new node;
			node *previous = new node;
			current = head;
			while (current->next != NULL)
			{
				previous = current;
				current = current->next;
			}
			tail = previous;
			previous->next = NULL;
			delete current;
		}
		void deletePosition(int pos)
		{
			node *current = new node;
			node *previous = new node;
			current = head;
			for (int i = 1; i < pos; i++)
			{
				previous = current;
				current = current->next;
			}
			previous->next = current->next;
		}

	};
	int menu()
	{
		list list1;
		char a;
		int number = 0;
		int sum = 0;
		cout << "Press t to terminate" << endl;
		cout << "Press Y to display the node and press n if you donot want" << endl;
		cin >> a;
		cout << "\n";

		if (a == 'Y' || a == 'y')
		{
			while (a == 'y' || a == 'Y')
			{
				cout << "OK! Enter value for node ";
				cin >> number;
				list1.createnode(number);

				cout << "\n";
				if (a == 't' || a == 'T')
				{
					return 0;
				}
				cout << "Do you want to display node if yes press 'y' if not press 'n'";
				cin >> a;

				if (a == 'y' || a == 'Y')
				{
					list1.display();
				}
				else if (a == 'n' || a == 'N')
				{
					cout << "Do yoo really want to add nodes? if not then press" << endl;
					cin >> a;
					if (a == 'y' || a == 'Y')
					{
						sum += number;
						cout << "The sum of nodes are" << sum;
						if (a == 't' || a == 'T')
						{
							return 0;
						}
					}
				}
				else if (a == 't' || a == 'T')
				{
					return 0;
				}

			}
		}
		else if (a == 'n' || a == 'N')
		{
			return 0;
		}
		return 0;
	}
	int main()
	{
		menu();

		return 0;
	}


