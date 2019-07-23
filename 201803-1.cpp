#include<iostream> 

using namespace std;

int main()
{
	int sum=0;
	int n;
	int score=1;
	
	while(true)
	{
		cin>>n;
		if(n==1)
		{
			score=1;
			sum+=score;
		}
		else if(n==2)
		{
			if(score==1)
			{
				score=2;
				sum+=score;
			}
			else
			{
				score+=2;
				sum+=score;
			}
		}
		else if(n==0)
		{
			break;
		}
	}
	cout<<sum;
	return 0;
}
