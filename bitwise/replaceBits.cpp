#include<bits/stdc++.h>
using namespace std;

void clearRange(int &n,int i,int j){
    int a=-1<<(j+1);
    int b=1<<i-1;
    int mask=a|b;
    n=n&mask;
}

void replaceBits(int &n,int m,int i,int j){
    clearRange(n,i,j);
    int mask=m<<i;
    n=n|mask;
}

int main(){
    int n,m,i,j;
    n=1024;
    m=21;
    i=2;
    j=6;
    replaceBits(n,m,i,j);
    cout<<n;
}