#include<iostream>
using namespace std;
class node
{
	private:
		string name;
		node *next;
	public:
		node(string);
		void setName(string);
		void setNext(node *);
		string getName();
		node* getNext();
		void showData();
		
};
node::node(string s)
{
	setName(s);
	next=NULL;
	
}
void node::setName(string s)
{
	name=s;
}
void node::setNext(node *ptr)
{
	next=ptr;
}
string node::getName()
{return name;
}
node* node::getNext()
{
	return next;
}
void node::showData()
{
	cout<<name<<"  "<<next<<endl;
}
class list
{
	private:
		int size;
		node *head,*current;
	public:
		list();
		void add(string);
		void showList()	;
		void back();
		void forward();
		void remove();
		
};
list::list()
{
	head=NULL;
	current=NULL;
	size=0;
}
void list::add(string s)
{
	node *ptr=new node(s);	
	if(size==0)
	{
		head=ptr;
		current=ptr;	
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
{ node *ptr=head;

if(size==0)
cout<<"list is empty"<<endl;
else
while(ptr!=NULL)
{
	ptr->showData();
	ptr=ptr->getNext();
}
}
void list::forward()
{
	if(size==0)
	cout<<"empty list"<<endl;
	if(current->getNext()==NULL)
	cout<<"already is last"<<endl;
	else
	current=current->getNext();
}
void list::back()
 { node *ptr=head;
	if(size==0)
	cout<<"empty list"<<endl;
	if(current==head)
	cout<<"already at first"<<endl;
	else
	{while(ptr->getNext()!=current)
	{
		ptr=ptr->getNext();
	}
	current=ptr;}
	}
void list::remove()
{	
	if(size==0)
	{
		cout<<"empty list"<<endl;
		return;
	}
	if (current==head)
	{
		head=head->getNext();
		
	}
	node*temp=current;
	node*ptr=head;
	do
{
	if(ptr->getNext()==current)
		
	{
		break;
	}
	ptr=ptr->getNext();

}
while (ptr!=head);
ptr->setNext(current->getNext());
current=current->getNext();
delete temp;
	size--;
}
int main()
{
	list l1;
	l1.add("asjad ");
	l1.add("usman");
	l1.add("haseeb");
	l1.showList();
	//l1.forward();	
	l1.back();
	l1.add("ali");
	l1.showList();
	l1.forward();
	l1.remove();
	l1.showList();
	l1.remove();
	l1.add("chattha");
	l1.showList();
}

