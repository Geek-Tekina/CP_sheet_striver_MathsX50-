#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b;
    cin>>a>>b;
    if(a==b)
    cout<<0<<endl;
    else{if(abs(a-b)%10!=0)
    cout<<(abs(a-b)/10) + 1<<endl;
    else
    cout<<(abs(a-b)/10)<<endl;
}}

int main(){
    int t;
    cin>>t;
    while(t--)
    solve();
    
}