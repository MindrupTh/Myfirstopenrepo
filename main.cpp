#include "myHeader.h"
#include <iostream>

using namespace New;
using namespace std;

void my_class::present_figure()
{
	cout << "Present figure" << endl;
}

int main()
{
	my_class mc;
	mc.present_figure();
	//cout << "Hello World!" << endl;
	return 0;
}
