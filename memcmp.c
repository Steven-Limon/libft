typedef unsigned char byte;
// add the above typedef to the libft header file later
int memcmp(const void *s1, const void *s2, size_t n);
{
	int i;
	
	byte *tmp_s1;
	byte *tmp_s2;
	
	tmp_s1= (byte *)s1;
	tmp_s2= (byte *)s2;
	i = 0;
	while(i < n)
	{
		if(tmp_s1 != tmp_s2)
			return (*tmp_s1 - *tmp_s2);
		i++;
	}
	return (0)
}
