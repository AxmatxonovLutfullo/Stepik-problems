#include <iostream>
#include <vector>
using namespace std;
int main() {
int n,min = 1000;
cin >> n;
vector <int> a(n);
for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (min > a[i] && a[i] > 0) {
            min = a[i];
        }
} 
cout << min;
return 0;
}