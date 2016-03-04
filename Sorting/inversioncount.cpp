#include<iostream>
#include<vector>
#include<map>
using namespace std;

map<int,int> mymap;
vector<int> merge(vector<int> v1,vector<int> v2)
{
    vector<int> merged;
    
    int one=0;
    int two=0;
    
    int ct=0;
    while(one<v1.size() && two < v2.size())
    {
        if(v1[one]<v2[two])
        {
            merged.push_back(v1[one]);
            mymap[v1[one]]+=ct;
            one++;
        }
        else
        {
            ct++;
            merged.push_back(v2[two++]);
        }
        
    }
    
    while(one<v1.size())
    {
    merged.push_back(v1[one]);
    mymap[v1[one]]+=ct;
    one++;
    }
    
    while(two<v2.size())
    merged.push_back(v2[two++]);
    
    return merged;
   
}

vector<int> getSubvector(vector<int> v,int low,int high)
{
    
    vector<int> sub(v.begin()+low,v.begin()+high);
    return sub;
    
}



vector<int> msort(vector<int> v)
{
    if(v.size()==1)
    return v;
    
    int mid=(v.size())/2;
    
    vector<int> v1o=getSubvector(v,0,mid);
    vector<int> v2o=getSubvector(v,mid,v.size());
    
    vector<int> v1=v1o.size()>0?msort(v1o):v1o;
    vector<int> v2=v2o.size()>0?msort(v2o):v2o;
   
    vector<int> merged=merge(v1,v2);
    
    return merged;
}


int main()
{
    
    int tc;
    cin>>tc;
   
    while(tc--)
    {
    
    int n;
    cin>>n;
    vector<int> gv(n);
    
    for(int i=0;i<n;i++)
    cin>>gv[i];
  
    vector<int> sd=msort(gv);
    
    for(int i=0;i<gv.size();i++)
    cout<<mymap[gv[i]]<<" ";
    
    cout<<endl;
    
    
    }
    
    
    return 0;
    
    
    
    
    
    
}



