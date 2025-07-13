#include<iostream>
#include<string.h>
#include "CourseData.cpp"
using namespace std;
class list
{
	private:
		data *ptr;
		int current;
		int size;
		int length;
	public:
		list(int);
		void add(data);
		void printList();
		void copyList(list);
		void next();
		void back();
		void start();
		void tail();
		void clearList();
		int getLength();
		~list();
		
};
list::list(int l)
{
	if(l>0)
	{
		length=l+1;
		size=0;
		current=0;
		ptr=new data[length];

	}
}
void list::add(data val)
{
	if(current==length)
	{
		cout<<"list is full"<<endl;
	}
	else
	{
		ptr[++current]=val;
		size++;
	}
}
void list::printList()
{
	for(int i=1;i<=size;i++)
	{
	cout<<"\t"<<this->ptr[i].getCode()<<"\t"<<this->ptr[i].getName()<<"  \t  "<<this->ptr[i].getMarks()<<"  \t  "<<this->ptr[i].getCrdHr()<<"  \t  "<<this->ptr[i].getGradepoint();
 	cout<<endl;
		cout<<"  ";
	}
	cout<<endl;
	if(size==0)
	{
		cout<<"List is empty :"<<endl;
	}
}
void list::next()
{
	if(current==size)
	{
		cout<<"current is alread at end, cant move further"<<endl;
	}
	else
	current++;
}
void list::back()
{
	if(current==1)
	{
		cout<<"current is alread at start, cant move further"<<endl;
	}
	else 
	current--;
}
void list::start()
{
	current==1;
}
void list::tail()
{
	current==size;
}
void list::clearList()
{
	current=0;
	size=0;
}
void list::copyList(list a)
{
	length=a.length;
	current=a.current;
	size=a.size;
	ptr=new data[length];
	for(int i=1;i<=length;i++)
		{
			ptr[i]=a.ptr[i];
		}	
}
int list::getLength()
{
	return length;
}
list::~list()
{
	delete []ptr;
}
/*
int main()
{
	cout<<"\t\t\t\t1st Semester"<<endl;
	data d1;
				d1.setData("CC-213-3","Data Structure and Algorithms",80,4);
    data d2;
				d2.setData("CC-212-3","Software          Enginnering",70,3);
    data d3;
				d3.setData("CC-311-3","Operating              System",65,4);
    data d4;
				d4.setData("SI-241-3","Modeling    and    Simulation",60,3);
    data d5;
				d5.setData("MS-252-3","Linear                Algebra",85,3);
    data d6;
				d6.setData("HQ-004___","Quran            Translation",80,2);
    
    data d7;
				d7.setData("CC-213-3","Data Structure and Algorithms",80,4);
    data d8;
				d8.setData("CC-212-3","Software          Enginnering",70,3);
    data d9;
				d9.setData("CC-311-3","Operating              System",65,4);
    data d10;
				d10.setData("SI-241-3","Modeling    and    Simulation",60,3);
    data d11;
				d11.setData("MS-252-3","Linear                Algebra",85,3);
    data d12;
				d12.setData("HQ-004___","Quran            Translation",80,2);
    
		list l1(8);
		l1.add(d1);
		l1.add(d2);
		l1.add(d3);
		l1.add(d4);
		l1.add(d5);
		l1.add(d6);
		l1.printList();
		list l2(6);
		
	data sd1;
				sd1.setData("CC-213-3","Data Structure and Algorithms",80,4);
    data sd2;
				sd2.setData("CC-212-3","Software          Enginnering",70,3);
    data sd3;
				sd3.setData("CC-311-3","Operating              System",65,4);
    data sd4;
				sd4.setData("SI-241-3","Modeling    and    Simulation",60,3);
    data sd5;
				sd5.setData("MS-252-3","Linear                Algebra",85,3);
    data sd6;
				sd6.setData("HQ-004___","Quran            Translation",80,2);
    	l2.add(sd1);
		l2.add(sd2);
		l2.add(sd3);
		l2.add(sd4);
		l2.add(sd5);
		l2.add(sd6);
    l2.printList();
    
		d1.calGPA(d1.getMarks()+d2.getMarks()+d3.getMarks()+d4.getMarks()+d5.getMarks()+d6.getMarks(),d1.getCrdHr()+d2.getCrdHr()+d3.getCrdHr()+d4.getCrdHr()+d5.getCrdHr()+d6.getCrdHr());
		cout<<d1.getGPA();
	
}
	   
*/
