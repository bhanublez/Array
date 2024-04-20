/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int max(int i,int j){
    return i>j?i:j;
}
int dp[4][4];

int lcm(char arr1[],char arr2[],int i,int j){
    if(i==0 || j==0){
        return 0;
    }
    
    if(arr1[i]==arr2[j]){
        if(dp[i][j]==-1){
            dp[i][j]=1+lcm(arr1,arr2,i-1,j-1);
        }else{
            return dp[i][j];
        }
        return dp[i][j];
    }else{
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        dp[i][j]=max(lcm(arr1,arr2,i-1,j),lcm(arr1,arr2,i,j-1));
        return dp[i][j];
    }
}

int main()
{
    char arr1[]={'a','c','c'};
    char arr2[]={'a','c','a'};
   
   
    
    
    //now by 
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==0||j==0){
                dp[i][j]==0;
            }else{
                dp[i][j]=-1;
            }
        }    
    }
     int n=lcm(arr1,arr2,3,3);
      printf("n %d",n);
      
      printf("\n");
    
     for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf(" %d ",dp[i][j]);
        }printf("\n");
     }

    return 0;
}
