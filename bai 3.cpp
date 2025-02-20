#include <iostream>
using namespace std;
int gcd(int a, int b) {
    if (b == 0) 
        return a;
    return gcd(b, a % b); 
}
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a, b;
    cout << "Nhap hai so nguyen: ";
    cin >> a >> b;

    cout << "GCD (Uoc chung lon nhat) cua " << a << " va " << b << " la: " << gcd(a, b) << endl;
    cout << "LCM (Boi chung nho nhat) cua " << a << " va " << b << " la: " << lcm(a, b) << endl;

    return 0;
}
