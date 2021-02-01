#include "libasm.h"

int	main()
{
	char	*line;

	line = NULL;
	line = "123456789";
	printf("/---------------------/\n");
	printf("/------FT_STRLEN------/\n");
	printf("/---------------------/\n");
	printf("strlen: %lu\n", strlen(line));
	printf("ft_strlen: %lu\n", ft_strlen(line));
	return (0);
}
