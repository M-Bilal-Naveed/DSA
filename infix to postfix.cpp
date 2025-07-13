#include<iostream>
#include<string>
#include<math.h>
using namespace std;
template <class t>
class stack
{	
		private:
				int top;
				t arr[10];
		public:
				stack();
				void push(t);
				t pop();
				t topElement();
				bool IsEmpty();
};
template <class t>
stack<t>::stack()
{
		top=-1;
}
template <class t>
void stack<t>::push(t val)
{
		arr[++top]=val;
}
template <class t>
t stack<t>::topElement()
{
		return arr[top];
}
template <class t>
t stack<t>::pop()
{
		return arr[top--];
}
template <class t>
bool stack<t>::IsEmpty()
{
	if(top==-1)
	{
		return true;
	}
	else
	return false;
}
int prec (char c){
	if (c == '^'){
		return 3;
	}
	else if (c == '*' || c == '/'){
		return 2;
	}
	else if (c == '+' || c == '-'){
		return 1;
	}
	else {
		return -1;
	}
}
int main()
{
	int i = 0;
	char input[100];
	string res;
	stack<char> s;
	cout<<"Enter an Infix Expression: "<<endl;
	cin>>input;
	
	while(input[i] != '\0')
	{
		if(input[i]>='a' && input[i]<='z' || input[i]>='A' && input[i]<='Z')
		{
			res += input[i];
		}
		else if(input[i]=='(')
		{
			s.push(input[i]);
		}
		else if(input[i]==')')
		{
			while(!s.IsEmpty() && s.topElement()!='(' )
			{
			res += s.topElement();
			s.pop();		
			}	
			if(!s.IsEmpty()){
				s.pop();
			}
		}	
		else {
			while (!s.IsEmpty() && prec(s.topElement()) > prec(input[i]))
			{
				res += s.topElement();
				s.pop();
			}
			s.push(input[i]);
		}
		i++;
		}	
			while(!s.IsEmpty()){
			res += s.topElement();
			s.pop();
		}	
	cout<<"Postfix form is: ";
	cout<<res<<endl;
	return 0;
}
