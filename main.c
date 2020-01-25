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
#include <errno.h>
#include "libasm.h"

//TODO:: list chainée


int main()
{
	char *s2;
	char *s1;
	char *s3;
	char *s4;

	system("clear");
	if(!(s1 = malloc(sizeof(char) * 6)))
		return (-1);
	s1 = strcpy(s1, "hello");
	if(!(s2 = malloc(sizeof(char) * 6)))
		return (-1);
	s2 = strcpy(s2, "no ");
	//s2 = ft_strcpy(s2, s1);
	printf("the ft_strlen of \"hello\" is =%d\n", ft_strlen(s1));
	printf("the strlen of \"hello\" is =%lu\n", strlen(s1));
	printf("has ft_strcpy worked? =%s", ft_strcpy(s2, s1));
	printf("\nare this str identical? if yes res is 0 res=%d", ft_strcmp("hello", "helli"));
	s3 = ft_strdup("stop osx and go linux");
	printf("\nis ft_strdup has worked? =%s", s3);
	printf("\n");
	printf("\n\"\\nwhat's up\\n\" size returned by ft_write = %d\n\n", ft_write(1, "\nwhat's up\n", 11));
	if(!(s4 = malloc(sizeof(char) * 11)))
		return (-1);
	write(1, "wait 5s", 8);
	sleep(1);
	write(1, "\b\b\b\b\b\b\b", 8);
	write(1, "wait 4s", 8);
	sleep(1);
	write(1, "\b\b\b\b\b\b\b", 8);
	write(1, "wait 3s", 8);
	sleep(1);
	write(1, "\b\b\b\b\b\b\b", 8);
	write(1, "wait 2s", 8);
	sleep(1);
	write(1, "\b\b\b\b\b\b\b", 8);
	write(1, "wait 1s", 8);
	sleep(1);
	write(1, "\b\b\b\b\b\b\b", 8);
	write(1, "press enter to continue", 23);
	getchar();
	system("clear");
	printf("reading...(no more than 9 char)\n");
	printf("ft_read ==%d\n", ft_read(0, s4, 10));
	printf("ft_write ==%d\n", ft_write(1, s4, ft_strlen(s4)));
	printf("\n\nreading...(no more than 9 char)\n");
	printf("read ==%zd\n", read(0, s4, 10));
	printf("write ==%zd\n", write(1, s4, ft_strlen(s4)));
	write(1, "wait 5s", 8);
	sleep(1);
	write(1, "\b\b\b\b\b\b\b", 8);
	write(1, "wait 4s", 8);
	sleep(1);
	write(1, "\b\b\b\b\b\b\b", 8);
	write(1, "wait 3s", 8);
	sleep(1);
	write(1, "\b\b\b\b\b\b\b", 8);
	write(1, "wait 2s", 8);
	sleep(1);
	write(1, "\b\b\b\b\b\b\b", 8);
	write(1, "wait 1s", 8);
	sleep(1);
	write(1, "\b\b\b\b\b\b\b", 8);
	write(1, "press enter to continue", 23);
	getchar();
	system("clear");
	printf("\nft_read with wrong fd ==%d\n", ft_read(10, s4, 10));
	printf("errno for ft_read is set to==%d\n", errno);
	errno = 0;
	printf("errno reset is =%d\n", errno);
	printf("ft_write with wrong fd ==%d\n", ft_write(10, s4, ft_strlen(s4)));
	printf("errno for ft_write is set to==%d\n", errno);
	errno = 0;
	printf("errno reset is =%d\n", errno);
	printf("read with wrong fd ==%zd\n", read(10, s4, 10));
	printf("errno for read is set to==%d\n", errno);
	errno = 0;
	printf("errno reset is =%d\n", errno);
	printf("write with wrong fd ==%zd\n", write(10, s4, ft_strlen(s4)));
	printf("errno for write is set to==%d\n", errno);
	errno = 0;
	printf("errno reset is =%d\n", errno);
	write(1, "wait 5s", 8);
	sleep(1);
	write(1, "\b\b\b\b\b\b\b", 8);
	write(1, "wait 4s", 8);
	sleep(1);
	write(1, "\b\b\b\b\b\b\b", 8);
	write(1, "wait 3s", 8);
	sleep(1);
	write(1, "\b\b\b\b\b\b\b", 8);
	write(1, "wait 2s", 8);
	sleep(1);
	write(1, "\b\b\b\b\b\b\b", 8);
	write(1, "wait 1s", 8);
	sleep(1);
	write(1, "\b\b\b\b\b\b\b", 8);
	write(1, "press enter to continue", 23);
	getchar();
	system("clear");
	printf("\ntest atoi_base with hexa \"  ++-+----fa ft\"    0xff=%d", ft_atoi_base("  ++-+----fa ft", "0123456789abcdef"));
	printf("\ntest atoi_base with hexa \"  ++-+---fa ft\"     0xff=%d", ft_atoi_base("  ++-+---fa ft", "0123456789abcdef"));
	printf("\ntest atoi_base with hexa \"  ++- +---fa ft\"    0xff=%d", ft_atoi_base("  ++- +---fa ft", "0123456789abcdef"));
	printf("\ntest atoi_base with hexa \"  +++fa ft\"         0xff=%d", ft_atoi_base("  +++fa ft", "0123456789abcdef"));
	printf("\ntest atoi_base with hexa \"  ++fa ft\"          0xff=%d", ft_atoi_base("  ++fa ft", "0123456789abcdef"));
	printf("\ntest atoi_base with base \"asdf\"   \"  ++ad ft\" 0xff=%d", ft_atoi_base("  ++ad ft", "asdf"));
	printf("\ntest atoi_base with base \"012\"   \"   ++202ft\" 0xff=%d", ft_atoi_base("   ++202ft", "012"));
	printf("\ntest atoi_base with base with space \" 1+42ft\" 0xff=%d", ft_atoi_base(" 1+42ft", " 012"));
	printf("\ntest atoi_base with base with plus  \" 1+42ft\" 0xff=%d", ft_atoi_base(" 1+42ft", "+012"));
	printf("\ntest atoi_base with base with minus \" 1+42ft\" 0xff=%d", ft_atoi_base(" 1+42ft", "-012"));
	free(s1);
	free(s2);
	free(s3);
	free(s4);

	return 0;
}
