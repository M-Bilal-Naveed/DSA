#include<iostream>
using namespace std;
class clock
{
	private :
		int hr,min,sec;
	public:
		clock(int,int,int);
		void setHr(int);
		void setMin(int);
		void setSec(int);
		int getHr();
		int getMin();
		int getSec();
		void getTime();
		void operator ==( clock p)
		{
			if (hr==p.hr&&min==p.min&&sec==p.sec)
			cout<<"both r equal"<<endl;
			else 
			cout<<"not equal"<<endl;
		}
		void increment_hr()
		{
		
		if(hr<23)
		hr++;
		else 
		hr=0;	
		}
		void increment_min()
		{
			if(min==59)
			{min=0;
			hr++;
			}
			else
			min++;
		}
		void increment_sec()
		{
			if(sec==59)
			{sec=0;
			min++;
			}
			else 
			sec++;
		}
};
clock::clock(int h,int m,int s)
{
	this->setHr(h);
	this->setMin(m);
	this->setSec(s);
}
void clock::setHr(int h)
{
	hr=((h>=0&&h<24)?h:-1);
}
void clock::setMin(int m)
{
	min=((m>=0&&m<60)?m:-1);
}
void clock::setSec(int s)
{
	sec=((s>=0&&s<60)?s:-1);
}
int clock::getHr()
{
	return hr;
}
int clock::getMin()
{
	return min;
}
int clock::getSec()
{
	return sec;
}
void clock::getTime()
{
	cout<<this->getHr()<<':'<<this->getMin()<<":"<<this->getSec();
	if(hr<12)
	cout<<"am"<<endl;
	else
	cout<<"pm"<<endl;
}
int main()
{
	clock c1(11,59,13);
	c1.getTime();
	clock c2(11,11,13);
	c1==c2;
	c1.increment_min();
	c1.getTime();
	return 0;
}