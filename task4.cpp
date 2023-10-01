#include<iostream>
using namespace std;
void addition(int num1,int num2);
void subtraction(int num1,int num2);
void multiplication(int num1,int num2);
void division(int num1,int num2);
main()
{
	int num1;
	cout<<"Enter 1st number: ";
	cin>>num1;
	int num2;
	cout<<"Enter 2nd number: ";
	cin>>num2;
	char op;
	cout<<"Enter an operator (+,-,*,/): ";
	cin>>op;
	if(op =='+')
	{addition(num1,num2);}
	if(op =='-')
	{subtraction(num1,num2);}
	if(op =='*')
	{multiplication(num1,num2);}
	if(op =='/')
	{division(num1,num2);}
	
}	
void addition(int num1,int num2)
{	int add;
	add=num1+num2;
	cout<<"Addition: "<<add;
}
void subtraction(int num1,int num2)
{	int subtract;
	subtract=num1-num2;
	cout<<"Subtraction: "<<subtract;
}

void multiplication(int num1,int num2)
{	int multiply;
	multiply=num1*num2;
	cout<<"Multiplication: "<<multiply;
}
void division(int num1,int num2)
{	int divide;
	divide=num1/num2;
	cout<<"Division: "<<divide;
}