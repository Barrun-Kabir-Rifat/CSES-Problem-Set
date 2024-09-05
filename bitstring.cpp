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
  int n;
  cin>>n;
  int m=1e9+7;
  int ans=1;
 for(int i=1;i<=n;i++)
 {
    ans=(ans*2)%m;
 }
 cout<<ans<<endl;
   return 0;
}