// https://codeforces.com/problemset/problem/71/A

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    string s;
    while (n--)
    {
        cin >> s;
        if (s.length() > 10)
            cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
        else
            cout << s << endl;
    }
return 0;
}