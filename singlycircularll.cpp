#include<iostream>
using namespace std;
class node
{
	private:
		int data;
		node *next;
	public:	
		node(int );
		void setData(int );
		int getData();
		void setNext(node *);
		node* getNext();
		void showData();
};
node::node(int d)
{
	setData(d);
	next= NULL;
}
void node::setData(int d)
{
	data = d;
}
int node::getData()
{
	return data;
}
void node::setNext(node* ptr)
{
	next = ptr;
}
node* node::getNext()
{
	return next;
}
void node::showData()
{
	cout<<data<<"    ";
}
class list
{
	public:
		list();
		void add(int );
		void showList();
		void remove();
		void findVal(int);
		void forward();
		void back();
	private:
		node *head;
		node *current;
		int size;		
};
list::list()
{
	head = NULL;
	current = NULL;
	size = 0;
}
void list::add(int d)
{
	node *ptr = new node(d);
	if(size == 0)
	{
		head = ptr;
		current=ptr;
		current->setNext(head);
	}
	else
	{
		ptr->setNext(current->getNext());
		current->setNext(ptr);
		current=ptr;
	}
	size++;
}
void list::showList()
{
	if(size == 0)
	{
		cout<<"LIst is empty"<<endl;
	}
	else
	{
		node *ptr = head;
		do
		{
			ptr->showData();
			ptr=ptr->getNext();
		}while(ptr!=head);
	}
	cout<<endl;
}
void list::remove()
{
	
	
	if(size==0)
	{
		cout<<"Empty list"<<endl;
		return;
	}
	if (current==head)
	{
		head = head->getNext();	
	}
	
	node* temp=current;
	node* ptr = head;	
	
	do
	{
		if(ptr->getNext()== current)
		{
				break;	
		}
		ptr = ptr->getNext();

	}while(ptr !=head);
	ptr->setNext(current->getNext());
	current=current->getNext();
	delete temp;
	size--;
	
	
}
void list::findVal(int v)
{
	node* ptr=head;
	if(ptr == NULL)
	{
		cout<<"LIst is empty"<<endl;
	}
	else
	{
		do
		{
			if(ptr->getData()==v)
			{
				cout<<"Value found"<<endl;
				break;
			}
			ptr=ptr->getNext();
		}while(ptr!=head);
		
	}
}
void list::forward()
{
	if(current!=NULL)
		current=current->getNext();
}
void list::back()
{
	node *ptr = head;
	do{
		if(ptr->getNext()==current)
		{
			break;
		}
		ptr=ptr->getNext();
	}while(ptr!=head);
	current=ptr;
}
int main()
{
	cout<<"Hellow world"<<endl;
	list l;
	l.add(5);
	l.add(9);
	l.add(7);
	l.add(3);
	l.add(6);
	l.findVal(6);
	l.showList();
	l.remove();
	l.showList();
	l.back();
	l.showList();
	l.remove();
	l.showList();
	l.remove();
	l.showList();
	l.remove();
	l.showList();
	l.remove();
	l.showList();
}