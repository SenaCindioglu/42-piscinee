char *ft_strstr(char *str, char *to_find) 
{
    int i;
    int j;

    i = 0;
    j = 0;
    
    // Check if 'to_find' is an empty string, in which case, 'str' is considered to contain 'to_find'.
    if (to_find[j] == '\0') {
        return (str);
    }
    
    while (str[i] != '\0') {        
        while (str[i + j] == to_find[j] && str[i + j] != '\0') {
            // Compare characters of 'str' and 'to_find' as long as they match and neither is at its end.
            j++;
        }
        
        /* If 'to_find' has reached its end, that means a match was found, 
        and the position in 'str' where 'to_find' begins is returned.*/
        if (to_find[j] == '\0') {
            return (str + i);
        }
        
        i++;
        j = 0;  // Reset 'j' to start comparing from the beginning of 'to_find'.
    }
    
    // If no match was found, return a null pointer to indicate that 'to_find' is not in 'str'.
    return (0);
}
