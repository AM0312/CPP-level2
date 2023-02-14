#include<bits/stdc++.h>
using namespace std;

bool powerOfTwo(int n){
    return !(n&(n-1));
}

int main(){
    cout<<powerOfTwo(3);
}