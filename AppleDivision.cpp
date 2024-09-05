#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
typedef long long int ll;
typedef unsigned long long int ull;
   
void solve()
{
  int n;
  cin>>n;
  ll arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  sort(arr,arr+n);
  ll sum=0;
  for(int i=0;i<n;i++)
  {
    sum=sum+arr[i];
  }
  ll halfsum=sum/2;
  ll presum=0;
  for(int i=0;i<n-1;i++)
  {
    presum=presum+arr[i];
    if(presum>=halfsum)
    {
        break;
    }
  }
  ll dif1=abs(presum-(sum-presum));

 ll nextsum=0;
  for(int i=n-1;i>=1;i++)
  {
    nextsum=nextsum+arr[i];
    if(nextsum>=halfsum)
    {
        break;
    }
  }
  ll dif2=abs(nextsum-(sum-nextsum));
  ll ans1=min(dif1,dif2);
  ll dif3,dif4,ans,dif5,dif6,dif7;
ll mixsum=0;
   for(int i=0;i<=n/2;i++)
  {
    mixsum=mixsum+arr[n-1-i]+arr[i];
    if(mixsum==halfsum)
    {
      dif7=0;
       break;
    }
    else if(mixsum>halfsum)
    {
       dif3=abs(mixsum-(sum-mixsum));
       ll mixsum1=mixsum-(arr[n-1-i]+arr[i]);
       dif4=abs((sum-mixsum1)-mixsum1);
        ll mixsum2=mixsum-(arr[n-1-i]);
        dif5=abs(mixsum2-(sum-mixsum2));
        ll mixsum3=mixsum-arr[i];
        dif6=abs(mixsum3-(sum-mixsum3));
        break;
    }
  }
  ll mixdef=min(dif3,min(dif4,min(dif5,min(dif6,dif7))));
  if(mixsum!=halfsum)
  {
    ans=min(mixdef,ans1);
  }
  cout<<ans<<endl;
}
  
int main()
{
  solve();
   return 0;
}