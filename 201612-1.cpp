#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n, mid, left, right;
  	int num[1010];
  	
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>num[i];
 
    sort(num, num+n);
 
    mid = n/2;
    left = mid;
    right = n - mid - 1;
    
    for(int i=mid-1; i>=0; i--)
    {
    	if(num[i] == num[mid])
    	{
    		left--;
		}
        else
        {
        	break;
		}
    }
        
   
    for(int i=mid+1; i<n; i++)
    {
    	if(num[i] == num[mid])
    	{
    		right--;
		}
        else
        {
        	break;
		}            
	}
           
    if(left == right)
    {
    	cout<<num[mid];
	}
    else
    {
    	cout<<"-1";
	}
        
    return 0;
}
