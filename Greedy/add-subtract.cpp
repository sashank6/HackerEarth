#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;
int main()
{
	int t, n, k, i, max, min, j, m, c;
    cin>>t;
    while(t--)
    {
    	cin>>n>>k;
    	int a[n], d[n];
    	for(i=0;i<n;i++)
    		cin>>a[i];
    	sort(a,a+n);
    	max=a[n-1];min=a[0];m=INT_MAX;
    	for(i=min;i<=max;i++)
    	{
    		c=0;
    		for(j=0;j<n;j++)
    		{
    			if(a[j]>i) d[j]=(a[j]-i)*5;
    			else d[j]=(i-a[j])*3;
    		}
    		sort(d,d+n);
    		for(j=0;j<k;j++) c+=d[j];
    		if(c<m) m=c;
    	}
    	cout<<m<<endl;
    }
    return 0;
}