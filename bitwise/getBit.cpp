#include<bits/stdc++.h>
using namespace std;

int getIthBit(int n,int i){
    return (n>>i)&1;
}

int main(){
    int n,i;
    cin>>n>>i;

    cout<<getIthBit(n,i);
}