// https://codeforces.com/problemset/problem/158/A
#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int tot=0;

    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
        if(arr[i]>=arr[k] && arr[i]>0)
            tot++;
    }
    cout<<tot<<endl;
    
return 0;
}
