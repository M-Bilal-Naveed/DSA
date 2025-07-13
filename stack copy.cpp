#include<iostream>
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
//	cout<<"Hello World! "<<endl;
//	stack s(5);
////*****check stack is full or not and Empty or not*****
//	cout<<"Is Empty= "<<s.IsEmpty()<<endl;
//	cout<<"Is FULL = "<<s.IsFull()<<endl;
//	//*****Push data into stack*****
//	for(int i=1;i<=5;i++)
//	{
//		int a;
//		cout<<"Enter number: ";
//		cin>>a;
//		s.push(a);
//	}
//	s.push(20);
//	//*****After Pushing*****
////*****check stack is full or not and Empty or not*****
//	cout<<"Is Empty= "<<s.IsEmpty()<<endl;
//	cout<<"Is FULL = "<<s.IsFull()<<endl;
//	//*****Get the value At the top of stack(only get vale at the top of stack not remove)*****
//	cout<<"Top = "<<s.top()<<endl;
//	//*****Pop data From stack*****
//	for(int i=1;i<=5;i++)
//	{
//		cout<<"Pop = "<<s.pop()<<endl;
//	}
//	//*****After Poping*****
////*****check stack is full or not and Empty or not*****
////*****Answer will be empty(0) and full (0)*****
//	cout<<"Is Empty= "<<s.IsEmpty()<<endl;
//	cout<<"Is FULL = "<<s.IsFull()<<endl;
stack s1(5);
stack s2(5);
	cout<<"Enter the value in stack 1: "<<endl;
	for(int i=1;i<=5;i++)
	{
		int a;
		cout<<"Enter number: ";
		cin>>a;
		s1.push(a);
	}
	cout<<endl;
	
	cout<<"Copying Stack 1 into Stack 2: "<<endl;
	for(int i=1;i<=5;i++)
	{
		s2.push(s1.pop());
	}
	cout<<endl;
	
	cout<<"Stack 2:"<<endl;
	for(int i=1;i<=5;i++)
	{
		cout<<"Pop = "<<s2.pop()<<endl;
	}

return 0;



}

