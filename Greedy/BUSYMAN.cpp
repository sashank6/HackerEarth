#include<iostream>
#include<vector>
#include<queue>
#include<utility>
using namespace std;

class Comparator
{
public:
	bool operator()(pair<int,int> a, pair<int,int> b )
	{
		return a.second > b.second;
	}
};

int main()
{
	
	int tc;
	cin>>tc;
	while(tc--)
	{
	priority_queue< pair<int,int>, vector<pair<int,int> >,Comparator> pq;
	
	int n;
	cin>>n;
	while(n--)
	{
		int one,two;
		cin>>one;
		cin>>two;
		pair<int,int> t=make_pair(one,two);
		pq.push(t);
	}
	int s=0;
	s=pq.top().second;
	int ct=1;
	pq.pop();
	while(!pq.empty())
	{
		if( pq.top().first >= s)
		{
			ct++;
			s=pq.top().second;
		}
		pq.pop();
	}
	
	cout<<ct<<endl;
}
	
	return 0;
}
