#include <iostream>
using namespace std;

int extended_euclid(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int g = extended_euclid(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}
int mod_inverse(int a, int m) {
    if (m <= 0) return -1;                    // Trường hợp modulo không hợp lệ
    
    int x, y;
    int g = extended_euclid(a, m, x, y);
    
    if (g != 1) {
        return -1;                           
    }
    return (x % m + m) % m;
}
int main() {
    int a, m;
    cout << "Nhap cac cap (a m). Nhap so am de ket thuc.\n";
    while (cin >> a >> m) {
        if (a < 0 || m <= 0) break;           
        
        int inv = mod_inverse(a, m);
        
        if (inv == -1) {
            cout << "Khong ton tai nghich dao modulo vi gcd(" << a << ", " << m << ") != 1." << endl;
        } else {
            cout << "Nghich dao modulo cua " << a << " theo modulo " << m << " la: " << inv << endl;
        }
    }
    return 0;
}
