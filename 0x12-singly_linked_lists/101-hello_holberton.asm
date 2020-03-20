SECTION .data
	msg: db "Hello, Holberton", 0ah ; assign our string to msg variable

SECTION .text
global  main

main:
	mov edx, 17     ; number of chars to write, plus 0ah (hex for '\n')
	mov ecx, msg    ; move the mem address of our string into ecx
	mov ebx, 1      ; write to the STDOUT file
	mov eax, 4      ; invoke SYS_WRITE (kernel opcode 4)
	int 80h	    	; call kernel. mov eax-mov edx can also be reversed

	mov ebx, 0      ; return 0 exit status
	mov eax, 1      ; invoke SYS_EXIT (kernel opcode 1)
	int 80h	    	; call kernel. mov eax-mov ebx can also be reversed
