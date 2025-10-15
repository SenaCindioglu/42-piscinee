
int ft_strcmp(char *s1, char *s2)
{
    unsigned int i;

    i = 0;

    // Loop until characters match and both strings have not reached the null terminator
    while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
    {
        i++; // Move to the next character
    }

    // Return the difference between the characters at the differing position
    return (s1[i] - s2[i]);
}
