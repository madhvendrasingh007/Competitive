// https://codeforces.com/problemset/problem/58/A
#include <iostream>

using namespace std;


int main() {
    string a, b = "hello";
    cin >> a;

    int count = 0, temp = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b[count]) {
            count++;
            temp++;
            
            if (temp == 5) {
                break;
            }
        }
    }
    
    if (temp == 5) 
        cout << "YES";
    else 
        cout << "NO";
    
}
