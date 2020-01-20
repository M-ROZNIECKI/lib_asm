/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mrozniec <mrozniec@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 14:54:48 by mrozniec     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 16:27:53 by mrozniec    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


extern int ft_strlen(const char *s);
extern char *ft_strcpy(char *s1, const char *s2);
extern int ft_strcmp(const char *s1, const char *s2);
extern char *ft_strdup(const char *s);
extern int ft_write(int i, char *s, int n);
extern int ft_read(int i, char *s, int n);
extern int ft_atoi_base(char *s1, char *s2);


int main()
{
	char *s2;
	char *s1;
	char *s3;
	char *s4;

	if(!(s1 = malloc(sizeof(char) * 6)))
		return (-1);
	s1 = strcpy(s1, "hello");
	if(!(s2 = malloc(sizeof(char) * 6)))
		return (-1);
	s2 = strcpy(s2, "world");
	s2 = ft_strcpy(s2, s1);
	printf("the length of \"hello\" is =%d\n", ft_strlen(s1));
	printf("is ft_strcpy has worked? =%s", s2);
	printf("\nis the str identical? if yes res is 0 res=%d", ft_strcmp("hello", "helli"));
	s3 = ft_strdup("stop osx and go linux");
	printf("\nis ft_strdup has worked? =%s", s3);
	free(s3);
	printf("\n\n\n");
	printf("\n==%d", ft_write(1, "\nwhat's up\n", 11));
	if(!(s4 = malloc(sizeof(char) * 11)))
		return (-1);
	printf("\n==%d", ft_read(0, s4, 10));
	printf("\n==%d", ft_write(1, s4, 10));
	printf("\n\n\ntest atoi_base 0xff=%d\n\n\n", ft_atoi_base("  ++-+-----ff ft", "0123456789abcdef"));

	return 0;
}
