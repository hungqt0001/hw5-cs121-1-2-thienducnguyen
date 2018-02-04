#include <iostream>
using namespace std;

bool isleapyear(int year);
int last_day(int month, int year);

int main()
{
	int year,month;
	
	cout<<"enter month: ";
	cin>>month;
	cout<<"enter year: ";
	cin>>year;
	cout<<"ngay cuoi cung cua thang la: "<<last_day(month,year)<<endl;
	string x;
	do
	{
		cout<<"do you want to continue? (y/n)";
		cin>>x;
	}
	while(x!="n");
}
bool isleapyear(int year)
{
	return ((year% 4==0 && year % 100 !=0) || (year % 400 ==0));
	
}
int last_day(int month, int year)
{
	switch(month)
	{
		case 1:case 3:case 5:case 7:case 8:case 12:
			return 31;
		case 2:
			if (isleapyear(year) == true)
				return 29;
			else 
				return 28;
			
		case 4:case 6:case 9:case 10:
			return 30;
	}		
}

