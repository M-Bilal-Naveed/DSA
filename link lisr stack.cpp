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
		void setNext(node*);
		int getData();
		node* getNext();
		void showData();
};
node::node(int val)
{
	setData(val);
	next=NULL;
}
void node::setData(int val)
{
	data=val;
}
void node::setNext(node *ptr)
{
	next=ptr;
}
int node::getData()
{ 
return data;
}
node* node::getNext()
{
	return next;
}
void node::showData()
{
	cout<<this->getData()<<"   ";
	cout<<endl;
}
class stack
{
	private:
		int size;
		node *current,*head;
	public:
		stack();
		void push(int);
		void pop();
	//	void showList();
		bool isEmpty();
};
stack::stack()
{
	head=NULL;
	current=NULL;
	size=0;
}
bool stack::isEmpty()
{
	return(size==0);
}
void stack::push(int val)
{ 
node *ptr=new node(val);
	if(size==0)
	{  
		head=ptr;
		current=ptr;
		current->setNext(ptr);
		size++;
	}
	else
	{
		ptr->setNext(head);
		current=ptr;
		head=ptr;
		size++	;
	
	}
}
/*void stack::showList()
{
	//node *ptr=head;
	do
	{
		head->showData();
		he	
		//ptr->showData();
		//ptr=ptr->getNext();
	}while(ptr!=head);
	
}*/
void stack::pop()
{
	if(isEmpty())
	cout<<"empty list"<<endl;
	else
	{
	node *ptr=head;
	head=head->getNext();
	ptr->showData();

	delete ptr;
	}
}
int main()
{
	stack s;
	s.push(10);
	s.push(12);
	s.push(14);
	
	s.pop();
	s.pop();
	s.pop();
	
}
