#include <iostream>

using namespace std;

void calcMdc(int &valorA, int &valorB)
{
    int aux1 = valorA, aux2 = valorB;

    if (valorA > valorB)
    {

        while ((valorA % valorB) != 0)
        {
            int y = valorB;
            cout <<" " << valorA << "|" << valorB << endl;
            valorB = valorA % valorB;
            cout <<" " << valorB << endl << endl;
            valorA = y;
        }
        cout <<" " << valorA << "|" << valorB << endl
             <<" " << valorA%valorB << endl << endl
             << " MDC de (" << aux1 << "," << aux2 << ") = " << valorB << endl;
    }
    else if(valorA < valorB)
    {
       while ((valorB % valorA) != 0)
        {
            int y = valorA;
            cout <<" " << valorB << "|" << valorA << endl;
            valorA = valorB % valorA;
            cout <<" " << valorA << endl << endl;
            valorB = y;
        }
        cout <<" " << valorB << "|" << valorA << endl
             <<" " << valorB%valorA << endl << endl
             << " MDC de (" << aux2 << "," << aux1 << ") = " << valorA << endl;
    }
    else
    {
        cout << " MDC DE (" << aux1 << "," << aux2 << ") = " << valorA << endl;
    }
}
