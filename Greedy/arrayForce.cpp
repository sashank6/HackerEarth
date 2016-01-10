#include<iostream>
#include<vector>
#include<map>
#include<cmath>
#include<iterator>
using namespace std;

long long int computeValue(vector<int> v)
{
	map<int,int> mymap;
	int n=v.size();
	for(int i=0;i<n;i++)
	{
		mymap[v[i]]++;
	}
	
	long long int sum=0;
	for(auto it=mymap.begin();it!=mymap.end();++it)
		sum+=it->second*it->second;
	return sum;
	
	
}


int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
	vector<int> v;
	int x,y;
	int n,mod;
	cin>>x;
	cin>>y;
	cin>>n;
	cin>>mod;
	v.push_back(x);
	v.push_back(y);
	
	for(int i=2;i<n;i++)
		v.push_back((v[i-1]+v[i-2])%mod);
	cout<<computeValue(v)<<endl;
	}
	
	return 0;
}