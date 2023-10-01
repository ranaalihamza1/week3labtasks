#include<iostream>
using namespace std;
void fuel(float distance);
main()
{
	float distance;
	cout<<"Enter the distance: ";
	cin>>distance;
	fuel(distance);
}
void fuel(float distance)
{
	int fuel;
	fuel=distance*10;
	{cout<<"Fuel needed: "<<fuel;}
	if(fuel<100)
	{cout<<"Fuel needed: 100";}
}
	
	