#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x;
	cin>>x;
	int y;
	y = (x>>31)|(!(!x));
	std::cout << y << std::endl;
	return 0;
}
