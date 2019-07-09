#include <iostream>
#include "mdc.h"

using namespace std;


int main()
{
     int x, y, t, i;
     cout << "Digite os 2 valores para serem calculados o mdc: " << endl;
     cin >> x >> y ;
     t = x;
     i = y; 
     soma(x, y);
     cout << "O mdc de ("<< t <<","<< i << ")" << " = " << y << endl;
    return 0;
}