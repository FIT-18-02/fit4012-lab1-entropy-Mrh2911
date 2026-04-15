#include <iostream>

using namespace std;

// Giữ nguyên hàm gcd
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Giữ nguyên hàm extended_euclid
int extended_euclid(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1 = 0, y1 = 0;
    int g = extended_euclid(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}

// PHẢI CÓ ĐOẠN NÀY - Xóa hết TODO cũ đi
int mod_inverse(int a, int m) {
    int x, y;
    int g = extended_euclid(a, m, x, y);
    
    if (g != 1) {
        return -1;
    }

    // Công thức chuẩn để xử lý số dư âm trong C++
    return (x % m + m) % m;
}

int main() {
    int a, m;
    if (!(cin >> a >> m)) return 0;

    int inv = mod_inverse(a, m);
    if (inv == -1) {
        cout << "Khong ton tai nghich dao modulo vi gcd(a, m) != 1." << endl;
    } else {
        cout << inv << endl;
    }
    return 0;
}
