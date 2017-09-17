'''
    Para exemplificar o problema que levantei no codigo rec_2.c
    Veja este algoritimo em Python que ira mostrar quantas vezes
    um mesmo numero e calculado

    E ainda o tempo que um simples while leva para fazer o calculo comparado a recursao.

    Veja que a velocidade parece ser boa, porem ha muitos valores sendo calculados sem necessidade

'''

import time

def fiboR(numero):

    print(numero)

    if numero <= 2:
        return 1;
    else:
        return fiboR(numero - 1) + fiboR(numero - 2)

def fibo(numero):

    a, b = 0, 1

    while(a < numero):
        print(a)

        a, b = b, a + b

startR = time.time()

fiboR(30)

endR = time.time()

start = time.time()

fibo(30)

end = time.time()

print("O tempo para calculo com recursao e " + str((endR - startR)))
print("O tempo para calculo sem recursao e " + str((end - start)))
