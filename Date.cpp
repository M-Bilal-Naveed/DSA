#include<iostream>
#include<string.h>
using namespace std;
int limit[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
char *name[13]={"Null","January","February","March","April","May","June","July","August","September","October","November","December"};
class date
{
	private:
		int day;
		int month;
		int year;
	public:
		date(int ,int ,int );
		void setDate(int ,int ,int);
		void setDay(int);
		void setMonth(int);
		void setYear(int);
		int getDay();
		int getMonth();
		int getYear();
		void printDate();
		void printAge();
		void operator -=(date i)
        {
        	if(day>i.day)
        	day=day-i.day;
        	else 
        	day=i.day-day;
			if(month>i.month)
			month=month-i.month; 
			else
			month=i.month-month;
			year=i.year-year;  
		}
};
date::date(int d,int m,int y)
{
	this->setDate(d,m,y);
}
void date::setDate(int d,int m,int y)
{
	this->setDay(d);
	this->setMonth(m);
	this->setYear(y);
}
void date::setDay(int d){
	day=((d>=1&&d<=limit[this->getMonth()])?d:1);
	if(this->getMonth()==2&&this->getYear()%4==0);
	day=((d>=1&&d<=29)?d:1);
}
void date::setMonth(int m){
		month=((m>=1&&m<=12)?m:1);
}
void date::setYear(int y){
		year=((y>=1990&&y<=2023)?y:1);
}

int date::getDay()
{
	return day;
}
int date::getMonth()
{
	return month;
}
int date::getYear()
{
	return year;
}

void date::printDate()
{
	cout<<"Date-of-Birth : "<<this->getDay()<<"-"<<name[this->month]<<"-"<<this->getYear()<<endl;
} 
void date::printAge()
{
	cout<<"Current   Age : "<<this->getYear()<<"-"<<this->month<<"-"<<this->getDay()<<endl;
} 
/*int main()
{
	int a,b,c;
	cout<<"Enter Date of Birth:"<<endl;
	cin>>a>>b>>c;
	date i(a,b,c);
	cout<<endl;
	i.printDate();
}	
*/

