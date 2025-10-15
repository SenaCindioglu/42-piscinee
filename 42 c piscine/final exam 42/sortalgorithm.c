
/*#include <stdio.h>*/
int main()
{
    int i;

    int ar[10];
    int tmp;

    printf(" siralamak istediginiz sayilari girin ");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d" , &ar[i]);
    }
    int j ;
    j = 0;

    for (int i = 0; i < 9; i++) 
    {
        for ( j = 0; j < 9 - i; j++)
        {
            if (ar[j] > ar[j + 1]) 
            {
                tmp = ar[j];
                ar[j] = ar[j + 1];
                ar[j +1] = tmp;
            }
        }
    }


    printf("sirali diziniz ektedir");
    int k ;
    k = 0;
    for(k = 0; k < 10; k ++)
    {
        printf("%d", ar[k]);
    }
    return 0;
}