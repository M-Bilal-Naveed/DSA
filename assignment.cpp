#include<iostream>
using namespace std;
class node
{
	private:
		string data;
		node *next;
	public:
		node(string);
		void setData(string);
		void setNext(node *);
		string getData();
		node* getNext();
		void showData();
};
node::node(string s)
{
	this->setData(s);
	next=NULL;

}
void node:: setData(string s)
{
	data=s;
}
void node::setNext(node *ptr)
{
	next=ptr;
}
node* node::getNext()
{
	return next;
}
void node::showData()
{
		//cout<<data<<endl;
		cout<<data<<"    "<<next<<endl;
}
string node::getData()
{
	return data;
}
class list
{
	private:
		node *head,*current;
		int size;
	public:
		list();
		void add(string);
		void showList();
		void forward();
		void back();
		void findVal(string);
		void remove();
		int sizeOfList();
		void start();	
};
list ::list()
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
		current->setNext(head);
		size++;
	}
	else
	{
	ptr->setNext(current->getNext());
	current->setNext(ptr);
	current=ptr; 
	size++;
	}
}
void list::forward()
{
	//if(current->getNext()==head)
	//cout<<"already at last node"<<endl;
	//else
	current=current->getNext();
}
void list::back()
{
	node *ptr=head;
	if(current==head)
	cout<<"at first node cant go back"<<endl;
	else
	while(ptr->getNext()!=current)
	{
		ptr=ptr->getNext();
	}
	current=ptr;
}
void list::showList()
{
	node* ptr = head;
		do
		{
				ptr->showData();
				ptr = ptr->getNext();
		}while(ptr!=head);
}
/*void list::remove()
{
	node *ptr=head;
	node *temp=current;
	if(size!=0)
	{
		if(current==head)
		head=current->getNext();
		while(ptr->getNext()!=current)
		{
			ptr=ptr->getNext();
		}
		ptr->setNext(current->getNext());
		current=current->getNext();
		delete temp;
		
	}
}*/
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
void list::findVal(string d)
{
	if(size==0)
	cout<<"empty list"<<endl;
	else
	{
	node *ptr=head;
	do{
		if(ptr->getData()==d)
	{	cout<<"value found"<<endl;
		return;}
		ptr=ptr->getNext();
	}while(ptr!=NULL);
	cout<<"value not found"<<endl;}
}
int list::sizeOfList()
{
	return size;
}
void list::start()
{
	current=head;
}
int main()
{
	list l1;
    l1.add("asjad");
    l1.add("usman");
    l1.add("ali");
    l1.add("umer");
    l1.add("sher");
    list l2;
    l2.add("a");
    l2.add("b");
    l2.add("c");
    l2.add("e");
    l2.add("f");
   // l1.showList();
    
    char choice;
    cout<<"enter m to select cr OR enter f to select gr"<<endl;
    cin>>choice;
    if(choice=='m'||choice=='M')
{   
    l1.start();
	while(l1.sizeOfList()>1)
    {
	for(int i=0;i<3;i++)
	{l1.forward();
	}
	l1.remove();
	l1.showList();	
	}
	cout<<"cr is ";
	l1.showList();
}
	else if(choice=='f'||choice=='F')
	{
	l2.start();	
	 while(l2.sizeOfList()>1)
     	{
	for(int i=0;i<3;i++)
			{l2.forward();
			}
	l2.remove();
	l2.showList();	
		}
	cout<<"gr is ";
	l2.showList();
	}
}
