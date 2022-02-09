#include<iostream>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin>>n;

    if(n%2==0)
        cout<<n/2<<endl;
    else    
        cout<<-(n+1)/2;
return 0;
}