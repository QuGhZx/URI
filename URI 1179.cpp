#include <iostream>
using namespace std;


int main() {
	int par[5], impar[5], n, im=0, pa=0;
	for (int i = 0; i < 15; i++) {
		cin >> n;
		if (n % 2 != 0) {
			if (im == 5) {
				for (int i = 0; i < im; i++)
					cout << "impar[" << i << "] = " << impar[i] << endl;
				im = 0;
			}
			impar[im] = n;
			im++;
		}
		if (n % 2 == 0) {
			if (pa == 5) {
				for (int i = 0; i < pa; i++)
					cout << "par[" << i << "] = " << par[i] << endl;
				pa = 0;
			}
			par[pa] = n;
			pa++;
		}
	}
	for (int i = 0; i < im; i++)
		cout << "impar[" << i << "] = " << impar[i] << endl;
	for (int i = 0; i < pa; i++)
		cout << "par[" << i << "] = " << par[i] << endl;
	system("pause");
	return 0;
}

