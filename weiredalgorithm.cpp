#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
  
void solve()
{
  
}
   
int main()
{
  ll n;
  cin>>n;
  while(n!=1)
  {
    cout<<n<<" ";
    if(n%2==0)
    {
        n=n/2;
    }
    else
    {
        n=(n*3+1);
    }
  }
  cout<<1<<endl;
   return 0;
}