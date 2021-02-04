section .text
global _ft_strcmp
_ft_strcmp:
	xor	ecx, ecx
	cmp	byte [rdi + rcx], 0
	je	return
	cmp	byte [rsi + rcx], 0
	je	return

while:
	mov dl, byte [rdi + rcx]
	cmp byte [rsi + rcx], dl
    jne return
	inc	rcx
    jmp while

return:
	mov	dl, byte [rdi + rcx]
	sub	dl, byte [rsi + rcx]
	mov rax, rdx
    ret
