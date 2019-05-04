void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int i;
	unsigned char *dst_bp;
	unsigned char *src_bp;

	i = 0;
	while (i < n)
	{
		dst_bp = ((unsigned char *) dst);
		src_bp = ((unsigned char *) src);
		if (src_bp[i] == (unsigned char) c)
			return (dst_bp + 1);
		dst_bp[i] = src_bp[i];
		i++;
	}
	return (dst);
}
