#include<stdio.h>
#include<stdlib.h>

int main()
{
    int tarros,UnoL,CuatroL,VeinteL;
    printf("Ingrese cantidad de tarros en el deposito: ");
    scanf("%d", &tarros);
    UnoL=tarros*50/100;
    CuatroL=tarros*30/100;
    VeinteL=tarros*20/100;
    printf("La cantidad de tarros de 1 litro es de: %d\n",UnoL);
    printf("La cantidad de tarros de 4 litros es de: %d\n",CuatroL);
    printf("La cantidad de tarros de 20 litros es de: %d\n",VeinteL);

    return 0;
}
