#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main()
{
	double a,n;
	string x;
	do
	{
		cout<<" hay nhap gia tri ban can tinh: ";
		cin>>a;
		n=sqrt(a);
		cout<<"ket qua can bac hai cua gia tri tren la : "<<n<<endl;
		cout<<" ban muon tiep tuc khong? (y/n)";
		cin>>x;
	}
	while (x!="n");
}
	
