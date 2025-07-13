#include<iostream>
using namespace std;
class node
{
		public:
			node(int );
			void setData(int );
			int getData();
			void setNext(node *);
			node* getNext();
			void setPrev(node *);
			node* getPrev();
			void showData();
		private:
			int data;
			node *next;
			node *prev;
			int size;
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
		prev=ptr;
}
node* node::getPrev()
{
		return prev;
}
void node::showData()
{
		cout<<data<<"   ";
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
			void forward();
			void backword();
			void remove();
};
list::list()
{
		size = 0;
		head = NULL;
		current = NULL;
}
void list::add(int d)
{
	node *ptr = new node(d);
		if(size ==0)
		{
				head = ptr;
				current = ptr;
				current->setNext(ptr);
				current->setPrev(ptr);
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
		node *ptr = head;
		do
		{
				ptr->showData();
				ptr=ptr->getNext();
		}while(ptr!=head);
		cout<<endl;
}
void list::forward()
{
		current = current->getNext();
}
void list::backword()
{
		current = current->getPrev();
}
void list::remove()
{
		node *ptr=current;
		ptr->getNext()->setPrev(ptr->getPrev());
		ptr->getPrev()->setNext(ptr->getNext());
		current=current->getNext();
		delete ptr;
		size--;
}
int main()
{
	cout<<"hellow world"<<endl;
	list l;
	l.add(3);
	l.add(1);
	l.add(2);
	l.add(9);
	l.add(5);
	l.showList();
	l.remove();
	l.showList();
	l.remove();
	l.showList();
}
