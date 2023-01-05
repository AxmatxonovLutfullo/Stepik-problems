#include <iostream>
using namespace std;
 int main(){
    int n,i = 2;
    cin >> n;
    while (n % i != 0) {
        i = i + 1;
    } 
     cout << i;
    return 0;
 }