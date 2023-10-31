#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - splits string
 * @str:string to split
 * Return:ptr on success and NULL on failure
 * */

char **strtow(char *str)
{
    char **ptr;
    int i, count;

    if (str == NULL || str == "" || str == '\0')
    {
        return (NULL);
    }

    count = 0;
    char *c;

    for (*c = str ; *c ; c++)
    {
        if (*c == ' ' && (*c == str || *(c -1) != ' '))
        {
            count++;
        }
        
    }
    count++;

    ptr = (char **)malloc((count + 1) * sizeof(char *));
    if (ptr == NULL)
        return (NULL);

    char *wordstart;
    wordstart = str;

    for (*c =str ; *c != '\0' ; c++)
    {
        if (*c == ' ')
        {
            *c = '\0';
            ptr[i] = wordstart;
            wordstart = c + 1;
            i++;
        }
    }

    ptr[i] = wordstart;
    i++;

    ptr[i] = NULL;
 	return (ptr);
}

