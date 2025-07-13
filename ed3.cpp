#include<iostream>
#include<windows.h>
#include<stdio.h>
COORD coord={0,0}; 
void gotoxy(int x,int y)
{
 coord.X=x;
 coord.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

using namespace std;
int main()
{	int tv,vcr,rc,cd,tr;
	gotoxy(8,1);
	cout << "Welcome! To Public Store."<<endl<<endl;
	cout<<"How many TVs were sold?   ";
	cin>>tv;
	cout<<"How many VCR were sold?  ";
	cin>>vcr;
	cout<<"How many REMOTE CONTROLLERS were sold? ";
	cin>>rc;
	cout<<"How many CD PLAYER were sold?    ";
	cin>>cd;
	cout<<"How many TAPE RECORDER were sold? ";
	cin>>tr;
	cout<<endl;
	cout<<"QTY\tDESCRIPTION\tUNIT PRICE\tTotalPrice"<<endl;
	cout<<"---\t-----------\t---------- \t---------"<<endl;
	//for(int i=0;i<qn;i++)
		int qty;
		int tvp=400;
		int vcrp=220;
		int rcp=35;
		int cdp=300;
		int trp=150;
		int tp;
		int d=7;
		//gotoxy(6,12);
		int st,svcr,src,scd,str;
		st=tv*tvp;
		cout<<tv<<"\tTV\t\t"<<tvp<<"\t\t"<<st<<endl; 
		svcr=vcr*vcrp;
		cout<<vcr<<"\tVCR\t\t"<<vcrp<<"\t\t"<<svcr<<endl;
		src=rc*rcp;
		cout<<rc<<"\tREMOTE CTRLR\t"<<rcp<<"\t\t"<<src<<endl;
		scd=cd*cdp;
		cout<<cd<<"\tCD PLAYER\t"<<cdp<<"\t\t"<<scd<<endl;
		str=tr*trp;
		cout<<tr<<"\tTAPE RECORDER\t"<<trp<<"\t\t"<<str<<endl;
		int sum;
		gotoxy(40,16);
		cout<<"----------"<<endl;
		sum=st+svcr+src+scd+str;
		cout<<"\t\t\tSUBTOTAL\t"<<sum<<endl;
		float tax;
		float per=8.25;
		int(tax=sum/100*per);
		cout<<"\t\t\tTAX\t\t"<<int(tax)<<endl;
		int total;
		total=sum+tax;
		cout<<"\t\t\tTOTAL\t\t"<<total<<endl;		
}
