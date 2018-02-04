#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
double get(double n)
{
	double a,b;
	a= n/2;
	b = 0;
		
	while(a!=b)
	{
		b=a;
		a = (a+n/a)/2;
	}
	return a;
}
int main()
{
	double t;
	cout<<"hay nhap gia tri ban can tinh: ";
	cin>>t;
	double z = sqrt(t);
	cout<<"ket qua la: "<<z<<endl;
	string x;
	do
	{
		cout<<" ban co muon tiep tuc hay khong? (y/n)";
		cin>>x;
	}
	while(x!="n");
}

			

