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
  ll n;
  cin>>n;
  ll count=0;
 for(ll i=5;n/i>=1;i=i*5)
 {
    count=count+n/i;
 }
 cout<<count<<endl;
   return 0;
}