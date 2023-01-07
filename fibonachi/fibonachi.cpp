#include <iostream>
using namespace std;
int main() {
    int first=0, second=1, fn=1, i=1, n;
    cin >> n;
    while (i < n) 
    {        
        fn = first + second;
        first = second;
        second = fn;
        i++;
    }
    cout << fn;
    return 0;
}