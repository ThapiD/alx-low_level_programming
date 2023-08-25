section .data
	text db "Hello, Holberton", 0
	format db "%s", 10, 0

section .text
	global main
	extern printf

main:
	push rbp
	mov rdi, format
	mov rsi, text
	call printf
	mov eax, 0
	ret
