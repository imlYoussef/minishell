# include "parser.h"
# include "libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <readline/history.h>
# include <readline/readline.h>


char	*prompt(char *pwd, char *home)
{
	static char	prompt[BUFFER_SML];

	pwd = getcwd(NULL, PATH_MAX);
	home = getenv(home);
	ft_bzero(prompt, BUFFER_SML);
	ft_strlcat(prompt, COLOR_GREEN, BUFFER_SML);
	ft_strlcat(prompt, getenv("USER"), BUFFER_SML);
	ft_strlcat(prompt, "@", BUFFER_SML);
	ft_strlcat(prompt, getenv("USERNAME"), BUFFER_SML);
	ft_strlcat(prompt, COLOR_RED, BUFFER_SML);
	ft_strlcat(prompt, ":", BUFFER_SML);
	if (pwd && home && !ft_strncmp(pwd, home, ft_strlen(home)))
	{
		ft_strlcat(prompt, "~", BUFFER_SML);
		ft_strlcat(prompt, pwd + ft_strlen(home), BUFFER_SML);
	}
	else
		ft_strlcat(prompt, pwd, BUFFER_SML);
	ft_strlcat(prompt, COLOR_RESET, BUFFER_SML);
	ft_strlcat(prompt, "$ ", BUFFER_SML);
	return (free(pwd), prompt);
}

void	parse(void)
{
	char *s = readline(prompt("PWD", "HOME"));
	(void)s;
}

void	printf_hello_world_parser(void)
{

	printf("This is a test case for the parser library :");
	printf("Hello, World!\n");
}
