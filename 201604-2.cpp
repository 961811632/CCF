#include<iostream>
using namespace std;

int main()
{
	int n,i,k,j,t,x;
	int a[20][11],b[4][4],c[20][11];
	for(i=1;i<=15;i++)
	{
		for(j=1;j<=10;j++)
		{
			cin>>a[i][j];
			c[i][j]=a[i][j];
		}
	} 
	for(i=16;i<=19;i++)
	{
		for(j=1;j<=10;j++)
		{
			a[i][j]=1;
			c[i][j]=a[i][j];
		}
	} 
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			cin>>b[i][j];
		}
	} 
	cin>>k;
	int po=1;
	for(i=1;i<=19&&po;i++)
	{
		po=1;
		for(j=4;j>=1&&po&&i+j-4>=1;j--)
		{
			for(x=1;x<=4&&po;x++)
			{
				c[i+j-4][k+x-1]=a[i+j-4][k+x-1]+b[j][x];
				if(c[i+j-4][k+x-1]>1)
					po=0;
			}
		}
	} 
	i=i-2;
	for(j=4;j>=1;j--)
	{
		for(x=1;x<=4;x++)
		{
			a[i+j-4][k+x-1]=a[i+j-4][k+x-1]+b[j][x];
		}
	}
	for(i=1;i<=15;i++)
	{
		for(j=1;j<=10;j++)
		{
			cout<<a[i][j];
			if(j!=10)
				cout<<" ";
		}
		if(i!=15)
			cout<<endl;
	} 
	return 0;
}
