#include <iostream>
#include "wall.h"
#include "carpenter.h"
//#include "square_calculation.h"

using namespace std;


int main() {
	Carpenter jack;
	Wall wall(3.5, 2.45);
	int res= jack.CalcShelves(wall);
	cout << "jack.CalcShelves(wall) = "<< res  << endl;
	// jack.CalcShelves(wall) == 4
	return 0;
}