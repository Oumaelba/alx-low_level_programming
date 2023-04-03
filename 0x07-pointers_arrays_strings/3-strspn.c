#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
    int i = 0;
    int j = 0;
    int store = 0;

    while (s[i] != '\0')
    {
        while (accept[j] != '\0')
        {
          if (s[i] == accept[j])
          {
            store++;
            break;
          }
          else
            j++;
        }
        if (accept[j] == '\0')
        {
            break;
        }
      j = 0;
      i++;
    }
  return(store);
}