int	toupper(int c)
{
	while(c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}
