#include<iostream>
using namespace std;
int main()
{
	//Practice Sets 3-11
	//exercise 
	//Question#1.
	cout<<"Q1."<<endl;
	cout<<"x*y   \t is not postfix expression because it is multiplication expression."; //is not postfix expression because it is multiplication expression.
	cout<<endl;
	cout<<"----------------------------"<<endl;
	
	//Question#2
	cout<<"Q2."<<endl;
	cout<<"x=4\t because it is assignment value.";//because it is assignment value.
	cout<<endl;
	cout<<"----------------------------"<<endl;

	//Question#3
	cout<<"Q3."<<endl;
	cout<<"x+=6'  \t because it is not a binary expression.";//because it is not a binary operation x=x+6.
	cout<<endl;
	cout<<"----------------------------"<<endl;
	
	//Question#4
	cout<<"Q4."<<endl;
	cout<<"x=8=3  \t is not a valid assignment expression"<<endl;       // because it is assigning double value to a single variable
	cout<<endl;
	cout<<"----------------------------"<<endl;
	
	//Question#5
	cout<<"Q5."<<endl;
	int ax=4,bx=4,cx=4,dx=4,ex=4;
	ax=2;
	cout<<"x=2 evaluation to "<<ax<<endl;
	
	bx+=4;
	cout<<"x+=4 evaluation to "<<bx<<endl;

	cx+=cx+3;
	cout<<"x+=x+3 evaluation to "<<cx<<endl;

	dx*=2;
	cout<<"x*=2 evaluation to "<<dx<<endl;
			
	ex/=ex+2;
	cout<<"x/=x+2 evaluation to "<<ex<<endl;
	cout<<endl;
	cout<<"----------------------------"<<endl;
	
	//Question#6
	cout<<"Q6."<<endl;
	int xa=3,xb=3,xc=3,xd=3,xe=3,ya=5,yb=5,yc=5,yd=5,ye=5;	

	cout<<"x++ +y evaluation to "<<xa++ +ya<<endl;

	cout<<"++x evaluation to "<<++xb<<endl;

	cout<<"x++ + y++ evaluation to "<<xc++ + yc++<<endl;

	cout<<"++x+2 evaluation to "<<++xd+2<<endl;

	cout<<"x-- - y-- evaluation to "<<xe-- - ye--<<endl;
	cout<<endl;
	cout<<"----------------------------"<<endl;	
	
	//Question#7
	cout<<"Q7."<<endl;
	cout<<"24-6*2 evaluation to "<<24-6*2<<endl;
	cout<<"-15*2+3 evaluation to "<<-15*2+3<<endl;
	cout<<"72/5 evaluation to "<<72/5<<endl;
	cout<<"72%5 evaluation to "<<72%5<<endl;
	cout<<"5*2/6+15%4 evaluation to "<<5*2/6+15%4<<endl;
	cout<<endl;
	cout<<"----------------------------"<<endl;	
	
	//Question#8
	cout<<"Q8."<<endl;
	cout<<"6.2+5.1*3.2 evaluation to "<<6.2+5.1*3.2<<endl;
	cout<<"2.0+3.0/1.2 evaluation to "<<2.0+3.0/1.2<<endl;
	cout<<"4.0*(3.0+2.0/6.0) evaluation to "<<4.0*(3.0+2.0/6.0)<<endl;
	cout<<"6.0/(2.0+4.0*1.2) evaluation to "<<6.0/(2.0+4.0*1.2)<<endl; 
	cout<<"2.7+3.2-5.3*1.1 evaluation to "<<2.7+3.2-5.3*1.1<<endl;
	cout<<endl;
	cout<<"----------------------------"<<endl;	

	//Question#9
	int x1=2,x2=2,x3=2,x4=2,x5=2,y1=3,y2=3,y3=3,y4=3,y5=3,z=1;
	cout<<"Q9."<<endl;
	cout<<"x++ + y++ evaluation to "<<x1++ + y1++<<endl;
	cout<<"++x - --z evaluation to "<<++x2 - --z<<endl;
	cout<<"--x + y++ evaluation to "<<--x3 + y3++<<endl;
	cout<<"x-- +x-- - y-- evaluation to "<<x4-- +x4-- - y4--<<endl;
	cout<<"x+y - --x+x++- --y evaluation to "<<x5+y5 - --x5+x5++- --y5<<endl;
	cout<<endl;
	cout<<"----------------------------"<<endl;	

	//Question#10
	cout<<"Q10."<<endl;
	cout<<"x+2/6+y evaluation to "<<x1+2/6+y1<<endl;
	cout<<"y-3*z+2 evaluation to "<<y2-3*z+2<<endl;
	cout<<"z-(x+z)%2+4 evaluation to "<<z-(x3+z)%2+4<<endl;
	cout<<"x-2*(3+z)+y evaluation to "<<x4-2*(3+z)+y4<<endl;
	cout<<"y++ +z-- + x++ evaluation to "<<y5++ +z-- + x5++<<endl;
	cout<<endl;
	cout<<"----------------------------"<<endl;	

	//Question#11
	cout<<"Q11."<<endl;
	int X=2945;
	cout<<"x%10 evaluation to "<<X%10<<endl;
	cout<<"x/10 evaluation to "<<X/10<<endl;
	cout<<"(x/10)%10 evaluation to "<<(X/10)%10<<endl;
	cout<<"x/100 evaluation to "<<X/100<<endl;
	cout<<"(x/100)%10 evaluation to "<<(X/100)%10<<endl;
	cout<<endl;	
	cout<<"----------------------------"<<endl;
	
	//Question#12
	cout<<"Q12."<<endl;
	int n1,n2,quo,rem;
	cout<< "Enter two numbers: ";
	cin>>n1>>n2;
	quo=n1/n2;
	rem=n1%n2;
	cout<<"Quotient of "<<n1<<"/"<<n2<<" is "<<quo<<endl;
	cout<<"Reminder of "<<n1<<"%"<<n2<<" is "<<rem<<endl;
	cout<<endl;	
	cout<<"----------------------------"<<endl;
	
	//Question#13
	cout<<"Q13."<<endl;
	int rmst;
	cout<< "Enter Number To Extract Right Most Digit: ";
	cin>>rmst;
	cout<< "Right Most Digit Is: "<<rmst%10<<endl;
	cout<<endl;
	cout<<"----------------------------"<<endl;
		
	//Question#14
	cout<<"Q14."<<endl;
	int srmst,sonly;
	cout<< "Enter Number To Extract Right Most Digit: ";
	cin>>srmst;
	sonly=srmst%100;
	cout<< "Right Most Digit Is: "<<sonly<<endl;
	cout<<"Display only Second rightmost digit: "<<sonly/10;
	cout<<endl;
	cout<<"----------------------------"<<endl;
		
	
	//Question#15
	cout<<"Q15."<<endl;
	int area,len,widt,pri;
	cout<<"Enter Length & Width Of Area & Perimeter of Triangle: ";
	cin>>len>>widt;
	area=(len*widt)/2;
	cout<<"Area of Triangle Is: "<<area<<endl;
	pri=2+area;
	cout<<"perimeter of Triangle is: "<<pri<<endl;
	cout<<endl;
		
/*	//Question#16
	cout<<"Q16."<<endl;
	cout<<"  H      H    M          M    ZZZZZZZZZ"<<endl;
	cout<<"  H      H    MM         M          ZZ"<<endl;    //to display figlet text
	cout<<"  H      H    MMM      MMM        ZZ"<<endl;
	cout<<"  HHHHHHHH    M  M    M  M       ZZ   "<<endl;
	cout<<"  H      H    M   M  M   M     ZZ     "<<endl;
	cout<<"  H      H    M    MM    M    ZZ      Z"<<endl;
	cout<<"  H      H    M          M   ZZZZZZZZZZ"<<endl;
	cout<<endl;
	cout<<endl;
	//Question#17
	cout<<"Q17."<<endl;
	int i;            //interger  var
	char ch;      //character var
	float fl;      //floating-point var
	cout<<"Enter Character: ";  
	cin>>ch;                        //console input for char
	cout<<"Enter Integer: ";
	cin>>i;                        //console input for int
	cout<<"Enter Floating-point: ";
	cin>>fl;                    ////console input for float
	cout<<"Output is:"<<endl;
	cout<<ch<<endl<<i<<endl<<fl<<endl;     //output for all type of datatypes
	cout<<endl;
	cout<<endl;
	
	//Question#18
	cout<<"Q18."<<endl;
	int no1,no2,no3;          // three int var
	cout<<"Enter three Numbers:"<<endl;          
	cin>>no1>>no2>>no3;                          //take input in one line
	cout<<"Your Numbers in forward order:"<<endl;  
	cout<<no1<<endl<<no2<<endl<<no3<<endl;         // display output in forward sequence
	cout<<"Your Numbers in reverse order:"<<endl;
	cout<<no3<<endl<<no2<<endl<<no1<<endl;        // display output in reverse sequence
	cout<<endl;
	cout<<endl;	
	//Question#19
	cout<<"Q19."<<endl;
	int j,k,l,m,n,o,p,q,r,s;   // ten int var
	cout<<"Enter ten Numbers:"<<endl;
	cin>>j>>k>>l>>m>>n>>o>>p>>q>>r>>s; 	//take input in one line
	cout<<endl;
	cout<<j<<"  "<<s<<endl;     // output will be sequence of 1st & last input
	cout<<k<<"  "<<r<<endl;
	cout<<l<<"  "<<q<<endl;
	cout<<m<<"  "<<p<<endl;
	cout<<n<<"  "<<o<<endl;
	cout<<endl;
	cout<<endl;
	
	//Question#20
	cout<<"Q20."<<endl;
	int j1,k2,l3,m4,nu5,o6,p7,q8,r9;
	cout<<"Enter nine Numbers:"<<endl;
	cin>>j1>>k2>>l3>>m4>>nu5>>o6>>p7>>q8>>r9; 	//take input in one line
	cout<<endl;
	cout<<j1<<", "<<k2<<", "<<l3<<endl;   //display 3 values in one line with qoma(,)
	cout<<m4<<", "<<nu5<<", "<<o6<<endl;
	cout<<p7<<", "<<q8<<", "<<r9<<endl;
	cout<<endl;
	cout<<endl;
// end of all exercise questions
	
	*/
	
	
	return 0;
}

