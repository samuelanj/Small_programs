#include <iostream>
#include <conio.h>

using namespace std;
int main();

void funcaoMenu(int opcao)
{
    int valorA, valorB, valorMod;

    switch (opcao)
    {

    case 1:
        system("cls");
        int OP;

        textcolor(LIGHTBLUE);
        textbackground(WHITE);
        gotoxy(20, 4);
        cout << "                                                   ";
        gotoxy(20, 5);
        cout << "         CALCULAR SOLUÇÕES DE CONGRUÊNCIA          ";
        gotoxy(20, 6);
        cout << "                                                   ";

        textcolor(WHITE);
        textbackground(WHITE + 29);
        gotoxy(20, 8);
        cout << "                                                   ";
        gotoxy(20, 9);
        cout << "              1 - CALCULAR PARA B = 1              ";
        gotoxy(20, 10);
        cout << "                                                   ";

        textcolor(WHITE);
        textbackground(LIGHTMAGENTA);
        gotoxy(20, 12);
        cout << "                                                   ";
        gotoxy(20, 13);
        cout << "              2 - CALCULAR PARA B > 1              ";
        gotoxy(20, 14);
        cout << "                                                   ";

        textcolor(WHITE);
        textbackground(LIGHTGREEN);
        gotoxy(20, 17);
        cout << "                                                   ";
        gotoxy(20, 18);
        cout << "               3 - RETORNAR AO MENU                ";
        gotoxy(20, 19);
        cout << "                                                   ";
        gotoxy(37,21);
        cout <<" DIGITE A OPÇÃO: ";
        cin >> OP;


        switch (OP)
        {

        case 1:
            char op2;
            do
            {
            system("cls");
            cout << " DIGITE O VALOR DE (A), (B) E (MOD):";
            cin >> valorA >> valorB >> valorMod;
            cout << endl;

            if(valorB != 1)
            {
                cout << endl << " VOCÊ DIGITOU O VALOR DE B MAIOR QUE 1!" << endl;
                cout << endl <<" RETORNANDO PARA AS OPÇÕES..."<< endl;
                Sleep(4000); /* O programa espera 4 segundo para execultar a próxima instrução */
                funcaoMenu(1); /* Chama a função funcaoMenu e passa 1 como parâmetro para que seja chama o case 1: */
            }

            calculaMdc_B_1(valorA, valorB, valorMod); /* Chama a função calculaMdc_B_1  da biblioteca funcoesCongruencia, e passa o valor de: valorA, valorB e valorMod.*/
             cout << endl
                 << " Digite [S] para continuar ou [M] para retornar ao menu [CALCULAR SOLUÇÕES DE CONGRUÊNCIA]: " << endl;
             cin >> op2;
            }while((op2 == 's') || (op2 == 'S'));
            funcaoMenu(1);
            break;
        case 2:
            system("cls");
            cout << " DIGITE O VALOR DE (A), (B) E (MOD):";
            cin >> valorA >> valorB >> valorMod;
            cout << endl;

            if(valorB <= 1)
            {
                cout << endl << " VOCÊ DIGITOU O VALOR DE B MENOR OU IGUAL A 1!" << endl;
                cout << endl <<" RETORNANDO PARA AS OPÇÕES..."<< endl;
                Sleep(4000); /* O programa espera 4 segundo para execultar a próxima instrução */
                funcaoMenu(1); /* Chama a função menu */
            }

            calculaMdc_B_Maior_1(valorA, valorB, valorMod); /* Chama a função calculaMdc_B_Maior_1 e passa o valor de: valorA, valorB e valorMod.*/
            getch();
            break;
        case 3:
            system("cls & color 3f");
            main();
        }

    case 2:
        system("cls");
        char op;

        do
        {
            system("cls");
            cout << " ========  CALCULAR MDC  ========" << endl
                 << endl;
            cout << " DIGITE O VALOR DE (A) E (B): ";
            cin >> valorA >> valorB;
            cout << endl;

            calcMdc(valorA, valorB);
            cout << endl
                 << " Digite [S] para continuar ou [M] para retornar ao menu: ";
            cin >> op;
        } while ((op == 's') || (op == 'S'));
        system("cls");
        main(); /* Chama o menu da função main */
        break;

    case 3:
        char opcao;
        cout << " DESEJA MESMO SAIR [S/N] ?: ";
        cin >> opcao;
        if ((opcao == 's') || (opcao == 'S'))
        {
            exit(0);
        }
        else
            system("cls");
        main();
    }
}
