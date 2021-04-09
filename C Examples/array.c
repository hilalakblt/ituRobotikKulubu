#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[5];
    int enBuyuk = 0;
    int i;

    printf("Lutfen dizideki elemanlari girin: ");
    scanf("%d %d %d %d %d", &dizi[0], &dizi[1], &dizi[2], &dizi[3], &dizi[4]);


    for(i=0; i<5; i++)
    {
        if(dizi[i]>enBuyuk)
            enBuyuk = dizi[i];
    }

    printf("En buyuk sayi: %d", enBuyuk);
}
