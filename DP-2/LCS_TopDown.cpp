#include<bits/stdc++.h>
using namespace std;

int lcs(string s1,string s2,int i,int j){
    if(i==s1.length() or j==s2.length()) return 0;
    if(s1[i]==s2[j]) return 1+lcs(s1,s2,i+1,j+1);
    int op1=lcs(s1,s2,i+1,j);
    int op2=lcs(s1,s2,i,j+1);
    return max(op1,op2);
}

int lcsTopDown(string s1,string s2,int i,int j,vector<vector<int> > dp){
    if(i==s1.length() or j==s2.length()) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(s1[i]==s2[j]) return dp[i][j]=1+lcsTopDown(s1,s2,i+1,j+1,dp);
    int op1=lcsTopDown(s1,s2,i+1,j,dp);
    int op2=lcsTopDown(s1,s2,i,j+1,dp);
    return dp[i][j]=max(op1,op2);
}

int main(){
    string s1="ABCD";
    string s2="ABEDG";
    vector<vector<int> > dp(s1.length(),vector<int>(s2.length(),-1));
    cout<<lcs(s1,s2,0,0)<<endl;
    cout<<lcsTopDown(s1,s2,0,0,dp);
}