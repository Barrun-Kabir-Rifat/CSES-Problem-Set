#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
typedef long long int ll;
typedef unsigned long long int ull;
  
void solve()
{
  
}
  
int main()
{
  vector<ll>v;
  vector<ll>v1;
  ull n;
  cin>>n;
  ull sum=(n*(n+1))/2;
   
  if(sum%2!=0)
  {
    cout<<"NO"<<endl;
  }
  else
  {
    ull sum1=0,ans;
    cout<<"YES"<<endl;
    for(int i=n;i>=n/2;i--)
    {
         sum1=sum1+i;
        if(sum1<=sum/2)
        {
        v.pb(i);
        ans=sum1;
        } 
        if(sum1>sum/2)
        {
            break;
        }
    }
    ull extra=sum/2-ans;
    if(extra!=0)
    v.pb(extra);
    ull sum2=0;
    for(int i=1;i<n;i++)
    {
        if(i!=extra)
        {
            sum2=sum2+i;
            if(sum2<=sum/2)
            {
                v1.pb(i);
            }
            if(sum2>sum/2)
            {
                break;
            }
        }
    }
    sort(v.begin(),v.end());
    cout<<v.size()<<endl;
    for(auto it:v)
    {
      cout<<it<<" ";
    }
    cout<<endl;
    cout<<v1.size()<<endl;
    for(auto itt:v1)
    {
      cout<<itt<<" ";
    }
    cout<<endl;
   
  }
   return 0;
}