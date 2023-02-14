#include<bits/stdc++.h>
using namespace std;

int countSub(string a,string b,int m,int n){
    if((m==-1 and n==-1) or n==-1) return 1;
    if(m==-1) return 0;

    if(a[m]==b[n]) return countSub(a,b,m-1,n-1)+countSub(a,b,m-1,n);
    return countSub(a,b,m-1,n);
}

int countSubTopDown(int dp[][100],string a,string b,int m,int n){
    if((m==-1 and n==-1) or n==-1) return 1;
    if(m==-1) return 0;
    if(dp[m+1][n+1]!=-1) return dp[m+1][n+1]; 
    if(a[m]==b[n]) return dp[m+1][n+1]=countSubTopDown(dp,a,b,m-1,n-1)+countSubTopDown(dp,a,b,m-1,n);
    return dp[m+1][n+1]=countSubTopDown(dp,a,b,m-1,n);
}

int main(){
    string a="ABCECDG";
    string b="ABC";
    int dp[100][100]={-1};

    cout<<countSub(a,b,a.size()-1,b.size()-1)<<endl;
    cout<<countSubTopDown(dp,a,b,a.size()-1,b.size()-1)<<endl;
}