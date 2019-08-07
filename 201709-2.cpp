#include<iostream>
using namespace std;

int main()
{
	int n,k,end=0,start=10111,i,j,t,ti;
	cin>>n>>k;
	int cl[1010],w[1010],s[1010],c[1010],q[1010]; 
	for(t=1;t<=n;t++)
	{
		cl[t]=t;
	}
	for(t=1;t<=k;t++)
	{
		cin>>w[t]>>s[t]>>c[t];
		c[t]=s[t]+c[t];
		if(c[t]>end)
			end=c[t];
		if(s[t]<start)
			start=s[t];
	}
	for(ti=start;ti<=end;ti++)
	{
		//huan
		int huan=0;
		for(i=1;i<=k;i++)
		{
			if(c[i]==ti)
			{
				huan++;
				q[huan]=w[i];	
			}
		}
		for(i=1;i<=huan;i++)
		{
			for(j=1;j<=huan;j++)
			{
				if(q[i]<q[j])
				{
					int ty=q[i];
					q[i]=q[j];
					q[j]=ty;
				}
			}
		}
		for(i=1;i<=huan;i++)
		{
			int po=1;
			for(j=1;j<=n&&po;j++)
			{
				if(cl[j]==0)
				{
					cl[j]=q[i];
					po=0;
				}
			}
		}
		//qu
		for(i=1;i<=k;i++)
		{
			if(s[i]==ti)
			{
				int po=1;
				for(j=1;j<=n&&po;j++)
				{
					if(cl[j]==w[i])
					{
						cl[j]=0;
						po=0;
					}
				}
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		cout<<cl[i];
		if(i!=n)
			cout<<" "; 
	}
	return 0;
} 
