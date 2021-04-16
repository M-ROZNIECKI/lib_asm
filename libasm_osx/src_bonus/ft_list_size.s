segment .text
global _ft_list_size
_ft_list_size:
				push rbp
				cmp rdi, 0x0
				mov rax, 0x0
				je end
				inc rax
				while1:
						cmp qword [rdi + 1], 0
						je end
						inc rax
						mov rdi, [rdi + 1]
						jmp while1
				end:
				pop rbp
				ret