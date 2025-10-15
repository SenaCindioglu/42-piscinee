int ft_strncmp(char *s1, char *s2, unsigned int n) 
{
    unsigned int i = 0;

    while ((s1[i] != '\0' || s2[i] != '\0') && i < n) {
        // Loop through the characters in s1 and s2 as long as we haven't reached the end ('\0') or n characters.

        if (s1[i] > s2[i]) {
            // return 1 = s1 is "greater."

            return 1;
        }
        else if (s1[i] < s2[i]) {
            // return -1 = s2 is "greater."

            return -1;
        }
        i++;
    }
    /* If we've reached the end of one of the strings without finding a  difference, return 0 to 
    indicate they are equal up to the first n characters.*/

    return 0;
}
