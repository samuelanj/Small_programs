#ifndef SOMA_H_INCLUDED
#define SOMA_H_INCLUDED

void soma(int &Maior, int &menor)
{
    while(Maior%menor != 0)
    {

    int y = menor;
    menor = Maior%menor;
    Maior = y;


    }
   
}

#endif