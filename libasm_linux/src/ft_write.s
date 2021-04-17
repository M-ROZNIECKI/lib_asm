extern __errno_location

segment .text
global ft_write
ft_write:
			push rbp
			push r9
			mov rax, 0x01
			syscall
			cmp rax, 0x0
			jge end
			mov r9, rax
			push rax
			call __errno_location WRT ..plt
			neg r9
			mov [rax], r9
			pop rax
			mov eax, -1
			end:
			pop r9
			pop rbp
			ret
