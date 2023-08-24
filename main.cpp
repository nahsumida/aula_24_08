#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    //exercicio 8
    bool positivo = false;
    int N = -1, exp = 2, denominador = 3,pot, X;
    float S, fat;

    do
    {
        cout << "Insira o valor de N: ";
        cin >> N;
    }
    while(N < 0 || N > 50);

    cout << "Insira o valor de X: ";
    cin >> X;

    S = X;

    for (int i = 1; i < N; i++)
    {
        if (positivo)
        {
            pot = pow(X, exp);
            fat = 1;
            for (int j = 1; j < denominador; j++){
                fat += fat*j;
            }
            S += pot / fat;
            positivo = false;
            exp+=2;
            denominador+=2;

        }
        else
        {
            pot = pow(X, exp);
            fat = 1;
            for (int j = 1; j < denominador; j++){
                fat += fat*j;
            }
            S -= pot / fat;
            positivo = true;
            exp+=2;
            denominador+=2;
        }
    }

    cout << S << "\n\n";


    //exercicio 13
    float salario, mediaSal, mediaFil, maiorSal = 0, percent = 0;
    int numFilho, numHab;

    cout << "Insira o numero de Habitantes: ";
    cin >> numHab;

    for (int i=0; i < numHab; i++)
    {

        cout << "Insira seu salario: ";
        cin >> salario;
        cout << "Insira o numero e filhos: ";
        cin >> numFilho;

        mediaSal += salario;
        mediaFil += numFilho;

        if(maiorSal < salario)
            maiorSal = salario;

        if(salario <= 1500.0)
            percent++;

    }
    if (numHab == 0)
        cout << "Erro: numero de habitantes = 0";
    else
    {
        mediaSal = mediaSal / numHab;
        mediaFil = mediaFil / numHab;

        if (percent == 0)
            percent = 0;
        else
        {
            percent = (percent / numHab) * 100;
            cout << "aqui";
        }

    }


    cout << "a: " << mediaSal << endl;
    cout << "b: " << mediaFil << endl;
    cout << "c: " << maiorSal << endl;
    cout << "d: " << percent << "%\n\n";





    //exercicio 11

    int plano;
    //float salario;
    salario = 0;

    cout << "Insira o salario do funcionario: ";
    cin >> salario;
    cout << "Insira o plano de trabalho [1, 2, 3]: ";
    cin >> plano;

    switch (plano)
    {
    case 1:
        salario += 0.1*salario;
        break;
    case 2:
        salario += salario*0.15;
        break;
    case 3:
        salario += salario*0.2;
        break;
    default:
        cout << "Plano invalido" << endl;
        break;
    }

    cout << "Novo salario: " << salario << "\n\n";

//exercicio 12

    int i;
    for(i=1000; i < 2000; i++)
    {
        if (i % 11 == 5)
            cout << " " << i;
    }

    cout << "\n\n";


    return 0;
}
