#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	
	int tc;
	cin>>tc;
	while(tc--)
	{
	string s,r;
	cin>>s;
	cin>>r;
	sort(r.begin(),r.end());
	int ct=0;
	for(int i=0;i<s.length()&&ct<r.length();i++)
		if(s[i]>r[ct])
			s[i]=r[ct++];
	cout<<s<<endl;
}
return 0;
	
}