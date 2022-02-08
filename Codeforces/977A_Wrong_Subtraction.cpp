// https://codeforces.com/problemset/problem/977/A

#include<iostream>
using namespace std;

int main(){
    long n,k,count=0;
    cin>>n>>k;

    for(int i=k; i>0; i--){
        if(n%10 == 0){
            n /= 10;
        }
        else{
            n--;
        }
    }
    cout<<n<<endl;
return 0;
}