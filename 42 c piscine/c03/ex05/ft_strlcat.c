int ft_strlen(char *str) 
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return (i);  // Return the length of the string.
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size) 
{
    unsigned int i = 0;
    unsigned int j = 0;
    unsigned int dlen;
    unsigned int slen;

    dlen = ft_strlen(dest);
    slen = ft_strlen(src);

    if (size == 0 || size <= dlen) {
        // If 'size' is 0 or less than or equal to the length of 'dest', return the combined length of 'src' and 'size'.
        return (slen + size);
    }

    while (src[i] != '\0' && i < size - dlen - 1) {
        // Copy characters from 'src' to 'dest', taking care not to exceed the available space ('size - dlen - 1').
        dest[j] = src[i];
        i++;
        j++;
    }

    dest[j] = '\0';

    return (dlen + slen);  // Return the total length of the concatenated string.
}
