// https://codeforces.com/problemset/problem/1367/B

#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int main()
{   int a,t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int q=0,w=0;

        for(int i=0;i<n;i++){
  	        cin>>a;
  	        if(i%2==0&&a%2==1) 
                q++;
	        else if(i%2==1&&a%2==0) 
                w++; 
        }

        if(q==w) 
            cout<<q<<endl;
        else if(q!=w)  
            cout<<-1<<endl;
    }
 return 0;
 } 