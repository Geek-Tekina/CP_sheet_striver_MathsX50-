#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int i;
    cin>>i;
    if(i==1 || i==2)
    cout<<0<<endl;
    else
    {
        if(i%2==1)
        cout<<i/2<<endl;
        else
        cout<<i/2-1<<endl;
    }
}
int main(){
 int t ;
 cin>>t;
 while(t--)
 solve();
return 0;
}