/*
Question link : https://www.spoj.com/problems/AGGRCOW
*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;  
	cin>>t;
	while(t--)
	{
		int n,c;
		cin>>n>>c;
    
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
      
		sort(a,a+n);
    
		int best=0;
		int low=1,high=a[n-1],mid;  
		while(high>=low)
		{
			mid=low+(high-low)/2;
			int count=1;
			
			int j=a[0];
			for(int i=1;i<n;i++)
			{
				if(a[i]-j >= mid)
				 {
				 	count++;
				 	j=a[i];
				 }
			}
			if(count >=c )
			 {
			 	best=max(best,mid);
			 	low=mid+1;
			 }
			 else
			 {
			 	high=mid-1;
			 }
			
		}
        cout<<best<<endl;
	}
	return 0;
}
