/*
��蕶
�����N�͎��삵�������Ă���H�ׂ邱�Ƃɂ��܂����B
�����N�͔M�X�̂����Ă����D���Ȃ̂ŁA�ł��Ă����̂����Ă�����H�ׂ܂��B
���ꂼ��̂����Ă������b�O�ɂł��������^������̂ŁA��Ԃł����Ă̂����Ă������b�O�ɂł������o�͂��ĉ������B
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