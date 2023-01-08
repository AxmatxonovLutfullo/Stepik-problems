#include <iostream>
using namespace std;
int main() {
    int n,f,i = 1,first = 0,second = 1;
    cin >> n;
    while (n > f) {
      f =  first + second;
      first = second;
      second = f;
      i++;
    }
    if (f > n) {
      cout << "-1";
    }else cout << i;
    return 0;
}