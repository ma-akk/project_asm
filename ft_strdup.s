extern ___error
extern _malloc
extern _ft_strlen
extern _ft_strcpy
global _ft_strdup

section .text
_ft_strdup:
			push rdi
			call _ft_strlen
			inc rax
			mov rdi, rax
			call _malloc
			test rax, rax
			jz _error
			pop rsi
			mov rdi, rax
			call _ft_strcpy
			ret
	_error:	push rax
			call ___error
			pop rdx
			mov [rax], rdx
			mov rax, 0
			ret