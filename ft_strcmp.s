section .text
global _ft_strcmp
_ft_strcmp:

while:
	movzx	rax, byte [rdi]
	movzx	rcx, byte [rsi]
    sub		rax, rcx
	jnz		return
	cmp		byte [rdi], 0
	je		return
	inc		rdi
	inc		rsi
    jmp		while

return:
    ret
