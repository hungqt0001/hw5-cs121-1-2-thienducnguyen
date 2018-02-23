#include <iostream>
#include <math.h>
using namespace std;

void tong(int ketqua[], int soht1[], int soht2[]);
int main()
{
	int pso1[2], pso2[2];
	int a,b,c,d;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	pso1[0]=a;
	pso1[1]=b;
	pso2[0]=c;
	pso2[1]=d;
	int ketqua[2];
	tong(ketqua,pso1,pso2);
	
}
void tong(int ketqua[], int soht1[], int soht2[])
{
	int a,b,c,d;
	ketqua[0]=soht1[0]*soht2[1] + soht1[1]*soht2[0];
	ketqua[1]=soht1[1]*soht2[1];
	a= ketqua[0];
	b= ketqua[1];
	while (a!=b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else 
		{
			b = b - a;
		}
	}
	c = ketqua[0]/a;
	d = ketqua[1]/a;
	if ( c==d || d==1)
		cout<<c<<endl;
	else
		cout<<c<<"/"<<d<<endl;
}

