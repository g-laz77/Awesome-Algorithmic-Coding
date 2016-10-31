//Euclid Algorithm
#include <iostream>

using namespace std;

int gcdFunction(int x, int y)
{
  while(1)
  {
	  if(x%=y && y%=x)
		  break;
  }
  return x + y;
}

int main()
{
	int x, y;
	cin>>x;
	cin>>y;
	cout << "GCD of numbers " << x << " and " << y << " is " << gcdFunction(x, y) << endl;
	return 0;
}

// Output is GCD of two Given Numbers x & y
