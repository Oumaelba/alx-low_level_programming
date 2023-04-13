#include <stdio.h>
char *_atoi(char *s)
{
  int i = 0;
  int j = 0;
  char *store[100];

    while (!(s[i] >= '0' && s[i] <= '9')&& s[i] != '\0')
      i++;
    while (s[i] >= '0' && s[i] <= '9')
      {
        store[j] = s[i];
      i++;
      j++;
      }
    store[j] = '\0';
  return (store);
}

int main()
{
	printf("%s\n",_atoi("asv65 hj89 hd"));
}