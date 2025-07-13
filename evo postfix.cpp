#include<iostream>
#include<math.h>
using namespace std;
class stack
{
	private:
		int *ptr;
		int current;
		int length;
	public:
		stack(int);
		void push(int);
		int pop();
		int top();
		bool IsFull();
		bool IsEmpty();
};
stack::stack(int l)
{
	length=l;
	ptr=new int[length];
	current=-1;
}
void stack::push(int d)
{
	if(current==length-1)
	{
		cout<<"Stack is full"<<endl;
	}
	else
	{
	ptr[++current]=d;
	}
}
int stack::pop()
{
	if(current==-1)
	{
		return -1;
	}
	else
	{
	return ptr[current--];
	}
}
int stack::top()
{
	if(current==-1)
	return -1;
	else
	return ptr[current];
}
bool stack::IsEmpty()
{
	if(current==-1)
	{
		return true;
	}
	else
	return false;
}
bool stack::IsFull()
{
	if(current==length-1)
	{
		return true;
	}
	else
	return false;
}

int main()
{
	int i = 0, op1,op2,x;
	char input[100];
	stack s(10);
	
	cout<<"Enter a valid Postfix Expression: "<<endl;
	cin>>input;
	
	while(input[i] != '\0')
	{
		if(input[i]>='0' && input[i]<='9')
		{
			x = input[i] - 48;
			s.push(x);
		}
		else if(input[i]=='+' || input[i]=='-' || input[i]=='*' || input[i]=='/'||input[i]=='^')
		{
			op2 = s.pop();
			op1 = s.pop();
			switch(input[i]){
				case '+':
					s.push(op1+op2);
					break;
				case '-':
					s.push(op1-op2);
					break;
				case '*':
					s.push(op1*op2);
					break;
				case '/':
					s.push(op1/op2);
					break;
				case '^':
					s.push(pow(op1,op2));
					break;
			}
		}
		i++;
	}
	cout<<"Answer = "<<s.pop();
	return 0;
}

