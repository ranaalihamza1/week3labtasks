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
	float fuel;
	fuel=distance*10;
	cout<<"Fuel needed: "<<fuel;
}