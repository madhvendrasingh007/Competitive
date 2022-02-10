// https://codeforces.com/problemset/problem/110/A

#include<iostream>
using namespace std;

int main()
{
    long long int n, count = 0;
    cin >> n;
    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            count++;
        }
        n = n / 10;
    }
    if (count == 4 || count == 7)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}