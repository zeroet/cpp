#include <iostream>

using namespace std;

void	count(int n)
{
	cout << n << endl;
	count(n-1);
}

int main()
{
	count (10);
}



