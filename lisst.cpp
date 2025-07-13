#include<iostream>
using namespace std;
class list
{
	private:
		float *ptr;
		int size,current,length;
	public:
		list(int);
	void add(float);
	void showList();
	int getSize();
	int getLength();
	int getCurrent();
	void start();
	void tail();
	void next();
	void back();
	float get(int position);
	void insertAt(int position,float value);
	void remove(float )	;
};
list::list(int l)
{
	length=l;
	if(length>0)
	{
		ptr=new float[l];
		for(int i=0;i<length;i++)
		ptr[i]=0;
		current=0;
		size=0;
	}
}
void list ::add(float m)
{
	if(size<length)
	{
		ptr[current]=m;
		size++;
		current++;
	}
	else
	cout<<"list is already full"<<endl;
}
void list::showList()
{
	if(size>0)
	{
	{for(int i=0;i<size;i++)
	cout<<ptr[i]<<",";
	}
	cout<<endl;}
	else
	cout<<"list is empty"<<endl;
}
int list::getSize()
{
    return size;
}
int list::getLength()
{
    return length;
}
int list::getCurrent()
{
	return current;
}
void list::start()
{
	if(current==0)
	cout<<"already at start"<<endl;
	else 
	current=0;
}
void list::tail()
{
	if(current==size)
	cout<<"already at end"<<endl;
	else
	current=size;
}
void list ::next()
{
	if(current==length)
	cout<<"already at end cant move further"<<endl;
	else
	current++;
}
void list::back()
{
	if(current==0)
	cout<<"already at start cant move back "<<endl;
	else
	current--;
}
/*float list::get(int position)
{
	if(position<=size)
	return ptr[position];
}*/
void list::insertAt(int position,float value)
{
	if(position>length)
cout<<"invalid position";
else
{
for(int i=length-1;i>=position;i++)
{ptr[i+1]=ptr[i];}
ptr[position]=value;
tail();
size++;}
}
void list::remove (float value)
{
int i=0;
for(i=0;i<=size;i++)
{
if(ptr[i]==value)
break;
}
if(i==size)
{
cout<<"valu not found"<<endl;
}
else
{
for(int j=i;j<=size;j++)
{
ptr[j]=ptr[j+1];
}
}
size--;
tail();
}
int main()
{
	list l1(3);
	cout<<l1.getLength()<<endl;
	cout<<l1.getSize()<<endl;
	cout<<l1.getCurrent()<<endl;
	l1.showList();
	l1.add(12.4);
    l1.add(14.5);
    cout<<l1.getLength()<<endl;
	cout<<l1.getSize()<<endl;
	cout<<l1.getCurrent()<<endl;
	l1.showList();
	l1.add(13);
	l1.showList();
	l1.add(15);
	l1.tail();
 	return 0;}