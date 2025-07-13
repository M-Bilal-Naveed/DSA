#include<iostream>
#define vowel "a  e  i  o  u"   //define constant for Q.14

using namespace std;

int main()
{
	//Practice Sets
	//exercise 
	//Question#1.
	cout<<"Q1."<<endl;
	cout<<"'bb'   \t is not character constant because it contain 2 letters."; //is not character constant because it contain 2 letters.
	cout<<endl;
	cout<<endl;
	
	//Question#2
	cout<<"Q2."<<endl;
	cout<<"-31.80\t because it is floating value.";//because it is floating value.
	cout<<endl;
	cout<<endl;

	//Question#3
	cout<<"Q3."<<endl;
	cout<<"'a'  \t because it is character constant.";//because it is character constant.
	cout<<endl;
	cout<<endl;
	cout<<endl;
	//Question#4
	cout<<"Q4."<<endl;
	cout<<"15  \t integer constant"<<endl;       // integer constant
	cout<<"-14.24\t float constant"<<endl;  // float constant
	cout<<"'b'  \t character constant"<<endl;//character constant
	cout<<"''1''" <<"  \t string constant"<<endl;//string constant
	cout<<"''16'' \t string constant"<<endl;//string constant
	cout<<endl;
	cout<<endl;
	//Question#5
	cout<<"Q5."<<endl;
	cout<<"4A \t variable must be start with letter"<<endl; //4A is not according to rule. variable must be start with letter or underscore
	cout<<"if \t it is a datatype can't use as variable name"<<endl;//if is a datatype so it can't use as variable name
	cout<<"tax-rate \t spaces & slash (-) can't use in variable name"<<endl; //tax-rate  spaces & slash (-) can't use as a variable name
	cout<<endl;
	cout<<endl;
	//Question#6
	cout<<"Q6."<<endl;
	cout<<"main() function pranthesis was missing"<<endl; //main() function pranthesis was missing
	cout<<endl;
	cout<<endl;	
	//Question#7
	cout<<"Q7."<<endl;
	cout<<"cout will be use instead of cin"<<endl;  //cout will be use instead of cin
	cout<<endl;
	cout<<endl;	
	//Question#8
	cout<<"Q8."<<endl;
	cout<<"double quotes will be used ''''"<<endl;  //double quotes will be used ""
	cout<<endl;
	cout<<endl;	
	//Question#9
	cout<<"Q9."<<endl;
	cout<<"int a;"<<endl;      //integer variable
	cout<<"float b;"<<endl;    //integer variable
	cout<<"char c;"<<endl;     //integer variable
	cout<<endl;
	cout<<endl;	
	//Question#10
	cout<<"Q10."<<endl;
	cout<<"int a;"<<endl;      // variable will be writen after datatype
	cout<<"float b;"<<endl;    //variable will be writen after datatype
	cout<<"char c;"<<endl;     //variable will be writen after datatype
	cout<<"double d;"<<endl;     //variable will be writen after datatype 
	cout<<"cout <<d;"<<endl;   //variable have to be display
	cout<<endl;
	cout<<endl;	
	//Question#11
	cout<<"Q11."<<endl;
	cout<<"int a;"<<endl;      // variable will be writen after datatype
	cout<<"char b,c;"<<endl;    //variable will be writen after datatype with no duplicate variable
	cout<<"double d;"<<endl;     //variable will be writen after datatype
	cout<<"float e,f;"<<endl;     //variable will be writen after datatype 
	cout<<"cout<<a;"<<endl;    // output will display value using cout<<variable
	cout<<"cout<<b<<c<<d;"<<endl;  //output will display value using cout<<variable
	cout<<"cout<<e<<f;"<<endl;     //output will display value using cout<<variable
	cout<<endl;	
	//Question#12
	cout<<"Q12."<<endl;
	cout<< "******"<<endl;   //display asterisks in a rectangular pattern
	cout<< "******"<<endl;
	cout<< "******"<<endl;
	cout<< "******"<<endl;
	cout<<endl;	
	cout<<endl;
	//Question#13
	cout<<"Q13."<<endl;
	cout<< "*"<<endl;   //display asterisks
	cout<< "**"<<endl; // in a well define pattern
	cout<< "***"<<endl;
	cout<< "****"<<endl;
	cout<<endl;
	cout<<endl;	
	//Question#14
	cout<<"Q14."<<endl;
	const int a=0,b=2,c=4,d=6,e=8;  //memory constants
	cout<<vowel<<endl;  //defined constant
	cout<<a<<"  "<<b<<"  "<<c<<"  "<<d<<"  "<<e<<" "<<endl; //display even no. using memory constant
	cout<<1<<"  "<<3<<"  "<<5<<"  "<<7<<"  "<<9<<endl;  // literal constants
	cout<<endl;
	cout<<endl;	
	//Question#15
	cout<<"Q15."<<endl;
	int n1=1,n2=10,n3=100,n4=1000,n5=10000;  // integer variable declaration
	cout<<n1<<"  "<<n2<<"  "<<n3<<"  "<<n4<<"  "<<n5<<endl; // output with space and in single line
	cout<<endl;
	cout<<endl;	
	//Question#16
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
	
	
	
	
	return 0;
}
