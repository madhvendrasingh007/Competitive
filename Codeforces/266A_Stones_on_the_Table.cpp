//https://codeforces.com/problemset/problem/266/A

#include<iostream>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    string b;
    cin>>b;

    for(int i=0;i<n;i++){
        if(b[i] == b[i+1])
            count++;
    }

    cout<<count;
return 0;
}