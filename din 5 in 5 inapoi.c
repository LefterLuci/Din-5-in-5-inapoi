#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int nr;
    int index=999;

    printf("Numarati descrescator din 5 in 5 de la un nr ales de dvs(intre 888 si 999).\n");
    scanf("%d",&nr);

    if((nr<888) || (nr>999))
    {
    printf("Numarul invalid.\n");
    }
    else
    {

    while(nr!=index)
    {

     if((index%5)==0)
     {
       //
     printf("%d ",index);
     }
    --index;
    }


    }


