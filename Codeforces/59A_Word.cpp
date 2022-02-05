// https://codeforces.com/problemset/problem/59/A
#include <iostream>
#include<string>
#include <cctype>
using namespace std;
int main()
{
	string s;
    cin>>s;
    int n=0;

    for(char c: s){
        if(islower(c))
            n++;
        else
            n--;
    }

    for (char c: s)
    {
        if(n>=0)
            cout<<(char)tolower(c);
        else
            cout<<(char)toupper(c);
    }
    
	return 0;
}
