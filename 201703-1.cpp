#include<iostream>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int a;
	int num=0;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		sum+=a;
		if(sum>=k)
		{
			num++;
			sum=0;
		}
	}
	if(sum>0)
	{
		num++;
	}
	cout<<num;
	return 0;
}
