#include<bits/stdc++.h>
using namespace std;

int wines(int prices[],int n){
    vector<vector<int>> dp(n+1,vector<int>(n+1,0));

    for(int i=n-1;i>=0;i--){
        for(int j=0;j<n;j++){ 
            if(i==j) dp[i][i]=n*prices[i];
            else if(i<j){
                int y=n-j+i;
                int pickLeft=prices[i]*y+dp[i+1][j];
                int pickRight=prices[j]*y+dp[i][j-1];
                dp[i][j]=max(pickLeft,pickRight);
            }
        }
    }
    return dp[0][n-1];
}

int main(){
    int a[]={2,3,5,1,4};
    int n=5;
    cout<<wines(a,n)<<endl;
}