#include<iostream>
using namespace std;

int main()
{
	long long int tc;
	cin>>tc;
	
	while(tc--)
	{
		int n;
		cin>>n;
		
		long long int ct=0;
		
		for(long long int i=0;i<n;i++)
		{
			long long int buf;
			cin>>buf;
			ct+=buf&1;
		}
		
		cout<<(n-ct)*ct<<endl;
	}
	return 0;
}