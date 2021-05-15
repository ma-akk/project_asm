extern ___error
global _ft_read

section .text
_ft_read:
			mov rax, 0x2000003
			syscall
			jc _error
			ret
	_error:	push rax
			call ___error
			pop rdx
			mov [rax], rdx
			mov rax, -1
			ret