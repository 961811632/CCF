#include<iostream>
using namespace std;

int main()
{
	int n,i,k,q,w,j,t,x,s;
	cin>>n>>k;
	int a[n+1];
	for(i=1;i<=n;i++)
	{
		a[i]=i;
	}
	for(i=1;i<=k;i++)
	{
		cin>>q>>w;
		for(j=1;j<=n;j++)
		{
			if(a[j]==q)
				t=j;
		}
		if(w>0)
		{
			x=a[t];
			for(s=t;s<t+w;s++)
				a[s]=a[s+1];
			a[t+w]=x;
		}
		else
		{
			x=a[t];
			for(s=t;s>t+w;s--)
				a[s]=a[s-1];
			a[t+w]=x;
		}
	}
	for(i=1;i<=n;i++)
	{
		cout<<a[i];
		if(i!=n)
			cout<<" ";
	}
	return 0;
}
