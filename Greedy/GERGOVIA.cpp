#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
	
	int n;
	int x;
	
	while(1)
	{			
	
	
	cin>>n;
	if(n==0)
		break;
	vector<int> v;
	int x=0;
	
	while(n--)
	{
		int t;
		cin>>t;
		v.push_back(t);
	}
	
	
	long long int cost=0;
	int t=v[0];
	
	for(int i=1;i<v.size();i++)
	{
		cost+=(long long int)abs(t);
		t+=v[i];
	}
	cout<<cost<<endl;
}
	return 0;
	
}