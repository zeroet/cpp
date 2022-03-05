#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main()
{
	std::vector<int> vec(10);
	for (int i = 0; i < vec.size(); ++i)
	{
		cout << vec[i] << endl;
	}
	vector <int> vec(10, 2);
	for (int num : vec)
	{
		cout << num << endl;
	}

	std::vector<int> vec;
	vec.push_back(10);
	cout << vec[0] << endl;
	cout << vec.size() << endl;
}
