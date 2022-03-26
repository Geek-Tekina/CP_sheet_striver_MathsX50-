#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i =0;i<n;++i)
    cin>>v[i];
    int sum = accumulate(v.begin(),v.end(),0);
    int odd=0,even=0;
    for(auto it : v)
    {
        if(it%2)odd++;
        else even++;
    }
    if(sum%2)
    cout<<"YES"<<endl;
    else 
    {
        if(odd>=1 && even >=1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
int main(){
 int t ;
 cin>>t;
 while(t--)
 {
     solve();
 }
return 0;
}