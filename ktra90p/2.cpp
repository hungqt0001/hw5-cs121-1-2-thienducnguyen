#include <iostream>
#include <math.h>
using namespace std;

void toigian(int soht[]);
int main()
{
	int pso1[2];
	int a,b;
	cin>>a;
	cin>>b;
	pso1[0] = a;
	pso1[1] = b;
	toigian(pso1);
}
void toigian(int soht[])
{
	int a,b,c,d;
	a = soht[0];
	b = soht[1];
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
	c = soht[0]/a;
	d = soht[1]/a;
	if (c==d || d==1)
		cout<<c<<endl;	
	else
		cout<<c<<"/"<<d<<endl;	
}
