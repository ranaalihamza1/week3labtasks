#include<iostream>
using namespace std;
void number(int score);
main()
{ 	int score;
	cout<<"Enter your score: ";
	cin>>score;
	number(score);

}
void number(int score)
{	
	if(score>50)
	{cout<<"Pass";}
	else
	{cout<<"Fail";}
}