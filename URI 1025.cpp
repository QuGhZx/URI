//URI Problem #1025 "Where is the Marble?" C++
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int q, n, temp, kebab=0; vector <int> num;
	cin >> n >> q;
	while (n != 0 || q != 0) {
		for (int i = 0; i < n; ++i) {
			cin >> temp; num.push_back(temp);
		}
		sort(num.begin(), num.end());
		cout << "CASE# " << ++kebab << ":" << endl;
		for (int i = 0; i < q; ++i) {
			cin >> temp;
			int pos = find(num.begin(), num.end(), temp) - num.begin();
			
			if (pos==n)
				cout << temp << " not found\n";
			else
				cout << temp << " found at " << pos+1 << endl;
		}
		num.clear(); 
		cin >> n >> q;
	}
	system("pause");
	return 0;
}
