#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <iostream>

int mfind(int n, const std::vector<int>& v)
{
		int mfound = -1;
		//for i in v, if n == i then return the INDEX (remember it starts from zero).
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i] == n)
			{
				mfound = i;
			}
		}
		
		return mfound;
}

bool check_sequence(const std::vector<int>& v)
{
	for (int i = 1; i < v.size() + 1; i++)
	{
		if (mfind(i, v) == -1)
		{
			return false;
		}
	}
	
	return true;
}

int main() 
{
	std::vector<int> v = { 16, 2, 77, 40, 12071 };
	std::vector<int> v2 = { 4, 2, 1, 3, 5 };
	std::vector<int> v3 = { 2, 3, 1, 4};
	std::vector<int> v4 = { 4, 3, 1, 4};

	std::cout << check_sequence(v) << std::endl;
	std::cout << check_sequence(v2) << std::endl;
	std::cout << check_sequence(v3) << std::endl;
	std::cout << check_sequence(v4) << std::endl;
	
	return 0;
	
}