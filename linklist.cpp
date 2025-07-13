#include<iostream>
using namespace std;
class node
{
	private:
			int data;
			node *next;
	public:
			node(int );
			void setData(int);
			int getData();
			void setNext(node *);
			node* getNext();
			void showData();
};
node::node(int d)
{
		setData(d);
		next = NULL;
}
void  node::setData(int d)
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
		private:
				node* head;
				node* current;
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
		if(size==0)
		{
				head = ptr;
				current = ptr;
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
		node* ptr = head;
		while(ptr!=NULL)
		{
				ptr->showData();
				ptr = ptr->getNext();
		}
}
int main()
{
		cout<<"hello world"<<endl;
		list lst;
		lst.add(2);
		lst.add(6);
		lst.add(8);
		lst.add(9);
		lst.add(7);
		lst.add(1);
		lst.showList();
}
