#include <iostream>
using namespace std;
int GCD (int a, int b);
int main()
{
	int a,b;
	char h;
	do
	{
	cout<<"enter the first NO and the 2nd No: ";
	cin>>a>>b;
	cout<<" GCD of 2 NOS is : "<<GCD(a,b)<<endl;
	cout<<" do you want to continue?(y/n)";
	cin>>h;
	}
	while (h!='n');
	
	
}
int GCD (int a, int b)
{
	int i;
	i = a;
	while (i>0)
	{
		if (a%i==0 && b%i==0)
			return i;
		i--;
	}
		
}
