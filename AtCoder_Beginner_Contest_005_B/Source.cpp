/*
問題文
高橋君は試作したたこ焼きを食べることにしました。
高橋君は熱々のたこ焼きが好きなので、できてすぐのたこ焼きから食べます。
それぞれのたこ焼きが何秒前にできたかが与えられるので、一番できたてのたこ焼きが何秒前にできたか出力して下さい。
*/

#include<iostream>
#include<vector>
#include<algorithm>

int main() {
	int num;
	std::cin >> num;
	std::vector<int> v(num);

	for (int& x:v) { 
		std::cin >> x;
	}

	decltype(v)::iterator it = std::min_element(v.begin(), v.end());

	std::cout << *it << std::endl;
	return 0;
}