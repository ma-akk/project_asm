global _ft_strcmp

section .text
_ft_strcmp:
			xor rax, rax
			xor rdx, rdx
			xor rcx, rcx
	.lp		mov al, byte [rdi + rcx]
			mov dl, byte [rsi + rcx]
			sub rax, rdx
			jnz .return
			test dl, dl
			je .return
			inc rcx
			jmp .lp
	.return ret