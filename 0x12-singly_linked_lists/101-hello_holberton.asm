
	global	main
	extern	printf

main:
	mov	ax,p
	xor	eax,eax
	call	printf
	mov	eax,0
p: db 'Hello, Holberton\n',0
