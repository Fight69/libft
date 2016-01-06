#include "libft.h"
#include <strings.h>

void *ft_memset(void *s, int c, size_t n)
{
  int i;
  void *tmp;

  i = 0;
  tmp = s;
  while(i < n)
  {
    tmp[i] = c;
    i++;
  }
  return s;
}
