//maximum remaining
#include<iostream>
using namespace std;
int main(){
    int i,n,x,y;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        if(a[i]=+a[i+1])
        {i++;
        continue;
        }else break;
    }if(i==n-1){

    cout<<0;
    return 0;}

    x=a[0];
    for(i=1;i<n;i++){
        x=a[i];
    }
    y=a[0];
    for(i=1;i<n;i++){
        if(a[i]>y && a[i]<x)
            y=a[i];

        if(x==y)y=a[i];
    }

    cout<<y;

}

