#include<iostream>
using namespace std;
class node
{
	private:
			int data;
			node *next;
	public:	
			node(int);
			void setData(int );
			int getData();
			void setNext(node *);
			node* getNext();
			void showData();
};
node::node(int d)
{
		setData(d);
		next=NULL;
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
		next=ptr;
}
node* node::getNext()
{
		return next;
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
			void add(int);
			void showList();
			void showFromlast();
};
list::list()
{
		head=NULL;
		current=NULL;
		size=0;
}
void list::add(int d)
{
		node *ptr = new node(d);
		if(head == NULL)
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
{
		node *ptr=head;
		while(ptr!=NULL)
		{
			ptr->showData();
			ptr=ptr->getNext();
		}
}
void list::showFromlast()
{
    node* ptr = current; // Start from the current node
    node* temp = head;   // Initialize temp to the head node

    if (size == 0)
    {
        cout << "List is empty\n";
        return;
    }

    for (int i = 1; i <= size; i++)
    {
        ptr->showData();
        
        // Find the node that points to the current node
        while (temp->getNext() != current)
        {
            temp = temp->getNext();
        }

        ptr = temp;     // Move ptr to the previous node
        current = temp; // Move current to the previous node
        temp = head;    // Reset temp to the head node for the next iteration
    }
}

int main()
{
		list lst;
		lst.add(3);
		lst.add(5);
		lst.add(9);
		lst.add(1);
		lst.add(6);
		lst.add(8);
		cout<<"Actual List: "<<endl;
		lst.showList();
		cout<<endl;
		cout<<"Reverse List: "<<endl;
		lst.showFromlast();
}

