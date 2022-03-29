#include<bits/stdc++.h>
using namespace std;
 void solve()
 {   vector<int>v(3);
     cin>>v[0]>>v[1]>>v[2];
     int n;
     cin>>n;
     int max = *max_element(v.begin(),v.end());
     int d = (max-v[0])+(max-v[1])+(max-v[2]);
     if(d>n)
     cout<<"NO"<<endl;
     else
     {
         if((n-d)%3==0)
         cout<<"YES"<<endl;
         else
         cout<<"NO"<<endl;
     }
     
 }
 int main()
 {
     int t;
     cin>>t;
     while(t--)
     solve();
     return 0;
 }