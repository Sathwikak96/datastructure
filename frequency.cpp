#include<iostream>
#include<iomanip>
using namespace std;
struct node
{
	int info;
	struct node *next;
}*first, *last;
int count = 0;
class singly
{
	public:
		node* create_node(int);
		void insert_begin();
		void insert_end();
		void insert_pos();
		void display();
		void search();
		singly()
		{
			first = NULL;
 			last = NULL;
	    }
};
int main()
{
	int choice;
	singly sl,s2;
	do
	{
		cout<<"\t\t\t--------------------------------"<<endl;
		cout<<"\t\t\tOperations on singly linked list"<<endl;
		cout<<"\t\t\t--------------------------------"<<endl;
		cout<<"1.Insert at first\t";
		cout<<"2.Insert at Last\t";
		cout<<"3.Insert at Position"<<endl;
		cout<<"4.Search\t\t";
		cout<<"5.Display\t\t";
		cout<<"6.Exit\t\t\t"<<endl;
		cout<<"Enter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:	sl.insert_begin();
				s2.display();
				break;
			case 2:	sl.insert_end();
				s2.display();
				break;
			case 3:	sl.insert_pos();
				s2.display();
				break;
			case 4:sl.search();
				s2.display();
				break;
			case 5:s2.display();
				break;
			case 6:cout<<"Successfully Exited"<<endl;
				s2.display();
				exit(0);
				break;
			default:cout<<"Wrong Choice...???"<<endl;
				s2.display();
				break;
		}
	}
	while(choice != 20);
}
node* singly :: create_node(int num)
{
	struct node *nn;
	nn = new(struct node);
	if (nn == NULL)
	{
		cout<<"Memory not allocated"<<endl;
		return 0;
	}
	else
	{
		nn->info = num;
		nn->next = NULL;
		return nn;
	}
}
void singly :: insert_begin()
{
	int value;
	struct node *temp;
	cout<<"Enter the element to be inserted : ";
	cin>>value;
	temp = create_node(value);
	if ( first == last && first == NULL )
	{
		count++;
		first = last = temp;
		first->next = last->next = temp->next;
		cout<<first->info<<" inserted at first in the empty list"<<endl;
	}
	else
	{
		count++;
		temp->next = first;
		first = temp;
		cout<<first->info<<" inserted at first"<<endl;
	}
}
void singly :: insert_end()
{
	int value;
	struct node *temp;
	cout<<"Enter the element to be inserted : ";
	cin>>value;
	temp = create_node(value);
	if ( first == last && first == NULL )
	{
		count++;
		first = last = temp;
		first->next = last->next = temp->next;
		cout<<last->info<<" inserted at first in the empty list"<<endl;
	}
	else
	{
		count++;
		last->next = temp;
		last = temp;
		cout<<last->info<<" inserted at last"<<endl;
	}
}
void singly :: insert_pos()
{
	int value, pos;
	struct node *temp, *f, *l;
	cout<<"Enter the element to be inserted : ";
	cin>>value;
	temp = create_node(value);
	if ( first == NULL && last == NULL )
	{
		cout<<"The list is empty, Pls enter the position [ SAY 1 ] : ";
		cin>>pos;
		if ( pos == 1 )
		{
			count++;
			first = last = temp;
			first->next = last->next = temp->next;
			cout<<temp->info<<" inserted at first in the empty list"<<endl;
		}
		else
			cout<<"Invalid Position"<<endl;
	}
	else
	{
		cout<<"Enter the position from 1 to "<<count + 1<<" : ";
		cin>>pos;
		if ( pos == 1 )
		{
			count++;
			temp->next = first;
			first = temp;
			cout<<first->info<<" inserted at first"<<endl;
		}
		else if ( pos == count + 1 )
		{
			count++;
			last->next = temp;
			last = temp;
			cout<<last->info<<" inserted at last"<<endl;
		}
		else if (pos > 1  && pos <= count)
		{
			f = first;
			for ( int i = 1 ; i <= pos - 1 ; i++ )
			{
				l = f;
				f = f->next;
			}
			count++;
			l->next = temp;
			temp->next = f;
			cout<<temp->info<<" inserted at position "<<pos<<endl;
		}
		else
			cout<<"Position out of range"<<endl;
	}
}
void singly :: display()
{
	struct node *temp;
	if ( first == NULL && last == NULL )
	{cout<<"The list is empty...!!!"<<endl;}
	else
	{
		temp = first;
		cout<<"Linked list of "<<count<<" elements : ";
		for ( int i = 1 ; i < count ; i++ )
		{
			cout<<temp->info<<"->";
			temp = temp->next;
		}
		cout<<temp->info<<endl;
	}
}
void singly :: search()
{
	int pos = 0, flag = 0, value;
	struct node *f;
	if ( first == NULL && last == NULL ) {}
	else
	{
		cout<<"Enter the value to be searched : ";
		cin>>value;
		f = first;
		for (int i = 0; i < count; i++)
		{
			pos++;
			if (f->info == value)
			{
				flag++;
				if (flag == 1)
					cout<<"Element "<<value<<" found at position : "<<pos;
				else if (flag > 1 && flag <= count)
					cout<<" , "<<pos;
			}
			f = f->next;
		}
		if (flag == 0)
			cout<<"Element "<<value<<" not found in the list"<<endl;
		else if (flag == 1)
			cout<<endl<<"Element "<<value<<" entered "<<flag<<" time"<<endl;
		else
			cout<<endl<<"Element "<<value<<" entered "<<flag<<" times"<<endl;
	}
}





