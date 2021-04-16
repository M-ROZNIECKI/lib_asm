extern ___error

segment .text
global _ft_write
_ft_write:
			push rbp
			push r9
			mov rax, 0x2000004
			syscall
			jnc end
			mov r9, rax
			push rax
			call ___error
			mov qword [rax], r9
			pop rax
			mov eax, -1
			end:
			pop r9
			pop rbp
			ret
