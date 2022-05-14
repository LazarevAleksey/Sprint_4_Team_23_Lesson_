#include "carpenter.h"
#include "square_calculation.h"

Carpenter::Carpenter()
    :count_polock_(0)
{
}

int Carpenter::CalcShelves(Wall wall) {
    /*double  t = CalcSquare(wall.GetHeight(), wall.GetWidth());
    int res = static_cast<int>(t);
    return res;*/
    return static_cast<int>(CalcSquare(wall.GetHeight(), wall.GetWidth()));
}// Определите методы класса здесь