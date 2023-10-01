#include<iostream>
using namespace std;
void howmanystickers(float sidelength);
main()
{
	float sidelength;
	cout<<"Enter the side length of the Rubik's Cube: ";
	cin>>sidelength;
	howmanystickers(sidelength);
}
void howmanystickers(float sidelength)
{
	float stickers;
	stickers=sidelength*6*sidelength;
	cout<<"Number of stickers needed: "<<stickers;
}
	