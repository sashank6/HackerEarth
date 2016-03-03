#include<iostream>
#include<vector>
using namespace std;

vector<int> merge(vector<int> v1,vector<int> v2)
{
    vector<int> merged;
    
    int one=0;
    int two=0;
    
    while(one<v1.size() && two < v2.size())
    {
        merged.push_back((v1[one]< v2[two])?v1[one++]:v2[two++]);
    }
    
    while(one<v1.size())
    merged.push_back(v1[one++]);
    
    while(two<v2.size())
    merged.push_back(v2[two++]);
    
    return merged;
   
}

vector<int> msort(int low,int high,vector<int> v)
{
    if(low==high)
    return v;
    
    int mid=(low+high)/2;
    
    /*cout<<low<<","<<mid<<","<<high<<endl;
    
    vector<int> v1o(v.begin()+low,v.begin()+mid+1);
    vector<int> v2o(v.begin()+mid+1,v.begin()+high);
    */
    cout<<v1o.size()<<endl;
    cout<<v2o.size()<<endl;
    
    
    vector<int> v1=v1o.size()>0?msort(low,mid,v1o):v1o;
    vector<int> v2=v2o.size()>0?msort(mid+1,high,v2o):v2o;
    
    
    
    vector<int> merged=merge(v1,v2);
    
    
    
    return merged;
    
    
}



int main()
{
    vector<int> v1;
    vector<int> v2;
    
    for(int i=10;i>=0;i-=2)
    {
        v1.push_back(i);
    }
    
    for(int i=1;i<10;i+=2)
    v2.push_back(i);
    
    
    vector<int> sd=msort(0,v1.size(),v1);
    
    
    for(int i=0;i<sd.size();i++)
    cout<<sd[i]<<endl;
    
    
    return 0;
    
    
    
    
    
    
}



