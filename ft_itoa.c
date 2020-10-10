unsigned int ft_intlen_base (int value, int base){
	int len;

	len = 0;
	while(value >= base)
	{
		len++;
		value /= base;
	}
  return (len);
}

char			*ft_itoa_base(int n, char *base)
{
	unsigned int	len;
	unsigned int	value;
	char			*str;

	len = 0;
	value = n;
	if (value < 0)
	{
		value = n * -1;
		len++;
	}
	len += ft_intlen_base(value, ft_strlen(base));
	
	if (!(str = (char *)malloc(sizeof(char) * len + 1))
		return (0);
	
	str[len--] = '\0';
	
	while (len)
	{
		str[len--] = base[value % ft_strlen(base)];
		value /= ft_strlen(base);
	}
	if(n < 0)
		str[0] = '-';
	 else
	    str[0] = value;
	return (str);
}

char			*ft_itoa(int n)
{
	return (ft_itoa_base(n, "0123456789");
}
