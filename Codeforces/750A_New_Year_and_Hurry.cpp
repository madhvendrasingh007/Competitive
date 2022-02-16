// https://codeforces.com/problemset/problem/750/A

#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
 
    k = 240-k;
    int temp = 0;
    for(int i=1;i<=n;i++) {
        k-=(5*i);
        temp+=(k>=0);
    }
    cout<<temp<<endl;
return 0;
}