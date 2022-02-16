// https://codeforces.com/problemset/problem/1294/A

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,n;
        cin>>a>>b>>c>>n;

        int temp=a+b+c+n;
        if(temp%3!=0){
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            int p=temp/3;
            if(a<=p&&b<=p&&c<=p)
                cout<<"YES"<<endl;
            else 
                cout<<"NO"<<endl;
        }

    }
return 0;
}