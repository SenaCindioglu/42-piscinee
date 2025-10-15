char *ft_strncat(char *dest, char *src, unsigned int nb) 
{
    unsigned int i;
    unsigned int j;

    i = 0;
    j = 0;
    // Find the null terminator of the 'dest' string to determine its end position.
    while (dest[i] != '\0') {
        i++;
    }

    // Append characters from 'src' to 'dest' but limit the number of characters added to 'nb'.
    while (j < nb && src[j] != '\0') {
        dest[i + j] = src[j];
        j++;
    }

    dest[i + j] = '\0';
    // Null-terminate the concatenated string by placing a null character at the end.

    return (dest);
    // Return a pointer to the modified 'dest' string after concatenation.
}
