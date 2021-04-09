#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi, i;

    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

    for(i=2; i<sayi; i++)
    {
        if(sayi%i == 0)
        {
            printf("%d bir asal sayi degil!", sayi);
            break;
        }
        else{
            printf("%d bir asal sayi!", sayi);
            break;
        }
    }
}
