extern	_ft_strlen
extern	_malloc
extern	_ft_strcpy
section	.text
global	_ft_strdup
_ft_strdup:
	push	rdi
	call	_ft_strlen
	inc		rax
	mov		rdi, rax
	call	_malloc
	cmp		rax, 0
	je		return
	pop		rsi
	mov		rdi, rax
	call	_ft_strcpy
	ret

return:
	pop		rdi
	ret