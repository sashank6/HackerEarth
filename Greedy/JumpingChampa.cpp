#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
	
	int tc;
	cin>>tc;
	while(tc--)
	{
	
	long int n,q;
	cin>>n;
	cin>>q;
	
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		v.push_back(t);
	}
	
	sort(v.begin(),v.end());
	
	long int sum=0;
	for(int i=1;i<n;i++)
	{
		
		sum+=q*abs(v[i]-v[i-1]);
	}
	cout<<sum<<endl;
	
}
	
	
	return 0;
}

