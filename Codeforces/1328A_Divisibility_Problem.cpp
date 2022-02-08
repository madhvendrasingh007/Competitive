// https://codeforces.com/problemset/problem/1328/A

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;

        if(a%b == 0)
            cout<<0<<endl;
        else{
            int temp;
            temp = a%b;
            cout<<b-temp<<endl;
        }
    }
return 0;
}