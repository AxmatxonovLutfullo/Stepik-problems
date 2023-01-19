#include <iostream>
using namespace std;
int main(){
	int n,m,k,z = 0,r = 0;
	cin >> n >> m;
	int a[n][m];
	for (int i = 0;i < n; i++){
		for (int j = 0;j < m;j++) cin >> a[i][j];
	}
 	cin >> k;
 	if (k > m) {cout << r; return 0;}
 	for (int i = 0;i < n;i++) {
 		for (int j = 1;j < m;j++) {
 			if (a[i][j] == 0 && a[i][j] == a[i][j - 1]) z++;
 			else z = 1;
            if (z == k) {r = ++i; break;}
 		}
 		if (z == k) break;       
 	}
 	cout << r;
	return 0;
}