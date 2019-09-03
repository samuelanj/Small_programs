/**
  *
  *  Disciplina   : SINF0013 -  MATEM�TICA DISCRETA PARA A COMPUTA��O - UFS
  *  Prof. Dr.    : JOSEVAL DE MELO SANTANA
  *  Departamento : DEPARTAMENTO DE SISTEMA DE INFORMA��O
  *  E-Mail       : josevalmsantana@hotmail.com
  *  Fun��o       : Calcula a(s) solu��o(�es) de uma equa��o de congru�ncia e o mdc
  *  Autor        : JOS� NATHANAEL SANTOS MATOS
  *  E-mail       : nathanaelsantos15@gmail.com
  *  Data         : 23/08/2019
  */

//Bibliotecas
#include <iostream>
#include <locale.h>
#include <conio2.h>
#include <stdlib.h>
#include <windows.h>
#include "funcoesCongruencia.h"
#include "funcaoMDC.h"
#include "funcoesMenu.h"


using namespace std;

void menu();
void calculaMdc_B_1(int &valorA, int valorB, int &valorMod);       /* Prot�tipo da fun��o calculaMdc_B_1 */
void calculaMdc_B_Maior_1(int &valorA, int valorB, int &valorMod); /* Prot�tipo da fun��o calculaMdc_B_Maior_1 */
void calcMdc(int &valorA, int &valorB);                            /* Prot�tipo da fun��o calcMdc */
void funcaoMenu(int opcao);                                        /* Prot�tipo da fun��o funcaoMenu */

int main()
{
    setlocale(LC_ALL, ""); /* Comando de regionaliza��o.*/
    SetConsoleTitle(" Matematica discreta");

    int opcao;
    char op;

    system("mode con:cols=90 lines=25");
    system("color 3f"); /* Muda a cor do fundo */

    gotoxy(26, 4);
    cout <<" =========        MENU       =========";
    textcolor(WHITE);
    textbackground(WHITE + 29);
    gotoxy(20, 8);
    cout << "                                                   ";
     gotoxy(20, 9);
    cout << "        1- CALCULAR SOLU��ES DE CONGRU�NCIA        ";
     gotoxy(20, 10);
    cout << "                                                   ";

    textcolor(WHITE);
    textbackground(LIGHTMAGENTA);
    gotoxy(20, 12);
    cout << "                                                   ";
     gotoxy(20, 13);
    cout << "        2 - CALCULAR MDC(M�TODO DE EUCLIDES)       ";
     gotoxy(20, 14);
    cout << "                                                   ";

    textcolor(WHITE);
    textbackground(BLUE);
    gotoxy(36, 16);
    cout << "                    ";
     gotoxy(36, 17);
    cout << "      3- EXIT       ";
     gotoxy(36, 18);
    cout << "                    ";

    while(opcao < 1 || opcao > 3)
    {
        textcolor(WHITE);
        textbackground(LIGHTBLUE);
        gotoxy(36, 20);
        cout << "Digite a opcao: ";
        cin >> opcao;
    }

    funcaoMenu(opcao); /*Faz a chamada do menu de fun��es */

    return 0;
}
