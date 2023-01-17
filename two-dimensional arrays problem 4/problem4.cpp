#include <iostream>
using namespace std;
int main() {
    int n,m,z1 = 0,z2 = 0;
    cin >> n >> m;
    int a[100][100];    
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m; j++) {
            cin >> a[i][j];   
        }
    }
    cin >> z1 >> z2;
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m; j++) {
            if (i == z1) swap(a[i][j],a[i][z2]);
        }
    }
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}