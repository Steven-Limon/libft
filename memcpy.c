void *ft_memcpy(void *dst, const void * src, size_t n)
{
	int i;

	i = 0;
	while(i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
