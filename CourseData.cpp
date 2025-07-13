#include<iostream>
#include<string.h>
using namespace std;
class data
{
	private:
		string cCode;
		string cName;
		float marks;
		int crdhr;
		float gpa;
	public:
		data();
		setData(string,string,float,int);
		void setCode(string);
		void setName(string);
		void setMarks(float);
		void setCrdHr(int);
		void calGPA(float mm,int ch);
        string getCode();
		string getName();
		float getMarks();
		int getCrdHr();
		float getGradepoint();
		float getGPA();
		void printinformation();	
};
data::data()
{
	    cCode="00";
		cName="00";
		marks=0;
		crdhr=0;
		gpa=0.0;
}
data::setData(string c,string n,float m,int cr)
{		
		cCode=c;
		cName=n;
		marks=m;
		setMarks(m);
		crdhr=cr;
		gpa=0.0;
}
void data::setCode(string c)
{
	cCode=c;
}
void data::setName(string n)
{
	cName=n;
}
void data::setMarks(float m)
{
   marks=m;
}
float data::getGradepoint()
{
	if(marks>=85&&marks<=100)
	return 4.00*crdhr;
	else if(marks>=80&&marks<=84)
	return 3.70*crdhr;
	else if(marks>=75&&marks<=79)
	return 3.30*crdhr;
	else if(marks>=70&&marks<=74)
	return 3.00*crdhr;
	else if(marks>=65&&marks<=69)
	return 2.70*crdhr;
	else if(marks>=61&&marks<=64)
	return 2.30*crdhr;
	else if(marks>=58&&marks<=60)
	return 2.00*crdhr;
	else if(marks>=55&&marks<=57)
	return 1.70*crdhr;
	else if(marks>=50&&marks<=54)
	return 1.00*crdhr;
	else
	return 0.00*crdhr;
}
void data::setCrdHr(int cr)
{
	crdhr=cr;
}
string data::getCode()
{
	return cCode;
}
string data::getName()
{
	return cName;
}
float data::getMarks()
{
	return marks;
}
int data::getCrdHr()
{
	return crdhr;
}
void data::printinformation()
{
	cout<<this->getCode()<<"\t"<<this->cName<<"  \t  "<<this->getMarks()<<"  \t  "<<this->getCrdHr()<<"  \t  "<<this->getGradepoint();
	cout<<endl;
}
void data::calGPA(float mm,int ch)
{
	gpa=mm/ch;
}
float data::getGPA()
{
	return gpa;
}
/*int main()
{
	float grade;
	int crhr;
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
    grade=(d1.getMarks()+d2.getMarks()+d3.getMarks()+d4.getMarks()+d5.getMarks()+d6.getMarks());
    crhr=(d1.getCrdHr()+d2.getCrdHr()+d3.getCrdHr()+d4.getCrdHr()+d5.getCrdHr()+d6.getCrdHr());
    cout<<"Cource code \t\t Subject \t\t Marks \t Cr.hr"<<endl;
    d1.printinformation();
    d2.printinformation();
    d3.printinformation();
    d4.printinformation();
    d5.printinformation();
    d6.printinformation();
    cout<<endl;
    d1.calGPA(grade,crhr);
    cout<<"GPA="<<d1.getGPA();
}	
*/

