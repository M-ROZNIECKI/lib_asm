segment .text
global ft_atoi_base
ft_atoi_base:
				push rbp
				push r9 ;sign of res
				push r10 ;char of one number of the base
				push r11 ;pos base
				push r13 ;size base
				mov r13, 0x0
				mov r11, 0x0
				mov r10b, [rsi]
				mov r9, 0x0
				mov rax, 0x0
				ft_valid_base:
					cmp byte [rsi], 0x0
					je ft_base_is_valid
					cmp byte [rsi], 0x09
					jl ft_inc_valid
					cmp byte [rsi], 0x0d
					jle real_end
					cmp byte [rsi], 0x020
					je real_end
					cmp byte [rsi], 0x02b
					je real_end
					cmp byte [rsi], 0x02d
					je real_end
				ft_inc_valid:
					inc r13
					inc rsi
					jmp ft_valid_base
                ft_base_is_valid:
                	cmp r13, 0x01
                	jle real_end
					sub rsi, r13
				ft_pass_whitespace:
					cmp byte [rdi], 0x09
					jl ft_pass_symb
					cmp byte [rdi], 0x0d
					jle ft_inc_white
					cmp byte [rdi], 0x020
					jne ft_pass_symb
					jmp ft_inc_white
				ft_inc_white:
                	inc rdi
                	jmp ft_pass_whitespace
				ft_change_sign:
					xor r9, 0x01
					inc rdi
					jmp ft_pass_symb
				ft_inc_plus:
					inc rdi
                ft_pass_symb:
					cmp byte [rdi], 0x02d
					je ft_change_sign
					cmp byte [rdi], 0x02b
					je ft_inc_plus
				ft_convert_num:
					cmp byte r10b, 0x0
					je end
					cmp byte [rdi], r10b
					jne ft_inc_conv
					imul rax, r13
					add rax, r11
					sub rsi, r11
					mov r11, 0x0
					mov r10b, [rsi]
					inc rdi
					jmp ft_convert_num
				ft_inc_conv:
					inc r11
					inc rsi
					mov r10b, [rsi]
					jmp ft_convert_num
				end:
				cmp r9, 0
				je real_end
				neg rax
				real_end:
				pop r9
				pop r10
				pop r11
				pop r13
				pop rbp
				ret
