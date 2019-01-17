#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x,y,c;
	std::cin >> x>>y;
	       c = (~x&y);
	       y = (x&~y);
	       x = ~(~c&~y);
	       std::cout << x << std::endl;
	return 0;
}
