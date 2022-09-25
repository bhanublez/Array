//to display sum of array
#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the number of elements to be enter in array"<<endl;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
int i ,sum =0;
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }

cout<<"Sum of elements of given arrays is "<<sum<<endl;
}
