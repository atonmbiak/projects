#include <iostream>
#include "IntVector.h"

using namespace std;

int main() {
	const unsigned LEN =10;
	IntVector vector(LEN);
	for (int i=0; i<vector.size(); i++)
	{
		vector.at(i)=i;
	}
	vector.out();

	vector.at(1) = 1001;
	cout << vector.at (1) <<'\n';
	cout << vector.at (10) <<'\n';

	system ("pause");
	return 0;
}