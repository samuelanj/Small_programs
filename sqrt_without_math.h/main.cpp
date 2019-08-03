#include <iostream>
#include <iomanip>
#include <conio2.h>
#include <windows.h>
#define M_SQRT(aux)((aux/2) + (cin/(2*aux)));
using std::cout;
using std::cin;
using std::endl;
using std::setprecision;

double raizQuadrada(double value); /* Protótipo da função raizQuadrada */

int main()
{
    double cin;

    std::cout << std::endl;
    textcolor(RED);
    std::cout << "******     ******     **         ******    **  **    **         ******    ******    ******    ******" << std::endl;Sleep(150);
    std::cout << "******     ******     **         ******    **  **    **         ******    ******    ******    ******" << std::endl;Sleep(150);
    std::cout << "**         **  **     **         **        **  **    **         **  **      **      **  **    **  **" << std::endl;Sleep(150);
    std::cout << "**         ******     **         **        **  **    **         ******      **      **  **    ******" << std::endl;Sleep(150);
    std::cout << "**         ******     **         **        **  **    **         ******      **      **  **    ******" << std::endl;Sleep(150);
    std::cout << "**         **  **     **         **        **  **    **         **  **      **      **  **    ****  " << std::endl;Sleep(150);
    std::cout << "******     **  **     ******     ******    ******    ******     **  **      **      ******    ** ** " << std::endl;Sleep(150);
    std::cout << "******     **  **     ******     ******    ******    ******     **  **      **      ******    **  **" << std::endl;Sleep(150);
    std::cout << std::endl;
    textcolor(WHITE);
    std::cout << "Enter square root: ";
    std::cin >> cin;
    if(cin == 0)
    {
        std::cout << cin << std::endl;
        return 0;
    }else
    textcolor(BLACK);
    textbackground(WHITE);
    std::cout
    << std::endl
    << std::setprecision(30)
    << "SQRT =" << " " <<raizQuadrada(cin)
    << std::endl;
    getch();
    return 0;
}
/*
 * Nome da função: raizQuadrada.
 * recebe como parâmetos um valor do tipo double (cin).
 * objetivo: faz a verificação da precisão com um for e logo
 * depois faz a chamada de uma define para efetuar os cálculos.
 * retorno: A função retorna um parâmetro flutuante (aux) contendo o resultado dos cálculos.
 */
double raizQuadrada(double cin) /* raizQuadrada recebe cin e retorna um double */
{
    int size;
    double aux = cin;

    for(size = 0; size < 20; size++) /* Qanto maior sizer, maior precision */
    {
       aux = M_SQRT(aux);
    }
    return (aux); /* retorna o valor para para a função main */
}

