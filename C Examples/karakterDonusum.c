#include <stdio.h>
#include <stdlib.h>

char* harfDegis(char* isim)
{
    int j=0;
    for(int i=0; i<strlen(isim); i++)
    {
        if(j<3)
        {
            j++;
            isim[i] = isim[i] + j;
            printf("%c", isim[i]);

        }else if(j==3){
            j--;
            isim[i] = isim[i] + j;
            printf("%c", isim[i]);

            j--;
            isim[i+1] = isim[i+1] + j;
            printf("%c", isim[i+1]);

            i++;
            j--;
            printf("-");
        }
    }
}

int main()
{
    char *pointer;
    char isimSoyisim[50];

    printf("Isim soyisim giriniz: ");
    scanf("%s", &isimSoyisim);

    pointer = &isimSoyisim;

    harfDegis(pointer);

}
