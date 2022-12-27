#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s;
	cin >> s;

	const auto& n = s.length();

	auto isP = bool{ true };
	for (auto i = 0; i < n; ++i) {
		const auto& j = n - i - 1;
		if (j <= i) {
			break;
		}

		if (s[i] != s[j]) {
			isP = false;
			break;
		}
	}

	cout << (isP ? 1 : 0);

	return 0;
}