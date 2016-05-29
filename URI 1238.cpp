//Problem #1238 solution URI c++ Qu Gh
//This might not be the best answer which isn't, really, but it works!
#include <iostream>
using namespace std;

int main() {
	int num, cnt=0; char first[50], second[50], f=0, s=0, temp;
	cin >> num;
	cin.get(temp);
	while (num--){
		while (cin.get(temp), temp != ' ' && temp !='\n') {
			first[f] = temp;
			++f;
		}
		while (cin.get(temp), temp != ' ' && temp!='\n') {
			second[s] = temp;
			++s;
		}
		while(cnt!=f && cnt!=s){
			cout << first[cnt] << second[cnt]; ++cnt;
		}
		if (cnt < s) {
			for (int i = cnt; i < s; ++i)
				cout << second[i];
		}
		else if (cnt < f) {
			for (int i = cnt; i < f; ++i)
				cout << first[i];
		}
		cout << endl; f = 0; s = 0; cnt = 0;
	}
	system("pause");
	return 0;
}
