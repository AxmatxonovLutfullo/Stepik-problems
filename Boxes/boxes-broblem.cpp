#include <iostream>
using namespace std;
int main() {
    int a1,b1,c1,a2,b2,c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    // ставим цифра в поорядке возврастания 1-ая коробка
    if (a1>b1) swap(a1,b1);
    if (a1>c1) swap(a1,c1);
    if (b1>c1) swap(b1,c1);
    // ставим цифра в поорядке возврастания 2-ая коробка
    if (a2>b2) swap(a2,b2);
    if (a2>c2) swap(a2,c2);
    if (b2>c2) swap(b2,c2);
    // сравниваем их
    if (a1 == a2 && b1 == b2 && c1 == c2) {
            cout << "Boxes are equal";
        }else if(a1 <= a2 && b1 <= b2 && c1 <= c2) {
                cout << "The first box is smaller than the second one";
        }else if(a1 >= a2 && b1 >= b2 && c1 >= c2) {
                    cout << "The first box is larger than the second one";
        }else cout << "Boxes are incomparable";       
  return 0;
}