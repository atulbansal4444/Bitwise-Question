#include<iostream>
using namespace std;
int main()
{
	int n,*arr,x=0;
	cin>>n;
	arr =new int[n];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		x=x^arr[i];
	}

	std::cout << x << std::endl;
	return 0;
}