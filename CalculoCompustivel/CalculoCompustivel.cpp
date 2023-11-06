/*
CalculoCompustivel.cpp

este programa simples faz é dizer qual é mais vantajoso usar tanto gasolina ou etanol  
*/

#include <iostream>
#include <stdio.h>

int Calculo(float Vgas, float Veta);

int main()
{
    printf("####### BeniCar ####### \n");
    printf(" Autor: Leandro Pinheiro Leite \n");


    float precoGasolina, precoEtanol;
    

    printf("digite o preco da Gasolina: \n");
    scanf_s("%f", &precoGasolina);

    printf("digite o preco do Etanol: \n");
    scanf_s("%f", &precoEtanol); 

    int resultado = Calculo(precoGasolina, precoEtanol);

    if (resultado == 0)
        printf("melhor abastecer com gasolina");
    else if (resultado == 1)
        printf("melhor abastecer com etanol");
    else
        printf("são equivalentes, tanto faz");
}

int Calculo(float Vgas, float Veta)
{
    if ((Vgas * 0.70) < Veta)
        return 0;
    else if ((Vgas * 0.70) > Veta)
        return 1;
    else
        return 2;
}

