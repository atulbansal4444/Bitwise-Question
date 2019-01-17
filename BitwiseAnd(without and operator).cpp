#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x,y;
	std::cin >> x>>y;
	       x = ~(~x|~y);
	       std::cout << x << std::endl;
	return 0;
}
