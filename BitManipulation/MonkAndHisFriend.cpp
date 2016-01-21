#include<iostream>
using namespace std;

int countOnes(long long int x)
{
	int ct=0;
	while(x)
	{
		ct+=x&1;
		x>>=1;
	}
	return ct;
}


int main()
{
	
	int tc;
	cin>>tc;
	while(tc--)
	{
		long long int m,p;
		cin>>m;
		cin>>p;
		cout<<countOnes(m^p)<<endl;
	}
	
	return 0;
}