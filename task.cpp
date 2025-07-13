#include<iostream>
using namespace std;
int limit[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
class age
{
	private:
		
	public:
		int day,month,year;
	void in(int ,int ,int );
	void setAge(int ,int ,int )	;
	void setYear(int);
	void setMonth(int);
	void setDate(int);
	int getYear();
	int getMonth();
	int getDate();
    void printDob();
    void printDate();
    void printAge();
	age operator -(age p)
	 {  age temp;
		if(month>=p.month&&day>=p.day)
		{
			temp.year=year-p.year;
			temp.month=month-p.month;
			temp.day=day-p.day;
		}
		else if(month<=p.month||day<p.day)
		    {
			temp.year=(year-1)-p.year;
			if(month<p.month)
			temp.month=month+(12-p.month);
			else
			temp.month=month+(12-1-p.month);
		   if(month<p.month)
		    temp.day=30-((30-day)-p.day);
		else
			temp.day=(30-p.day)+(p.day-day);}
	return temp;	
		}	
};
void age::in(int y,int m,int d)
{
	year=y;
	month=m;
	day=d;
this->setAge(year,month,day);	
}
void age::setAge(int y,int m,int d)
{
	this->setYear(y);
	this->setMonth(m);
	this->setDate(d);
}
void age::setYear(int y)
{
	year=((y>=1900&&y<=2023)?y:1900);
}
void age::setMonth(int m)
{
	month=((m>0&&m<=12)?m:0);
}
void age::setDate(int d)
{
	day=((d>0&&d<=limit[this->getMonth()])?d:0);
	if(this->getMonth()==2&&this->getYear()%4==0)
	day=((d>0&&d<=29)?d:0);
}
int age::getYear()
{return year;
}
int age::getMonth()
{return month;
}
int age::getDate()
{return day;
}
void age::printDob()
{
	cout<<"date of birth :"<<this->getDate()<<':'<<this->getMonth()<<':'<<this->getYear()<<endl;
	
}
void age::printDate()
{
		cout<<"date is :"<<this->getDate()<<':'<<this->getMonth()<<':'<<this->getYear()<<endl;
}
void age::printAge()
{
	cout<<"age is:"<<this->getYear()<<"yrs"<<this->getMonth()<<"months"<<this->getDate()<<"days"<<endl;
}
class data
{
	private:
		string ccode;
		string cname;
		float marks,gpa;
	public:
		data();
		data(string,string,float);
		void setCcode(string);
		void setCname(string);
		void setMarks(float);
		void setGpa(float);
		string getCcode();
		string getCname();
		float getMarks();
		float getGpa();
		void getData();
};
data::data()
{
}
data::data(string cc,string cn,float m)
{
	this->setCcode(cc);
	this->setCname(cn);
	this->setMarks(m);
	this->setGpa(m);
}
void data :: setCcode(string cc)
{
	ccode=cc;
}
void data:: setCname(string cn)
{
	cname=cn;
}
void data:: setMarks(float m)
{
	marks=((m<=100&&m>=0)?m:-1);
}
void data:: setGpa(float m)
{
	if(m<=100&&m>=85)
	gpa=4.00;
	else if(m<85&&m>=80)
	gpa=3.70;
	else if(m<80&&m>=75)
	gpa=3.30;
	else if(m<75&&m>=70)
	gpa=3.00;
	else if(m<70&&m>=65)
	gpa=2.70;
	else if(m<65&&m>=61)
	gpa=2.30;
	else if(m<=60&&m>=58)
	gpa=2.00;
	else if(m<=58&&m>=55)
	gpa=1.70;
	else if(m<=55&&m>=50)
	gpa=1.00;
	else if(m<50)
	gpa=0.00;
	
}
string data:: getCcode()
{
	return ccode;
}
string data:: getCname()
{
return cname; 
}
		
float data:: getMarks()
{
	return marks;
}
float data::getGpa()
{return gpa;
}
void data:: getData()
{
	cout<<"cCode:"<<this->getCcode()<<endl<<"cName:"<<this->getCname()<<endl<<"marks:"<<this->getMarks()<<endl<<"gpa:"<<this->getGpa()<<endl;
}
class list
{
	private:
		data *ptr;
		int current ,size ,length;
	public:	
		list();
		list(int);
		void add(data );
		void showList();
		
};
list::list()
{
	size=0;
	length=0;
	current=0;
	ptr=NULL;
}
list::list(int l) 
{	
if (length>0)
	{
	length=l;
	size=0;
	current=0;
	ptr=new data[length];
	}
else 
cout<<"enter valid lenght"<<endl;	
}
void list::add(data d)
{
	if(size<=length)
	{
		ptr[current]=d;
		size++;
		current++;
	}
	else 
	cout<<"list is already full "<<endl;
}
void list ::showList()
{
	if(size==0)
cout<< "list is empty"<<endl;
else 
{
	for(int i=0;i<size;i++)
	ptr[i].getData();
	}
}
class student
{
	private:
		string st_name,st_id;
		list sm1,sm2,sm3;
		age a;
	public:
		student(string,string,list,list,list,age);
		void resultCard();
		
};
student::student(string name,string id,list s1,list s2,list s3,age a1 )
{
	st_name=name;
	st_id=id;
	sm1=s1;
	sm2=s2;
	sm3=s3;
	a=a1;
}
void student::resultCard()
{   

    
	cout<<"\tUNIVERSITY OF PUNJAB"<<endl<<"\tresult card of 1st semester"<<endl<<"student name:"<<st_name<<endl<<"student_id:"<<st_id<<endl;
	a.printAge();
	sm1.showList();
	cout<<"\tUNIVERSITY OF PUNJAB"<<endl<<"\tresult card of 2nd semester"<<endl<<"student name:"<<st_name<<endl<<"student_id:"<<st_id<<endl;
	a.printAge();
	sm2.showList();
	cout<<"\tUNIVERSITY OF PUNJAB"<<endl<<"\tresult card of 3rd semester"<<endl<<"student name:"<<st_name<<endl<<"student_id:"<<st_id<<endl;
	a.printAge();
	sm1.showList();
}
int main()
{
	age a1;
	a1.in(2023,9,17);
	age a2;
	a2.in(2001,4,2);
	age a3;
	a3=a1-a2;
	data d11("ds-101","data structure",85);
	data d12("os_121","operating systems",75);
	data d13("sm_134","simulation and modeling",68);
	data d14("la_456","linear algebra",76);
	data d15("se_328","software engineering",90);
	list l1(5);
	l1.add(d11);
	l1.add(d12);
	l1.add(d13);
	l1.add(d14);
	l1.add(d15);
	
	data d21("ds-101","data structure",85);
	data d22("os_121","operating systems",75);
	data d23("sm_134","simulation and modeling",68);
	data d24("la_456","linear algebra",76);
	data d25("se_328","software engineering",90);
    list l2(5);
	l2.add(d21);
	l2.add(d22);
	l2.add(d23);
	l2.add(d24);
	l2.add(d25);
	
	data d31("ds-101","data structure",85);
	data d32("os_121","operating systems",75);
	data d33("sm_134","simulation and modeling",68);
	data d34("la_456","linear algebra",76);
	data d35("se_328","software engineering",90);
    list l3(5);
	l3.add(d31);
	l3.add(d32);
	l3.add(d33);
	l3.add(d34);
	l3.add(d35);
	
    student s1("asjad babar","bit_21027",l1,l2,l3,a3);
	s1.resultCard();
	
	return 0;
	}