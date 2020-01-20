extern _ft_strlen
extern _ft_strcpy
extern _malloc

segment .text
global _ft_strdup
_ft_strdup:
			push rbp
			push r9
			push r10
			mov r10, rdi
			push r10
			call _ft_strlen
		    mov r9, rax
			inc r9
			mov rdi, r9
			call _malloc
			mov rdi, rax
			pop r10
			mov rsi, r10
			call _ft_strcpy
			pop r10
			pop r9
			pop rbp
			ret
