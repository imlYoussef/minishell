#include "minishell.h"

int	main(int ac, char **av, char **env)
{
	printf("Hello, World!\n");
	(void)ac;
	(void)av;
	(void)env;
	// test case for core library
	print_hello_world();
	// test case for libft library
	printf("This is a test case for libft library : %ld\n", ft_strlen("Hello, World!"));
	// test case for parser library
	printf_hello_world_parser();
	// test case for list library
	printf("This is a test case for list library : %d\n", list_length(NULL));

	return (0);
}
