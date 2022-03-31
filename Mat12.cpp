#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n ;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;++i)
    cin>>arr[i];
    int fine=0,even=0,odd=0;
    for(int i =0;i<n;++i)
    {
        if(i%2==0)
        {
            if(arr[i]%2==0)
            fine++;
            else
            even++;
        }
        else
        {
            if(arr[i]%2==1)
            fine++;
            else
            odd++;
        }
    }
    if(fine==n)
    cout<<0<<endl;
    else if(odd==even)
    cout<<even<<endl;
    else
    cout<<-1<<endl;
}
int main(){
 int t ;
 cin>>t;
 while(t--)
 solve();
return 0;
}