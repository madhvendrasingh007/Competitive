// https://codeforces.com/problemset/problem/1030/A

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
        int t;
        cin>>t;

        if(t==1){
            cout<<"HARD"<<endl;
            return 0;
        }
        t--;
    }
    cout<<"EASY"<<endl;
return 0;
}