#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n],i,t=0,j;
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=2;i<n;i++)
	{
		if((a[i]>a[i-1])&&(a[i]>a[i+1]))
			t++;
		else if((a[i]<a[i-1])&&(a[i]<a[i+1]))
			t++;
	}	
	cout<<t;
	return 0;
}
