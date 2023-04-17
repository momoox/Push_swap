#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	count(char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == 0 || s[i + 1] == c))
			words++;
		i++;
	}
	return (words);
}

int	lenword(char *s, int i, char c)
{
	int	len;

	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

char	*cpyword(char *s, int *i, char c, int len)
{
	char	*str;
	int	u;

	u = 0;
	while (s[*i] == c)
		(*i)++;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (len)
	{
        if(s[*i] == ' ')
        {
            i++;
            str[u] = '\0';
            return (str);
        }
		str[u++] = s[(*i)++];
		len--;
	}
	str[u] = '\0';
	return (str);
}

char	**freeall(char **tab)
{
	int	j;

	j = 0;
	while (tab[j])
	{
		free(tab[j]);
		j++;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char *s, char c)
{
	int		i;
	int		j;
	char		**tab;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	tab = malloc(sizeof(char *) * (count(s, c) + 1));
	if (!tab)
		return (0);
	while (j < count(s, c))
	{
		tab[j++] = cpyword(s, &i, c, lenword(s, i, c));
		if (!tab[j - 1])
			return (freeall(tab));
	}
	tab[j] = 0;
	return (tab);
}


int main(int argc, char **argv)
{
    char *str;
    char **s;
    int i;
    int u;

    i = 0;
    u = 1;
    while (u < argc)
    {
        str = strdup(argv[u]);
        s = ft_split(str, '"');
        u++;
    }
    while(i < argc)
    {
        printf("%s\n", s);
        i++;
    }
    return (0);
}