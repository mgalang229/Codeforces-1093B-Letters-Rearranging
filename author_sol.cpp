#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		// sort the string in lexicographical order
		sort(s.begin(), s.end());
		if (s[0] == s.back()) {
			// if all of the letters of the string are equal, then output -1
			cout << -1;
		} else {
			// otherwise, the string itself
			cout << s;
		}
		cout << '\n';
	}
	return 0;
}
