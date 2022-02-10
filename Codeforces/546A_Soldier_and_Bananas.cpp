#include<iostream>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    long long count =0;

    for(int i=1;i<=w;i++){
        count += (k*i);
    }
    if(count<=n)
        cout<<0<<endl;
    else
        cout<<count-n;
return 0;
}