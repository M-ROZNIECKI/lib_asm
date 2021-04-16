segment .text
global _ft_strlen
_ft_strlen:
			push rbp
			mov rax, 0
			while:	cmp byte [rdi], 0
					je endwhile
					inc rax
					inc rdi
					jmp while
			endwhile:
			pop rbp
			ret
