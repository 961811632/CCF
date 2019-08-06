#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int sum=0;
	while(n>=30)
	{
		if(n>=50)
		{
			n-=50;
			sum+=7;
			continue;
		}
		if(n>=30)
		{
			n-=30;
			sum+=4;
			continue;
		}
	}
	sum += n/10;
	cout<<sum;
	return 0;
}
