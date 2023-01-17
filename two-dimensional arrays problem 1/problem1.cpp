#include <iostream>
using namespace std;
int main(){
	int n,m,max;
	cin >> n >> m;
	int a[100][100];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) cin >> a[i][j];
	}
	max = a[0][0];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) if(max < a[i][j]) max = a[i][j];
    }
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
            if (a[i][j] == max) {cout << i << " " << j;return 0;}        
	    }
    }
    return 0;
}