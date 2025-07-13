#include<iostream>
using namespace std;
class node
{
		private:
			int data;
			node *next;
			node *prev;
		public:
			node(int);
			void setData(int );
			int getData();
			void setNext(node *);
			node* getNext();
			void setPrev(node *);
			node* getPrev();
			void showData();
};
node::node(int d)
{
		setData(d);
		next=NULL;
		prev=NULL;
}
void node::setData(int d)
{
		data = d;
}
int node::getData()
{
		return data;
}
void node::setNext(node *ptr)
{
		next = ptr;
}
node* node::getNext()
{
		return next;
}
void node::setPrev(node *ptr)
{
		prev = ptr;
}
node* node::getPrev()
{
		return prev;
}
void node::showData()
{
		cout<<"   "<<data;
}
class list
{
		private:
			node *head;
			node *current;
			int size;
		public:
			list();
			void add(int );
			void showList();
};
list::list()
{
		head = NULL;
		current = NULL;
		size =0;
}
void list::add(int d)
{
		node *ptr = new node(d);
		if(size == 0)
		{
				head = ptr;
				current = ptr;
				current->setNext(head);
				current->setPrev(head);
		}
		else
		{
				ptr->setNext(current->getNext());
				ptr->setPrev(current);
				current->getNext()->setPrev(ptr);
				current->setNext(ptr);
				current = ptr;
		}
		size++;
}
void list::showList()
{
		node *ptr=head;
		do
		{
			ptr->showData();
			ptr=ptr->getNext();
		}while(ptr!=head);
}
int main()
{
		cout<<"hello world"<<endl;
		list l;
		l.add(4);
		l.add(9);
		l.add(1);
		l.add(3);
		l.showList();
}
