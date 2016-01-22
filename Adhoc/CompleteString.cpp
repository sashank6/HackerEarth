#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
    string str;
    int arr[26]={0};
    cin>>str;
    
    for(int i=0;i<str.length();i++)
    {
    	arr[str[i]-97]++;
    }
    int ct=0;
    for(int i=0;i<26;i++)
    {
    	if(arr[i]>0)
    	ct++;
    }
    
    (ct==26)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    
}
