#include<iostream>
using namespace std;

void transform(string str)
{
	cout<<str[0];
	for(int i=1;i<str.length();i++)
		if(str[i-1]!=str[i])
			cout<<str[i];
	cout<<endl;
}

int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		string str;
		cin>>str;
		transform(str);
	}
	return 0;
}