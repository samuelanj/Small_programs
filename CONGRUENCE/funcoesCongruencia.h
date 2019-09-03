#include <iostream>
#include <locale.h>
#include <conio.h>
using namespace std;

int main();
void funcaoMenu(int opcao);


/**
  *  A função calculaMdc_B_1 calcula o mdc quado o B é igaul a 1.
  *  Rece um inteiro  valorA, valorB e valorMod
  *  A função passas os valores de valorA, valorB e valorMod por referência.
  */
void calculaMdc_B_1(int &valorA, int valorB, int &valorMod)
{
    int recebeValorA = valorA;
    int recebeValorMod = valorMod;
    char op;

    if (valorA > valorMod)
    {
        while ((valorA % valorMod) != 0)
        {
            int y = valorMod;
            cout <<" " << valorA << "|" << valorMod << endl;
            valorMod = valorA % valorMod;
            cout <<" " << valorMod << endl << endl;
            valorA = y;
        }
        cout <<" " << valorA << "|" << valorMod << endl
             <<" " << valorA%valorMod << endl;

        while ((valorA % valorMod) != 0) /* Enquanto o resto for diferente de 0 (zero) o laço fica "rodando".*/
        {
            int AUX_1 = valorA;
            int recebe_mod = valorMod;
            valorMod = valorA % valorMod; /* valorMod vai receber o resta da divisão de A pelo módulo, pois A é maior que o módulo.*/
            int quociente = valorA / recebe_mod;
            valorA = recebe_mod;

            cout << endl
                 << AUX_1 << " / " << recebe_mod << " = R = " << valorMod << endl;
            cout << " EQUAÇÃO: " << valorMod << " = " << AUX_1 << " - " << quociente << "*" << recebe_mod << endl
                 << endl;
        }
        cout << endl
             << " mdc de (" << recebeValorA << "," << recebeValorMod << ") = " << valorMod << endl;
        if (valorMod == 1)
        {
            cout << " LOGO HÁ SOLUÇÃO ÚNICA!" << endl;
            for (int i = 0; i < recebeValorMod; i++) /*  Como o valor de d foi igual a 1, logo a e m são primos relativos.Portanto, a solução está i = 0 a i < módulo. i < módulo <=> módulo - 1.*/
            {
                if ((((i * recebeValorA) - valorB) % recebeValorMod) == 0) /* Como o i irá de 0 até o módulo-1, e a solução está neste intervalo, teremos um i que, multiplicado pelo valor de A, menos B e dividido pelo modulo.*/
                {
                    cout << endl
                         << " SU = " << i << endl;
                    cout << " SG = SU + M*K" << endl;
                    cout << " SG = " << i << "+" << recebeValorMod << "*k, k E Z" << endl;
                }
            }
        }
        else
        {
            cout << " PORTANTO NÃO HÁ SOLUÇÃO ÚNICA!" << endl;
        }
        cout << endl;
    }
    else if (valorMod > valorA)
    {
        while ((valorMod % valorA) != 0)
        {
            int y = valorA;
            cout <<" " << valorMod << "|" << valorA << endl;
            valorA = valorMod % valorA;
            cout <<" " << valorA << endl << endl;
            valorMod = y;
        }
        cout <<" " << valorMod << "|" << valorA << endl
             <<" " << valorMod%valorA << endl;

        while ((valorMod % valorA) != 0)
        {
            int AUX_1 = valorMod;

            int recebe_X = valorA;
            valorA = valorMod % valorA;
            int quociente = valorMod / recebe_X;
            valorMod = recebe_X;
            cout << endl
                 << AUX_1 << " / " << recebe_X << " = R = " << valorA << endl;
            cout << " EQUAÇÃO: " << valorA << " = " << AUX_1 << " - " << quociente << "*" << recebe_X << endl
                 << endl;
        }
        cout << endl
             << endl;

        cout << " MDC DE (" << recebeValorMod << "," << recebeValorA << ") = " << valorA << endl;

        if (valorA == 1)
        {
            cout << " LOGO HÁ SOLUÇÃO ÚNICA!" << endl;
            for (int i = 0; i < recebeValorMod; i++)
            {
                if ((((i * recebeValorA) - valorB) % recebeValorMod) == 0)
                {
                    cout << endl
                         << " SU = " << i << endl;
                    cout << " SG = SU + M*K" << endl;
                    cout << " SG = " << i << "+" << recebeValorMod << "*k, k E Z" << endl;
                }
            }
        }
        else
        {
            cout << " PORTANTO NÃO HÁ SOLUÇÃO ÚNICA!" << endl;
        }
        cout << endl;
    }
    cout << endl
         << " Digite [S] para continuar, [M] para retornar ao menu principal: ";
    cin >> op;
    if ((op == 'S') || (op == 's'))
    {
        funcaoMenu(1);
    }
    else
    {
        system("cls");
        main();
    }
}
/**
  *  A função calculaMdc_B_Maior_1 calcula o mdc quado o B é maior que 1.
  *  Rece um inteiro  valorA, valorBe e valorMod
  *  A função passas os valores de valorA, valorB e valorMod por referência.
  */
void calculaMdc_B_Maior_1(int &valorA, int valorB, int &valorMod)
{
    int recebeValorA = valorA;
    int recebeValorMod = valorMod;
    char op;

    if (recebeValorA > recebeValorMod)
    {
        while ((valorA % valorMod) != 0)
        {
            int y = valorMod;
            cout <<" " << valorA << "|" << valorMod << endl;
            valorMod = valorA % valorMod;
            cout <<" " << valorMod << endl << endl;
            valorA = y;
        }
        cout <<" " << valorA << "|" << valorMod << endl
             <<" " << valorA%valorMod << endl;

        while ((valorA % valorMod) != 0)
        {
            int recebe_mod = valorMod;
            valorMod = valorA % valorMod;
            valorA = recebe_mod;
        }
        cout << endl
             << " MDC DE (" << recebeValorA << "," << recebeValorMod << ") = " << valorMod << endl;
        if (valorMod == 1)
        {
            cout << " A EQUAÇÃO TEM SOLUÇÃO ÚNICA!" << endl;

            for (int i = 0; i < recebeValorMod; i++)
            {
                if ((((i * recebeValorA) - valorB) % recebeValorMod) == 0)
                {
                    cout << endl
                         << " SU = " << i << endl;
                    cout << " SG = SU + M*K" << endl;
                    cout << " SG = " << i << "+" << recebeValorMod << "*k, k E Z." << endl;
                }
            }
        }
        else if ((valorMod > 1) && ((valorB % valorMod) != 0))
        {
            cout << " D NÃO DIVIDE B, LOGO NÃO HÁ SOLUÇÃO. " << endl;
        }
        else if ((valorMod > 1) && ((valorB % valorMod) == 0))
        {
            cout << " HÁ " << valorMod << " SOLUÇÕES, POIS D DIVIDE B." << endl;

            for (int i = 0; i < recebeValorMod; i++)
            {
                if ((((i * recebeValorA) - valorB) % recebeValorMod) == 0)
                {
                    cout << endl
                         << " SU = " << i << endl;
                    cout << " SG = SU + M*K" << endl;
                    cout << " SG = " << i << "+" << recebeValorMod << "*K, K E Z." << endl;
                }
            }
        }
        cout << endl;
    }
    else if (recebeValorMod > recebeValorA)
    {
        while ((valorMod % valorA) != 0)
        {
            int y = valorA;
            cout <<" " << valorMod << "|" << valorA << endl;
            valorA = valorMod % valorA;
            cout <<" " << valorA << endl << endl;
            valorMod = y;
        }
        cout <<" " << valorMod << "|" << valorA << endl
             <<" " << valorMod%valorA << endl;

        while ((valorMod % valorA) != 0) /* Enquanto que o resto da divisão do valor de valorMod por valorA for diferente de zero, o laço ficará se repetindo. */
        {
            int AUX_1 = valorMod;

            int recebe_X = valorA;
            valorA = valorMod % valorA;
            valorMod = recebe_X;
        }
        cout << endl
             << endl;

        cout << " MDC DE (" << recebeValorMod << "," << recebeValorA << ") = " << valorA << endl;

        if (valorA == 1)
        {
            cout << " A EQUAÇÃO TEM SOLUÇÃO ÚNICA!" << endl;
            for (int i = 0; i < recebeValorMod; i++)
            {
                if ((((i * recebeValorA) - valorB) % recebeValorMod) == 0)
                {
                    cout << endl
                         << " SU = " << i << endl;
                    cout << " SG = SU + M*K" << endl;
                    cout << " SG = " << i << "+" << recebeValorMod << "*k, k E Z." << endl;
                }
            }
        }
        else if ((valorA > 1) && ((valorB % valorA) != 0)) /* Faz a verificação se o resto da divisão de A pelo mod é diferente de zero, pois sendo logo não há solução.*/
        {
            cout << " D NÃO DIVIDE B, LOGO NÃO HÁ SOLUÇÃO. " << endl;
        }
        else if ((valorA > 1) && ((valorB % valorA) == 0)) /* Faz a verificação se o resto da divisão é igual a zero e se o valor de A é maior que 1.*/
        {
            cout << " D DIVIDE B, PORTANTO HÁ " << valorA << " SOLUÇÕES" << endl;

            for (int i = 0; i < recebeValorMod; i++)
            {
                if ((((i * recebeValorA) - valorB) % recebeValorMod) == 0)
                {
                    cout << endl
                         << " SU = " << i << endl;
                    cout << " SG = SU + M*K" << endl;
                    cout << " SG = " << i << "+" << recebeValorMod << "*K, K E Z." << endl;
                }
            }
        }
    }
    cout << endl
         << "Digite [S] para continuar ou [M] para retornar ao menu: ";
    cin >> op;
    if ((op == 'S') || (op == 's'))
    {
        funcaoMenu(1);
    }
    else
    {
        system("cls");
        main();
    }
}
