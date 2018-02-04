#include <iostream>
#include <math.h>
#include <string>
using namespace std;
bool isleapyear(int year);

int main()
{
	int year;
	char h;
	do
	{	cout<<"enter year: ";
		cin>>year;
		if (isleapyear(year) == true)
		{
			cout<<year<<"is a leap year"<<endl;
		}
		else
		{
			cout<<year<<"is not a leap year"<<endl;
		}
		cout<<"continue? (y/n)";
		cin>>h;
	}
	while(h!='n');
	return 0;
		
}
bool isleapyear(int year)
{
	return (year% 4==0 && year % 100 !=0) || (year % 400 ==0);
}
