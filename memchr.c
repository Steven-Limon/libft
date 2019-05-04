#include <stdio.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
	int i;

	i = 0;
	while(i < n)
		if(((unsigned char *)s)[i] == c)
			return (s[i]);
		return (NULL);
}
