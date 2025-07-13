#include<iostream>
#include<string.h>
#include "date.cpp"
#include "CourseList.cpp"
using namespace std;
class student
{
	private:
		string id;
		string name;
	public:
		student();
		void setId(string);
		void setName(string);
		void printData();
		string getId();
		string getName();	
};
student::student()
{
	id="Null";
	name="Null";
}
void student::setId(string sid)
{
	this->id=sid;
}
void student::setName(string sname)
{
	this->name=sname;
}
void student::printData()
{
	cout<<" STUDENT   ID : "<<this->getId()<<"  "<<endl;
	cout<<" STUDENT Name : "<<this->getName()<<"  "<<endl;
}
string student::getId()
{
	return id;
}
string student::getName()
{
	return name;
}
int main()
{
	float gradeS1,gradeS2,gradeS3,gradeS4;
	int chrS1,chrS2,chrS3,chrS4;
	student s1;
	date i(20,10,2003);
	date j(18,06,2023);
	s1.setId("BIT21244");
	s1.setName("Muhammad Rehman");
	//******************Semester 1**************************
	data s1d1,s1d2,s1d3,s1d4,s1d5,s1d6;
	s1d1.setData("GE-161","Intro. to infor. & Comm. Technology",75,3);
	s1d2.setData("MS-152 ","Probability     and     Statistics",68,3);
	s1d3.setData("GE-162","English composition & Comprehension",84,3);
	s1d4.setData("CC-111 ","Discrete                 Structure",88,3);
	s1d5.setData("MS-151 ","Applied                    Physics",52,3);
    s1d6.setData("HQ-001 ","Quranic                Translation",82,0);
	gradeS1=s1d1.getGradepoint()+s1d2.getGradepoint()+s1d3.getGradepoint()+s1d4.getGradepoint()+s1d5.getGradepoint()+s1d6.getGradepoint();
	chrS1=s1d1.getCrdHr()+s1d2.getCrdHr()+s1d3.getCrdHr()+s1d4.getCrdHr()+s1d5.getCrdHr()+s1d6.getCrdHr();
		list lS1(6);
		lS1.add(s1d1);
		lS1.add(s1d2);
		lS1.add(s1d3);
		lS1.add(s1d4);
		lS1.add(s1d5);
		lS1.add(s1d6);	
		//******************Semester 2**************************	
	data s2d1,s2d2,s2d3,s2d4,s2d5,s2d6;
	s2d1.setData("CC-212  ","Programming       Fundamentls",88,4);
	s2d2.setData("CC-215  ","Database               System",77,4);
	s2d3.setData("GE-165  ","Pakistan              Studies",80,3);
	s2d4.setData("GE-164","Communication and Presentation Skills",75,3);
	s2d5.setData("UE-171  ","Introduction   to   Economics",80,3);
	s2d6.setData("QT-002  ","Quran             Translation",89,1);
	gradeS2=s2d1.getGradepoint()+s2d2.getGradepoint()+s2d3.getGradepoint()+s2d4.getGradepoint()+s2d5.getGradepoint()+s2d6.getGradepoint();
	chrS2=s2d1.getCrdHr()+s2d2.getCrdHr()+s2d3.getCrdHr()+s2d4.getCrdHr()+s2d5.getCrdHr()+s2d6.getCrdHr();
	list lS2(6);
	lS2.add(s2d1);
	lS2.add(s2d2);
	lS2.add(s2d3);
	lS2.add(s2d4);
	lS2.add(s2d5);
	lS2.add(s2d6);
	//******************Semester 3**************************
	data s3d1,s3d2,s3d3,s3d4,s3d5,s3d6;
	s3d1.setData("CC-211 ","  Object   Oriented    Programming",75,4);
	s3d2.setData("UE-273 ","  Introduction    to     Sociology",68,3);
	s3d3.setData("MS-152 ","  Calculus and Analytical Geometry",84,3);
	s3d4.setData("EI-231 ","Computer Organization and Assembly",88,3);
	s3d5.setData("CC-214 ","  Computer                Networks",52,3);
    s3d6.setData("HQ-003 ","  Quran                Translation",80,2);
	gradeS3=s3d1.getGradepoint()+s3d2.getGradepoint()+s3d3.getGradepoint()+s3d4.getGradepoint()+s3d5.getGradepoint()+s3d6.getGradepoint();
	chrS3=s3d1.getCrdHr()+s3d2.getCrdHr()+s3d3.getCrdHr()+s3d4.getCrdHr()+s3d5.getCrdHr()+s3d6.getCrdHr();
		list lS3(6);
		lS3.add(s3d1);
		lS3.add(s3d2);
		lS3.add(s3d3);
		lS3.add(s3d4);
		lS3.add(s3d5);
		lS3.add(s3d6);	
	//******************Semester 4**************************
	data s4d1,s4d2,s4d3,s4d4,s4d5,s4d6;
	s4d1.setData("CC-213-3","Data Structure and Algorithms",75,4);
	s4d2.setData("CC-212-3","Software          Enginnering",68,3);
	s4d3.setData("CC-311-3","Operating              System",84,4);
	s4d4.setData("SI-241-3","Modeling    and    Simulation",88,3);
	s4d5.setData("MS-252-3","Linear                Algebra",52,3);
    s4d6.setData("HQ-004___","Quran            Translation",80,2);
	gradeS4=s4d1.getGradepoint()+s4d2.getGradepoint()+s4d3.getGradepoint()+s4d4.getGradepoint()+s4d5.getGradepoint()+s4d6.getGradepoint();
	chrS4=s4d1.getCrdHr()+s4d2.getCrdHr()+s4d3.getCrdHr()+s4d4.getCrdHr()+s4d5.getCrdHr()+s4d6.getCrdHr();
		list lS4(6);
		lS4.add(s4d1);
		lS4.add(s4d2);
		lS4.add(s4d3);
		lS4.add(s4d4);
		lS4.add(s4d5);
		lS4.add(s4d6);	
		//*************print data ****************
	    s1.printData();
	    i.printDate();
	    i-=j;
	    i.printAge();
	    cout<<"\n\t*****************************************************************************\n"<<endl;
	    cout<<"\t\t\t\t 1st Semester\n"<<endl;
		cout<<"\n\t*****************************************************************************\n"<<endl;
		cout<<"\tCourse code\t\tSubject Name\t\t Marks\tCr.Hr\tGrade Point\n"<<endl;
        lS1.printList();
		s1d1.calGPA(gradeS1,chrS1);
        cout<<"\tGPA of 1st Semester : "<<s1d1.getGPA();

        cout<<"\n\t*****************************************************************************\n"<<endl;
	    cout<<"\t\t\t\t2nd Semester\n"<<endl;
		cout<<"\n\t*****************************************************************************\n"<<endl;
		cout<<"\tCourse code\t\tSubject Name\t\t Marks\tCr.Hr\tGrade Point\n"<<endl;
        lS2.printList();
		s2d1.calGPA(gradeS1+gradeS2,chrS1+chrS2);
		cout<<"\tCGPA of 2nd Semester : "<<s2d1.getGPA();
        
        
		cout<<"\n\t*****************************************************************************\n"<<endl;
	    cout<<"\t\t\t\t3rd Semester\n"<<endl;
	    cout<<"\n\t*****************************************************************************\n"<<endl;
	    cout<<"\tCourse code\t\tSubject Name\t\t Marks\tCr.Hr\tGrade Point\n"<<endl;
		lS3.printList();
		s3d1.calGPA(gradeS1+gradeS2+gradeS3,chrS1+chrS2+chrS3);
		cout<<"\tCGPA of 3rd Semester : "<<s3d1.getGPA();
		
		cout<<"\n\t*****************************************************************************\n"<<endl;
	    cout<<"\t\t\t\t4th Semester\n"<<endl;
	    cout<<"\n\t*****************************************************************************\n"<<endl;
	    cout<<"\tCourse code\t\tSubject Name\t\t Marks\tCr.Hr\tGrade Point\n"<<endl;
		lS4.printList();
		s4d1.calGPA(gradeS1+gradeS2+gradeS3+gradeS4,chrS1+chrS2+chrS3+chrS4);
		cout<<"\tCGPA of 4th Semester : "<<s4d1.getGPA();
		
}

