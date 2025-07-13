#include<iostream>
using namespace std;
class node
{
	private:
		int data;
		node *next;
	public:
		node(int);
		void setData(int);
		int getData();
		void showData();
		void setNext(node*);
		node* getNext();
};
node::node(int d)
{
	setData(d);
	next=NULL;
}
void node::setData(int d)
{
	data=d;
}
int node::getData()
{
	return data;
}
void node::showData()
{
	cout<<data<<"  ";
}
void node::setNext(node *ptr)
{
	next=ptr;
}
node* node::getNext()
{
	return next;
}
class stack
{
	private:
		node *head;
	public:
		stack();
		void push(int);
		int pop();
		int top();
		bool IsEmpty();
};
stack::stack()
{
	head=NULL;
}
void stack::push(int d)
{
	node *ptr=new node(d);
	ptr->setNext(head);
	head=ptr;
}
int stack::pop()
{
	int x=head->getData();
	node *temp=head;
	head=head->getNext();
	delete temp;
	return x;
}
int stack::top()
{
	return head->getData();
}
bool stack::IsEmpty()
{
	if(head==NULL)
	{
		return true;
	}
	else
	return false;
}
int main()
{
	cout<<"Hello World!"<<endl;
//	node n(45);
//	n.showData();
//	n.setData(20);
//	n.showData();
	stack s;
	cout<<"Is Empty = "<<s.IsEmpty()<<endl;
	s.push(1);
	cout<<"Top = "<<s.top()<<endl;
	s.push(2);
	cout<<"Top = "<<s.top()<<endl;
	s.push(3);
	cout<<"Is Empty = "<<s.IsEmpty()<<endl;
	cout<<"Top = "<<s.top()<<endl;
	cout<<"Pop = "<<s.pop()<<endl;
	cout<<"Top = "<<s.top()<<endl;
	cout<<"Pop = "<<s.pop()<<endl;
	cout<<"Is Empty = "<<s.IsEmpty()<<endl;
	cout<<"Top = "<<s.top()<<endl;
	cout<<"Pop = "<<s.pop()<<endl;
	cout<<"Is Empty = "<<s.IsEmpty()<<endl;
}

