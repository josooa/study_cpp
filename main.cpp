#include<stdio.h>


int wcscmp_my_ver(const wchar_t* left, const wchar_t* right) {
	int count = 0;
	while (left[count] != 0 || right[count] != 0) {
		if (left[count] == right[count]) {
			++count;
			continue;
		}
		else
			break;
	}
	if (left[count] == right[count])
		return 0;
	else if (left[count] < right[count])
		return -1;
	else if (left[count] > right[count])
		return 1;

}


int main() {
	int k = wcscmp_my_ver(L"gbd", L"abcd");
	printf("%d", k);

}