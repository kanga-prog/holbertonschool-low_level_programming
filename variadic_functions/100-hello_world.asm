section .data
    hello db 'Hello, World', 10  ; "Hello, World" suivi d'une nouvelle ligne (ASCII 10)

section .text
    global _start

_start:
    ; Appel système pour écrire (numéro d'appel système 1 : sys_write)
    ; Arguments :
    ;   rdi = descripteur de fichier (1 pour stdout)
    ;   rsi = pointeur vers le message (hello)
    ;   rdx = nombre de bytes à écrire
    mov rdi, 1                  ; descripteur de fichier 1 (stdout)
    mov rsi, hello              ; pointeur vers le message
    mov rdx, 14                 ; longueur du message (13 caractères + 1 pour la nouvelle ligne)
    mov rax, 1                  ; numéro de l'appel système pour sys_write (1)
    syscall                     ; appel système

    ; Appel système pour quitter (numéro d'appel système 60 : sys_exit)
    mov rax, 60                 ; numéro de l'appel système pour sys_exit (60)
    xor rdi, rdi                ; code de sortie 0
    syscall                     ; appel système pour quitter

