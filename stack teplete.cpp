#include<iostream>
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
int main()
{
	cout<<"Hello world"<<endl;
	stack<int> intStack;
	intStack.push(5);
	intStack.push(7);
	cout<<"Top value : "<<intStack.topElement()<<endl;
	stack<char> charStack;
	charStack.push('a');
	charStack.push('b');
	cout<<"Top value : "<<charStack.topElement()<<endl;


	
	
}

