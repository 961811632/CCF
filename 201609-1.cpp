#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,i,k,max=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<n;i++)
	{
		k=abs(a[i]-a[i-1]);
		if(k>max)
		{
			max=k;
		}
	}
	cout<<max;
	return 0;
}
