// https://codeforces.com/problemset/problem/431/A

#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,temp=0;
    cin>>a>>b>>c>>d;

    string str;
    cin >> str;    

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == '1')
            temp+=a;
        if(str[i] == '2')
            temp+=b;
        if(str[i] == '3')
            temp+=c;
        if(str[i] == '4')
            temp+=d;
 
    }

    cout<<temp;
return 0;
}