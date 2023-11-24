#include <iostream>
using namespace std;

class tong {
	private:
		int ketqua;
	public:
		tong(int ketquabandau) {
			ketqua = ketquabandau;
		}
	void add(int so) {
		ketqua += so;
	}
	int layketqua() const {
        return ketqua;
    }
};

int main() {
	int a, b;
	cin >> a >> b;
	tong cong(a);
	cong.add(b);
	cout << cong.layketqua();
	return 0;
	
}
