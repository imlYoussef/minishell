#ifndef PARSER_H
# define PARSER_H

#define COLOR_RESET   "\033[0m"
#define COLOR_RED     "\033[0;31m"
#define COLOR_GREEN   "\033[0;32m"
#define COLOR_YELLOW  "\033[0;33m"
#define COLOR_BLUE    "\033[0;34m"
#define COLOR_MAGENTA "\033[0;35m"
#define COLOR_CYAN    "\033[0;36m"
#define COLOR_WHITE   "\033[0;37m"

#ifndef BUFFER_SML
# define BUFFER_SML 256
#endif

#ifndef PATH_MAX
# define PATH_MAX 4096
#endif


// this file is for parser headers
void	parse(void);
#endif
