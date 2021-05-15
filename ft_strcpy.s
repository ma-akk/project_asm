global _ft_strcpy

section .text
_ft_strcpy:
			xor rax, rax
			xor rcx, rcx
	.lp		mov al, byte[rsi + rcx]
			mov byte [rdi + rcx], al
			test al, al
			je .return
			inc rcx
			jmp .lp
	.return	mov rax, rdi
			ret