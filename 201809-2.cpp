#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int Num =  1000000;
int time[1000000];

int main()
{
	int n;
	cin>>n;
	int max=0;

	for(int i=0;i<Num;i++)
		time[i]=0;

	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		if(b>max)
			max = b;
		for(int j=a;j<b;j++)
			time[j]++;
	}
	for(int i=0;i<n;i++)
	{
		int c,d;
		cin>>c>>d;
		if(d>max)
			max = d;
		for(int j=c;j<d;j++)
			time[j]++;
	}
	
	int sum=0;
	for(int i = 1;i<max;i++)
	{
	//	cout<<i<<" "<<time[i]<<endl;
		if(time[i] == 2)
		{
			sum++;
		}
	}
	cout<<sum;
	return 0;
} 
