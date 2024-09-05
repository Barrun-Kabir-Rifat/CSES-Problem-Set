#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
typedef long long int ll;
typedef unsigned long long int ull;
  
// reference code disk
vector<int> decimaltobinary(int dec_num,int n) 
{ 
    vector<int>binaryvector;
    for(int i=n-1;i>=0;i--)
    {
        int shift=dec_num>>i;
        if(shift&1)
        {
            binaryvector.pb(1);
        }
        else
        {
            binaryvector.pb(0);
        }
    }
    return binaryvector;
} 
vector<int>getgraycode(vector<int>v)
{
    vector<int>gray;
    gray.pb(v[0]);
    for(int i=0;i<(int)v.size()-1;i++)
    {
        gray.pb(v[i]^v[i+1]);
    }
    return gray;
}
  void solve()
{
  int n;
  cin>>n;
  vector<int>binarynumber;
  vector<int>graycode;

  for(int i=0;i<pow(2,n);i++)
  {
  binarynumber=decimaltobinary(i,n); //vector copy
  graycode=getgraycode(binarynumber);
  for(int i=0;i<(int)graycode.size();i++)
  {
    cout<<graycode[i];
  }
  cout<<endl;
  binarynumber.clear();
  graycode.clear();
  }
  
}
int main()
{
  solve();
}