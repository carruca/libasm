section .text
global _ft_strlen
_ft_strlen:
	xor	eax, eax

while:
	cmp	byte [rdi + rax], 0
	je	return
	inc	rax
	jmp	while

return:
	ret
