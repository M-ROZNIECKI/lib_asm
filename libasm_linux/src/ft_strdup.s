extern ft_strlen
extern ft_strcpy
extern malloc

segment .text
global ft_strdup
ft_strdup:
			push rbp
			push r9
			push r12
			mov r12, rdi
			push r12
			call ft_strlen
		    mov r9, rax
			inc r9
			mov rdi, r9
			call malloc WRT ..plt
			mov rdi, rax
			pop r12
			mov rsi, r12
			call ft_strcpy
			pop r12
			pop r9
			pop rbp
			ret

