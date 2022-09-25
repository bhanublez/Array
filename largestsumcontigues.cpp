//largest sum Contiguous Sub array
#include <iostream>
using namespace std;
#include<climits>
 int main()
 {
     int n;
     cout<<"Enter no. of element to be used find their max contiguous Sum."<<endl;
     cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int c_sum=0;
int max_sum=INT_MIN;
for(int i=0;i<n;i++){
    c_sum+=a[i];
    if(c_sum<0){
        c_sum=0;}
max_sum=max(max_sum,c_sum);
}
cout<<max_sum<<endl;
return 0;
}
