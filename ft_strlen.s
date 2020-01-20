segment .text
global _ft_strlen
_ft_strlen:
			push rbp
			push r9
			mov r9, 0
			while:	cmp byte [rdi], 0
					je endwhile
					inc r9
					inc rdi
					jmp while
			endwhile:
			mov rax ,r9
			pop r9
			pop rbp
			ret
