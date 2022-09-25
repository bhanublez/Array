#include<bits/stdc++.h>
using namespace std;
int main(){

long long int s1,s2,n;
cout<<"Number of time you want to run this program."<<endl;
cin>>n;
while(n--){
 int a,b;
 cin>>a;
 set<int>st;
 for(int i=0;i<n;i++){
    cin>>b;
    st.insert(b);
 }   int sum1=0,sum2=0;
 for(auto it =st.begin();it!=st.end();it++){
if(*it>=0) sum1+=*it;
else if(*it<0)sum2+=*it;
 }
 cout<<sum1<<" "<<sum2<<endl;

}
return 0;
}
