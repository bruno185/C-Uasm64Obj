.data
myString db "Salut mon pote !"
endOfString db 0

.code 

DoTest proc

    mov rax,rcx
    test rax,rax
    .if(ZERO?)
        mov rax,0
        jmp fin
    .endif
    cmp rax,4
    .if(LESS?)
        mov rax, 1000
        jmp fin
    .endif
    add rax, rdx
fin:
    .for (rdx=0: rdx < 0x5 : rdx++)
    inc rax
    .endfor
    ret
DoTest endp

end
