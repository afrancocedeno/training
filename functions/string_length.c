/**
 * string_length: funcitons that claculate the lenght of a string.
 * @str: input string.
 *
 * Return: the lenght of the string.
 */
int string_length(char *str)
{
        int i = 0;

        for (; *(str + i); i++)
                ;
        return(i);
}
