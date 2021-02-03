section .text
global _ft_strcpy
_ft_strcpy:
	xor	rcx, rcx

copy:
	mov	dl, byte [rsi + rcx]
	mov	byte [rdi + rcx], dl
	cmp	dl, 0
	je	return
	inc	rcx
	jmp	copy

return:
	mov rax, rdi
	ret
