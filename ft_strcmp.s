segment .text
global _ft_strcmp
_ft_strcmp:
			push rbp
			push r9
			push r10
			mov r9, 0
			mov r10, 0
			mov r9b, [rsi]
			while:	cmp byte [rsi], 0
					mov r9b, [rsi]
					je endwhile
					cmp byte [rdi], r9b
					jne endwhile
					inc rsi
					inc rdi
					jmp while
			endwhile:
			mov r10b, [rdi]
			sub r9d, r10d
			mov eax, r9d
			pop r9
			pop r10
			pop rbp
			ret
