// https://codeforces.com/problemset/problem/467/A

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    int count=0;

    while(t--){
        int p,q;
        cin>>p>>q;

        if(q-p>=2)
            count++;
    }

    cout<<count;
return 0;
}