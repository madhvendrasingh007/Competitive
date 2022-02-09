//https://codeforces.com/problemset/problem/231/A

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;

    while(n--){
        int a,b,c;
        cin>>a>>b>>c;

        if(a+b==2 || b+c==2 || a+c==2)
            count +=1;
        
    }
    cout<<count;
    return 0;
}