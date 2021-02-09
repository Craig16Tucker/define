#include "Lib.h"

void main()
{
    setlocale(LC_ALL, "RUS");
    int x;
    int y;
    int s;

    cout << "Введите первое число";
    input x;
    print x;

    cout << "Введите второе число";
    input y;
    print y;

    MIN(x, y);

    cout << "Введите степень числа число";
    input s;
    print s;

    square(x, y, s);

    parity(x);
}
