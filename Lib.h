#include <iostream>

#define MIN(a,b) (a < b)? cout << "\nПервое число меньше второгo\n" : cout <<  "\nПервое число больше второгo\n"

#define square(a, b, s) (s !=2)? cout << "\nРезультат: "<< pow(a,b) : cout << "\nРезультат: "<< pow(a,2)

#define parity(a) (a % 2 == 0)? cout << "\nЧисло парное" : cout << "\nЧисло непарное";

#define input cin >> 
#define print cout <<

using std::cout;
using std::string;
using std::cin;

 