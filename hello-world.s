global start

section .text
start:
	mov rax, SYS_WRITE
	mov rdi, STDOUT
	mov rsi, msg
	mov rdx, len
	syscall									; execute a system call
	mov rax, SYS_EXIT
	mov rdi, EXIT_SUCCESS
	syscall									; execute a system call

section .data
	msg 			db 	"Hello world!", 10	; 10 is the ASCII code for LF
	len 			equ	$ - msg				; lenght of the string (nbytes)
	STDOUT 			equ	1
	SYS_WRITE 		equ 0x2000004			; system call for write on mac	
	SYS_EXIT		equ	0x2000001			; system call for exit on mac
	EXIT_SUCCESS	equ	0					; exit code 0 (POSIX)
