// https://codeforces.com/problemset/problem/427/A

#include<iostream>
using namespace std;

int main(){
    int n,i,s,temp = 0, counter = 0;
    cin >> n;

    while(n--)
    {
        cin >> s;
        if(s >= 0)
            temp += s;
        else
        {
            if(temp == 0)
                counter++;
            else
                temp--;
        }
    }
    cout << counter << endl;
return 0;
}