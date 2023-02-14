#include<bits/stdc++.h>
using namespace std;

int knapsack(int wts[],int prices[],int n,int w){
    if(n==0 or w==0) return 0;
    int inc=0,exc=0;
    if(wts[n-1]<=w) inc=prices[n-1]+knapsack(wts,prices,n-1,w-wts[n-1]);
    exc=knapsack(wts,prices,n-1,w);
    return max(inc,exc); 
}

int main(){
    int wts[]={2,7,3,4};
    int prices[]={5,20,20,10};
    int n=4;
    int w=11;
    cout<<knapsack(wts,prices,n,w)<<endl;
    return 0;
}