#ifndef LIBASM_H
# define LIBASM_H

int		ft_strlen(const char *s);
char	*ft_strcpy(char *s1, const char *s2);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strdup(const char *s);
int		ft_write(int i, char *s, int n);
int 	ft_read(int i, char *s, int n);
int 	ft_atoi_base(char *s1, char *s2);

#endif