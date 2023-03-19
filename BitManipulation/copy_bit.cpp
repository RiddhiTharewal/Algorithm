// C++ program to rearrange array in alternating
// C++ program to copy set bits in a given
// range [l, r] from y to x.
#include <bits/stdc++.h>
using namespace std;


void copySetBits(unsigned &x, unsigned y,
				unsigned l, unsigned r)
{

if (l < 1 || r > 32)
	return ;

// Traverse in given range
for (int i=l; i<=r; i++)
{
	int mask = 1 << (i-1);
	if (y & mask)
		x = x | mask;
}
}

// Driver code
int main()
{
unsigned x = 10, y = 13, l = 1, r = 32;
copySetBits(x, y, l, r);
cout << "Modified x is " << x;
return 0;
}
