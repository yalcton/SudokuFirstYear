#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <vector>

int main() {
	vector<int> v(5);
	v[0] = 16;
	v[1] = 2;
	v[2] = 77;
	v[3] = 40;
	v[4] = 12;

	std::cout << v.front() << std::endl;
	std::cout << v.back() << std::endl;
	std::cout << v.at(2) << std::endl;

	void mfind(int n, const std::vector<int>& v) {
		bool mfound;
		mfound = false;
		//for i in v, if n == i then return the INDEX (remember it starts from zero).
		for (int i = 0; i < v.size(); i++) {
			if v[i] == n{
				std::cout << "GG it works" << std::endl;
				mfound = true;

			}
		}
	}

	mfind(16, v);
	return 0;

}