#include <iostream>
using namespace std;
bool isleapyear(int year);
void next_day(int day, int month, int year);
int last_day(int month, int year);
int main()
{
	int year,month,day;
	string x;
	do
	{
		cout<<"enter day: ";
		cin>>day;
		cout<<"enter month: ";
		cin>>month;
		cout<<"enter year: ";
		cin>>year;
		cout<<"ngay tiep theo cua thang la: ";
		next_day(day,month,year);
		cout<<endl;
	
		cout<<"china namba wan? (y/n)";
		cin>>x;
	}
	while (x!="n");
}
bool isleapyear(int year)
{
	return ((year% 4==0 && year % 100 !=0) || (year % 400 ==0));
}
void next_day(int day, int month, int year)
{
	if ( month<12)
	{
		if (day<last_day(month,year))
			day++;
		else
		{
			day=1;
			month++;
		}
	}
	else 
	{
		if (day<last_day(month,year))
			day++;
		else
		{
			day=1;
			month=1;
			year++;
		}
	}
	cout<<day<<" "<<month<<" "<<year;
}			

int last_day(int month, int year)
{
	switch(month)
	{
		case 1:case 3:case 5:case 7:case 8:case 12:case 10:
			return 31;
		case 2:
			if (isleapyear(year) == true)
				return 29;
			else 
				return 28;
			
		case 4:case 6:case 9:case 11:
			return 30;
	}		
}	
