#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[100][100];
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			if (i + j == n - 1 || i == n / 2 || i == j || j == n/2) cout << "*" << " ";
			else cout << "." << " ";
		}
		cout << endl;
	}
	return 0;
}