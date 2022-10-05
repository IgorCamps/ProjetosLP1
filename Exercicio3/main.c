#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, soma, sub, div,mult;

    printf("Insira o primeiro inteiro\n");
    scanf("%i",&a);

    printf("Insira o segundo inteiro\n");
    scanf("%i",&b);

    soma = a + b;
    sub = a - b;
    div = a / b;
    mult = a * b;
    printf("O resultado de A + B = %i\n",soma);
    printf("O resultado de A - B = %i\n",sub);
    printf("O resultado de A / B = %i\n",div);
    printf("O resultado de A * B = %i\n",mult);

    return 0;
}
