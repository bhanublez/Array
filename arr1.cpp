//display given array elements in reverse order
#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter number of elements in arrays."<<endl;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
   cout<<"Enter the element"<<endl;
    cin>>a[i];
}//given array
int i;
for( i=n-1;i>=0;i--){
    cout<<a[i];}

    return 0;


}
