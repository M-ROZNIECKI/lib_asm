segment .text
global _ft_list_push_front
_ft_list_push_front:
					push rbp
					cmp rsi, 0x0
					je end
					cmp qword [rdi], 0x0
					je make_new
					push r9
					mov r9, [rdi]
					mov qword [rsi + 1], r9
					mov r9, [rsi]
					mov qword [rdi], r9
					pop r9
					make_new:
								mov [rdi], rsi
					end:
					pop rbp
					ret