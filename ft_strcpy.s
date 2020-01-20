segment .text
global _ft_strcpy
_ft_strcpy:
			push rbp
			push r9
			mov rax, rdi
			while:	cmp byte [rsi], 0
					mov r9b, [rsi]
					mov [rdi],  r9b
					je endwhile
					inc rsi
					inc rdi
					jne while
			endwhile:
			pop r9
			pop rbp
			ret
