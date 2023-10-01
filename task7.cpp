#include<iostream>
using namespace std;
void nature(int number);
main()
{	
	int number;
	cout<<"Enter a number: ";
	cin>>number;
	nature(number);
}
void nature(int number)
{ 	if(number%2 == 0)
	{cout<<"Number "<<number<<" is even";}
	else
	{cout<<"Number "<<number<<" is odd";}
}	