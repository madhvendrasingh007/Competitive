// https://codeforces.com/problemset/problem/996/A

#include<iostream>
using namespace std;

int main(){
    int n,temp=0;

    int a[]={100,20,10,5,1};
    cin>>n;
    for(int i=0; i<5; i++)
    {
        temp+=n/a[i];
        n=n%a[i];
    }
    cout<<temp<<endl;
    return 0;
}