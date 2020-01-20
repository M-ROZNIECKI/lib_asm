segment .text
global _ft_read
_ft_read:
			push rbp
			mov rax, 0x2000003
			syscall
			pop rbp
			ret
