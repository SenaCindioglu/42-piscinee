char *ft_strcat(char *dest, char *src) 
{
    int i;
    int j;

    i = 0;
    // Find the null terminator of the 'dest' string to determine its end position.
    while (dest[i] != '\0') {
        i++;
    }
    j = 0;
    // Copy the characters from 'src' to the end of 'dest'.
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}
