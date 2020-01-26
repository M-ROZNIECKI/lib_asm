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
			sub r9d, r10d;	r9d and r10d and not r9b and r10b or else
			mov eax, r9d;	sub break if the res of sub is neg,
			pop r9;			that is why i set r9 and r10 at '0' at the beginning
			pop r10
			pop rbp
			ret
