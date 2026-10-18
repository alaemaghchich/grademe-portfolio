// Return the address of the first character of s that is not a space or a tab.
// Only the leading run is skipped, and the buffer is never written to.
const char	*skip_spaces(const char *s)
{
	int i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\t'))
	{
		i++;
	}
	if (s[i] || !s[i])
		return (&s[i]);
	return (s);
}
