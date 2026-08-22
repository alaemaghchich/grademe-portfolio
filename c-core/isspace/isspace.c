int	gm_isspace(int c)
{
   while ((c >= 9 && c <= 13) || c == 32)
   {
	return 1;
   }
   return 0;
}
