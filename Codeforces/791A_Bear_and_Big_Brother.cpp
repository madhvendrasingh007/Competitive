// https://codeforces.com/problemset/problem/791/A

#include<iostream>
using namespace std;

int main(){
    int a,b,temp=0;
    cin>>a>>b;
    
    if(a>b)
        temp=0;
    else
        while(a<=b)
        {
            a=a*3;
            b=b*2;
            temp++;
        }
    cout<<temp<<endl;
    return 0;
return 0;
}