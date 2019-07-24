#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	int place[1002];
	int speed[1002];
	int line[1002];
	int n,l,t;
	cin>>n>>l>>t;
	for(int i=1;i<=n;i++)
	{
		cin>>place[i];
		speed[i]=1;
	}
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<=l;j++)
			line[j]=0;
		for(int j=1;j<=n;j++)
		{
			place[j] += speed[j];
			if(place[j]==0||place[j]==l)
			{
				speed[j] = (-1)*speed[j];
			}
			if(line[place[j]]==0)
			{
				line[place[j]] = j;
			}
			else
			{
				speed[line[place[j]]] = (-1)*speed[line[place[j]]];
				speed[j] = (-1)*speed[j];
			}
			
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<place[i]<<" ";
	}
} 
