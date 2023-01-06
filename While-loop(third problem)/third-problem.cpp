#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n,k = 0,r;
    cin >> n;
    while ((r = pow(2,k)) <= n) {
        k = k+1;
        cout << r << " ";
    }
    return 0;
}