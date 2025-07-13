#include<iostream>
using namespace std;
class list
{
		public:
			list(int );
			void add(int );
			void showList();
			void start();
			void tail();
			void copy(list );
			void next();
			void back();
			void clearList();
			int get(int);
			void updateAt(int ,int );
			int getLength();
			int getSize();
			void find(int );
			void inserAt(int ,int );
			void remove(int);
		private:
			int *ptr;
			int length;
			int current;
			int size;
};
list::list(int l)
{
	if(l>0)
	{
		length = l;
		ptr = new int [l];
			for(int i=0;i<length;i++)
				ptr[i]=-1;
	}
	size = 0;
	current = -1;
}
void list::add(int val)
{
	if(size<length)
	{
				ptr[++current]=val;
				size++;
	}
	
	else
		cout<<"List is full, you cant add more"<<endl;
}
void list::showList()
{
	for(int i=0;i<size;++i)
		cout<<ptr[i]<<"   ";
	cout<<endl;
	if(size==0)
		cout<<"list is empty"<<endl;
}
void list::start()
{
		current = 0;
}
void list::tail()
{
		current = size;
}
void list::copy(list l)
{
	delete ptr;
		size = l.size;
		length = l.length;
		current = l.current;
		ptr = new int[length];
		for(int i=0;i<l.length;i++)
			ptr[i]=l.ptr[i];
}
void list::next()
{
	if(current < length)
		current++;
}
void list::back()
{
		if(current>0)
			current--;
}
void list::clearList()
{
		for(int i=0;i<length;i++)
			ptr[i]=-1;
			
		size=0;
		current=-1;
}
int list::get(int pos)
{
	if(pos<=size)
		return ptr[pos];
}
void list::updateAt(int val,int pos)
{
		if(pos<=size)
			ptr[pos]=val;
}
int list::getLength()
{
		return length;
}
int list::getSize()
{
		return size;
}
void list::find(int val)
{
		for(int i=0;i<=size;i++)
			{
				if(val==ptr[i])
				{
						cout<<"Value found at position : "<<i<<endl;
						return;
				}
			}
		cout<<"Value not found"<<endl;
}
void list::inserAt(int val,int pos)
{
		if(pos>length)
			cout<<"Invalid position"<<endl;
		else
			{
				for(int i= length-1;i>=pos;i--)
				{
					ptr[i+1]=ptr[i];
				}
				ptr[pos]=val;
				tail();
				size++;
			}
}
void list::remove(int val)
{
	int i=0;
	for(i=0;i<=size;i++)
		{
			if(ptr[i]==val)
			break;
		}
	if(i==size)
	{
		cout<<"Value not found"<<endl;
	}
	else
	{
		for(int j=i;j<=size;j++)
		{
				ptr[j]=ptr[j+1];
		}
		size--;
		tail();
		
	}
}
int main()
{
		cout<<"Hello world"<<endl;
		list l(10);
		l.add(4);
		l.add(6);
		l.add(2);
		l.add(9);
		l.add(7);
		l.showList();
		list l2(10);
		l2.copy(l);
		l2.showList();
		l2.clearList();
		l2.showList();
		l.updateAt(1,4);
		l.find(9);
		l.showList();
		l.inserAt(5,1);
		l.showList();
		l.remove(4);
		l.showList();
}
