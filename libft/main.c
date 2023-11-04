#include "libft.h"

int	main(void)
{
	char *s;
	char **words;

	s = "hello world ||||||||||||||||||||||||||||||sgfdsg|||||||||||||dsfffffffffgsdgfsdggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggg|||||||||||||||||||||||||||||||||||||||||||||||||||||||";
	words = ft_split(s, '|');
	for (int i = 0; words[i]; i++)
		printf("%s\n", words[i]);
	return (0);
}