#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
  
void solve()
{
  
}
  
//sub_array_related
ll subarraysum(ll arr[],int n)
{
ll ans=INT_MIN;
ll curr=0;
for(int i=0;i<n;i++)
{
curr=max(arr[i],curr+arr[i]);
ans=max(ans,curr);
}
return ans;
}
  
int main()
{
  string str;
  cin>>str;
  ll count=1;
  ll mx=INT_MIN;
  for(int i=0;i<str.size();i++)
  {
    if(str[i]==str[i+1])
    {
        count++;
    }
   
    if(str[i]!=str[i+1])
    {
        mx=max(mx,count);
        count=1;
    }
  }
  cout<<mx<<endl;
   return 0;
}