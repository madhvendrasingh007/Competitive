//https://codeforces.com/problemset/problem/200/B

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int t;
    cin>>t;

    int x = t;
    double sum=0;

    while(t--){
        int n;
        cin>>n;
        sum += n;
    }
    cout<<fixed<<setprecision(12)<<sum/x;
return 0;
}