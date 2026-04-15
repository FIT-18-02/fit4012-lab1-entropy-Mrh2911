#include <iostream>

using namespace std;

// Hàm tìm ước chung lớn nhất (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Hàm Euclid mở rộng
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

// Hoàn thiện hàm mod_inverse
int mod_inverse(int a, int m) {
    int x, y;
    int g = extended_euclid(a, m, x, y);
    
    // Nếu gcd(a, m) != 1 thì không tồn tại nghịch đảo modulo
    if (g != 1) {
        return -1;
    }

    // Vì x có thể âm, ta cần đưa nó về khoảng [0, m-1]
    return (x % m + m) % m;
}

int main() {
    int a = 0, m = 0;
    cout << "Nhap a, m: ";
    cin >> a >> m;

    int inv = mod_inverse(a, m);

    if (inv == -1) {
        cout << "Khong ton tai nghich dao modulo vi gcd(a, m) != 1.\n";
    } else {
        cout << "Nghich dao cua " << a << " mod " << m << " la: " << inv << '\n';
        // Sử dụng 1LL để tránh tràn số khi nhân (long long)
        cout << "Kiem tra: " << a << " * " << inv << " % " << m
             << " = " << (1LL * a * inv % m) << '\n';
    }

    return 0;
}
