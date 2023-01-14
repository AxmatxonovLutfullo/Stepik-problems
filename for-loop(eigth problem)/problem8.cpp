#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, i, j = 0;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i - 1] != a[i])
        {
            j++;
        }
    }
    cout << j;
    return 0;
}