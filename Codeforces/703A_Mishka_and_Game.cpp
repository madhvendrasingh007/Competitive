// https://codeforces.com/problemset/problem/703/A

#include<iostream>
using namespace std;

int main(){
    int t,m,c,mishka=0,chris=0;
    cin>>t;

    while(t--){
        cin>>m>>c;
        if(m>c)
            mishka++;
        else if(c>m)
            chris++;
    }
    if(mishka>chris)
        cout<<"Mishka";
    else if(mishka<chris)
        cout<<"Chris";
    else    
        cout<<"Friendship is magic!^^";
return 0;
}