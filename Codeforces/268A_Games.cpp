//https://codeforces.com/problemset/problem/268/A

#include<iostream>
using namespace std;

int main(){
    int n,j,i,temp=0;
    cin>>n;

    int a[n],b[n];
    for ( i=0; i<n; i++) 
        cin>>a[i]>>b[i];
    for (i=0; i<n; i++ )
        for( j=0; j<n; j++)
    {
         if ( i!=j && a[i]==b[j]) 
            temp++;
    }
    cout<<temp<<endl;
    return 0;


} 