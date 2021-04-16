extern _ft_strlen
extern _ft_strcpy
extern _malloc

segment .text
global _ft_strdup
_ft_strdup:
			push rbp
			push r9
			push r12
			mov r12, rdi
			call _ft_strlen
		    mov r9, rax
			inc r9
			mov rdi, r9
			call _malloc
			mov rdi, rax
			mov rsi, r12
			call _ft_strcpy
			pop r12
			pop r9
			pop rbp
			ret
