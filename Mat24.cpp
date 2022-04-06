#include<bits/stdc++.h>
using namespace std;
int main(){
 long long x,y,z;
 cin>>x>>y>>z;
 long long total = (x+y)/z;
 cout<<total<<" ";
 long long another = x/z + y/z;
 if(total>another)
 {
     long long a = z-(y%z);
     long long b = z-(x%z);
     cout<<min(a,b);
 }
 else
 cout<<0;
return 0;
}