// https://codeforces.com/problemset/problem/1374/A

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x,y,n;
        cin>>x>>y>>n;

        long long res = x*(n/x)+y;
        if (res > n){
            res -= x ;
        }
        cout <<res<< endl;
    }
return 0;
}