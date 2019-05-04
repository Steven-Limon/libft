void *ft_memmove(void *dst, const void *src, size_t len)
{
	int i;
	unsigned char *buffer;
	
	i = 0;
	buffer = (unsigned char *)malloc(sizeof(unsigned char) * len);
	while (i < n)
	{
		((unsigned char *)buffer)[i] = ((unsigned char)src)[i];
		i++;
	}
	i = 0;
	while(i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)buffer)[i];
		i++;
	}
	free(buffer);
	return (dst);
}
