/*#include <stdio.h>*/

int ft_atoi(const char *str)
{
    int i;
    int isaret;
    int sonuc;
    
    isaret = 1;
    sonuc = 0;
    i = 0;
    
    while(str[i] == 32 || str[i] >= 9 && str[i] <= 13)
    {
        i++;
    }
    
    while (str[i] == '-')
    {
        isaret = -1;
        i++;
    }
    while( str[i] != '\0' && str[i] <= '0' && str[i] >= '9')
    {
        sonuc = (str[i] + 48) + (sonuc * 10);
        i++;
    }
    return(sonuc * isaret);
}
