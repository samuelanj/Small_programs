/**
  *
  *  Disciplina   : SINF0013 -  MATEMÁTICA DISCRETA PARA A COMPUTAÇÃO - UFS
  *  Prof. Dr.    : JOSEVAL DE MELO SANTANA
  *  Departamento : DEPARTAMENTO DE SISTEMA DE INFORMAÇÃO
  *  E-Mail       : josevalmsantana@hotmail.com
  *  Função       : Calcula a(s) solução(ões) de uma equação de congruência e o mdc
  *  Autor        : JOSÉ NATHANAEL SANTOS MATOS
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
void calculaMdc_B_1(int &valorA, int valorB, int &valorMod);       /* Protótipo da função calculaMdc_B_1 */
void calculaMdc_B_Maior_1(int &valorA, int valorB, int &valorMod); /* Protótipo da função calculaMdc_B_Maior_1 */
void calcMdc(int &valorA, int &valorB);                            /* Protótipo da função calcMdc */
void funcaoMenu(int opcao);                                        /* Protótipo da função funcaoMenu */

int main()
{
    setlocale(LC_ALL, ""); /* Comando de regionalização.*/
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
    cout << "        1- CALCULAR SOLUÇÕES DE CONGRUÊNCIA        ";
     gotoxy(20, 10);
    cout << "                                                   ";

    textcolor(WHITE);
    textbackground(LIGHTMAGENTA);
    gotoxy(20, 12);
    cout << "                                                   ";
     gotoxy(20, 13);
    cout << "        2 - CALCULAR MDC(MÉTODO DE EUCLIDES)       ";
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

    funcaoMenu(opcao); /*Faz a chamada do menu de funções */

    return 0;
}
