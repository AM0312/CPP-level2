#include<bits/stdc++.h>
using namespace std;

int ladders(int n){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    return ladders(n-1)+ladders(n-2)+ladders(n-3);
}

int main()
{
    int n;
    cin>>n;
    cout<<ladders(n)<<endl;
    return 0;
}