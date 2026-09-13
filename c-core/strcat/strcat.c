char	*gm_strcat(char *dst, const char *src)
{
int i = 0;
int j = 0;
while (dst[i])
{
	i++;
}
while(src[j])
{
	dst[i + j] = src[j];
	j++;
}
dst[i + j] = '\0';
return dst;
}
