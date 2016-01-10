#include<iostream>
#include<queue>
using namespace std;

int main()
{
	priority_queue<int> pq1;
	priority_queue<int> pq2;
	int n;
	cin>>n;
	unsigned long int sum=0;
	int k=n;
	while(n--)
	{
		
		unsigned long int x;
		cin>>x;
		pq1.push(x);
	}
	while(k--)
	{
		
		unsigned long int x;
		cin>>x;
		pq2.push(x);
	}
	
	while(!pq1.empty())
	{
		sum+=pq1.top()*pq2.top();
		pq1.pop();pq2.pop();
	}
	
	cout<<sum<<endl;
	return 0;
	
	
}