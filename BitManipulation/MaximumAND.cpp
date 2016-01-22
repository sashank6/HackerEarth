#include<iostream>
using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		long long int max=0;
		long long int start,end;
		cin>>start;
		cin>>end;
		
		for(long long int i=start;i<end;i++)
		{
			max=(max < (i&(i+1))?i&(i+1):max);
		}
		
		cout<<max<<endl;
		
	}
	return 0;
}
