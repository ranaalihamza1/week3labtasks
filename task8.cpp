#include<iostream>
using namespace std;
main()
{
	string day;
	cout<<"Enter the day of purchase: ";
	cin>>day;
	float totalamount;
	cout<<"Enter the total purchase amount: $";
	cin>>totalamount;
	float payableamount;
	if(day=="Sunday")
	{payableamount=totalamount*0.1;}
	if(day!="Sunday")
	{payableamount=totalamount;}
	cout<<"Payable Amount: $"<<payableamount;

	

}

	