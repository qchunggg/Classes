#include<iostream>

using namespace std;

class TinhToan {
public:
    int gtnn(int a, int b) {
        return (a < b) ? a : b;
    }
    
    int gttd(int x) {
        return (x < 0) ? -x : x;
    }
};

class TinhXau {
private:
    TinhToan tinhtoan;

public:
    int tinhchiphi(const string& s) {
        int cost = 0;

        for (int i = 0; i < s.length() / 2; i++) {
            int j = s.length() - 1 - i;

            if (s[i] != s[j]) {
                cost += tinhtoan.gtnn(tinhtoan.gttd(s[i] - s[j]), 26 - tinhtoan.gttd(s[i] - s[j]));
            }
        }

        return cost;
    }
};

int main() {
    string input;
    cout << "Nhap xau: ";
    cin >> input;

    TinhXau tinhxau;
    int result = tinhxau.tinhchiphi(input);

    cout << "Chi phi nho nhat de bien xau thanh xau tuan hoan la: " << result << endl;

    return 0;
}

