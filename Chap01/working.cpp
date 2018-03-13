// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main( int argc, char ** argv )
{
	int a[] = {1,2,3,4,5};
	for (int i : a) 
	{
		printf("Character %d\n", a[i]);
	}
	return 0;
}
