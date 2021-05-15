global _ft_strlen

section .text
_ft_strlen:
			xor rax, rax
	.lp		cmp byte [rdi + rax], 0
			je .return
			inc rax
			jmp .lp
	.return	ret