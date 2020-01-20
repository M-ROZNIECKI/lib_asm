segment .text
global _ft_write
_ft_write:
			push rbp
			mov rax, 0x2000004
			syscall
			pop rbp
			ret
