#include<bits/stdc++.h>
using namespace std;

int wines(int dp[][10],int prices[],int s,int e,int y){
    if(s>e) return 0;
    if(dp[s][e]!=0) return dp[s][e];
    int pickLeft=y*prices[s]+wines(dp,prices,s+1,e,y+1);
    int pickRight=y*prices[e]+wines(dp,prices,s,e-1,y+1);
    return dp[s][e]=max(pickLeft,pickRight);
}

int main(){
    int a[]={2,3,5,1,4};
    int n=5; 
    int dp[10][10]={0};
    cout<<wines(dp,a,0,n-1,1);
}