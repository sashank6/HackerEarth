#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n+1];
	
	for(int i=0;i<=n;i++)
		arr[i]=INT_MAX;
	
	arr[0]=0;arr[1]=1;arr[3]=1;arr[5]=1;
	
	
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<i;j++)
		{
			arr[i]=min(arr[i],arr[i-j]+arr[j]);
		}
	}
	
	cout<<"Minimum Number of coins required are: "<<arr[n]<<endl;
	
	
	
	return 0;
	
	
}