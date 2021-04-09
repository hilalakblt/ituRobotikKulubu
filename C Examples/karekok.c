#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double sayi, karekok;

    while(sayi != -1)
    {
        //continue kullanmak icin 0-100 arasi siniri koydum
        printf("Lutfen bir sayi girin (NOT: 0-100 arasinda olsun yoksa hesaplanmayacak!): ");
        scanf("%lf", &sayi);

        if(sayi<0 || sayi>100)
            continue;

        printf("Sayi: %0.1lf\n", sayi);
        printf("Karekok: %0.1lf\n", sqrt(sayi));

    }
}
