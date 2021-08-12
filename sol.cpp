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
		bool palindrome = true;
		// check the string if it's a palindrome or not
		for (int i = 0; i < (int) s.size() / 2; i++) {
			if (s[i] != s[(int) s.size() - 1 - i]) {
				palindrome = false;
				break;
			}
		}
		// if it's not a palindrome, then output the string itself, otherwise -1
		cout << (!palindrome ? s : "-1") << '\n';
	}
	return 0;
}
