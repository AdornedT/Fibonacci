/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n_termo, fibo1, fibo2, fibo_result;

    //Inicialização
    fibo1 = 0;
    fibo2 = 1;
    fibo_result = 0;

    do{
        printf("Digite o termo de fibonacci que deseja calcular (O numero deve ser maior ou igual a 0): \n");
        scanf("%i", &n_termo);

    }while(n_termo < 0); //Não permite prosseguir com número inválido


    for(int i = 0; i < n_termo; i++)
    {
        fibo_result = fibo1 + fibo2;
        fibo1 = fibo2;
        fibo2 = fibo_result;
    }

    printf("Termo %i de fibonacci = %i \n", n_termo, fibo1);


    return 0;
}
