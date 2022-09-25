#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{ int t;
    cin>>t;
    while(t--){
int n;
cin>>n;
ll a[n];
for(int i=0;i<n;i++){
            cin>>a[i];
        }
    ll s1=0,s2=0;
    set<int>se1,se2;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        se1.insert(a[i]);
        else
            se2.insert(a[i]);
         }
         for(auto it:se1)
            s1=s1+it;
         for(auto it:se2)
            s2=s2+it;
         cout<<s1<<" "<<s2<<endl;
   }
    return 0;
}

