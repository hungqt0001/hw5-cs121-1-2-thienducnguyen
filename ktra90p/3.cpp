#include <iostream>
#include <math.h>
using namespace std;

void phtr(int x);
int main()
{
	int x;
	do{
		cout<<"Nhap vao x (<10.000.000): ";
		cin>>x;
	}while (x>10000000);
	phtr(x);
}
void phtr(int x)
{
	int a[2];
	a[0]=1;
	a[1]=1;
	for (int i=2; i<=x; i++)
	{
		a[0]=a[0]*i+a[1];
		a[1]=a[1]*i;
	}
	int b,c,e,f
	;
	b=a[0];
	c=a[1];
	while (b!=c)
	{
		if (b>c)
		{
			b = b - c;
		}
		else 
		{
			c = c - b;
		}
	}
	e = a[0]/b;
	f = a[1]/b;
	if (e==f || f==1)
		cout<<e<<endl;		
	else
		cout<<e<<"/"<<f<<endl;
}
