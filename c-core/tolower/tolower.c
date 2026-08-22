int	gm_tolower(int c)
{
	while (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}
