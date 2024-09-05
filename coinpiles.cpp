#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
typedef long long int ll;
typedef unsigned long long int ull;
  
void solve()
{
  ll a,b,ans;
  cin>>a>>b;
  if(a==0&&b==0)
  {
    cout<<"YES"<<endl;
  }
  else if((b>2*a)||(a>2*b))
  {
    cout<<"NO"<<endl;
  }
  else if(a+b<3)
  {
    cout<<"NO"<<endl;
  }
 else if((a+b)%3==0)
  {
    cout<<"YES"<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }

}
  
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    solve();
  }
   return 0;
}