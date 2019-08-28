#include<iostream>
#include<cmath> 
using namespace std;

int a[21][7];
int main()
{
	int n,buy[101];
	for(int i=0;i<20;i++)
	{
		for(int j=0;j<5;j++)
		{
			a[i][j]=0;
		}
		a[i][5]=5;
	}
	
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>buy[i];
		
	for(int tip=0;tip<n;tip++)
	{
		int order=buy[tip];
		int line=0;
		int pos=-1;
		while(line!=20)
		{
			if(a[line][5]>=order)
			{
				pos=line;
				break;
			}
			line++;
		}
		
		if(pos==-1)
		{
			for(int i=0;i<20;i++)
			{
				for(int j=0;j<5;j++)
				{
					if(a[i][j]==0&&order>0)
					{
						a[i][j]=1;
						a[i][5]--;
						order--;
						cout<<5*i+j+1<<" ";
					}
				}
			}
		}
		else
		{
			int num=0;
			int t=0;
			a[pos][5]-=order;
			for(int i=0;i<5;i++)
			{
				if(a[pos][i]==0)
				{
					num++;
					if(num==order)
					{
						t=i;
						break;
					}
				}
				else
				{
					num=0;
				}
			}
			t=t-order+1;
			for(int i=0;i<order;i++)
			{
				a[pos][t+i]=1;
				cout<<5*pos+t+i+1<<" ";
			}
		}
		cout<<endl;
	}

	return 0;
}
