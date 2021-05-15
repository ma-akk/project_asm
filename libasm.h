#ifndef LIBASM_H
# define LIBASM_H
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

#define COLOR_RED     "\x1b[31m"
#define COLOR_GREEN   "\x1b[32m"
#define COLOR_YELLOW  "\x1b[33m"
#define COLOR_BLUE    "\x1b[34m"
#define COLOR_MAGENTA "\x1b[35m"
#define COLOR_CYAN    "\x1b[36m"
#define COLOR_RESET   "\x1b[0m"

char	*ft_strcpy(char *dst, char *src);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
int		ft_read(int fd, void *buf, int nbyte);
int		ft_write(int fd, const void *buf, int nbyte);

#endif