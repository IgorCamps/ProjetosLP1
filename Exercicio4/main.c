#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a, b, soma, sub, div,mult;

    printf("Insira o primeiro inteiro\n");
    scanf("%i",&a);

    printf("Insira o segundo inteiro\n");
    scanf("%i",&b);

    printf("O resultado de A + B = %i\n",a+b);
    printf("O resultado de A - B = %i\n",a-b);
    printf("O resultado de A / B = %i\n",a/b);
    printf("O resultado de A * B = %i\n",a*b);

    return 0;
}
