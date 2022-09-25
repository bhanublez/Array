#include<bits/stdc++.h>
using namespace std;
int missPositive(int a[],int n ){
int min=1;
sort(a,a+n);
for(int i=0;i<n;i++){

    if(a[i]==min){
        min++;
    }

}
cout<<a[];
return min;
}


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
int n1=sizeof(a)/sizeof(a[0]);
cout<<missPositive(a,n1);


return 0;
}
