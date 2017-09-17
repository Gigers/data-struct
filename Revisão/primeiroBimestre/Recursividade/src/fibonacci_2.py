'''
    Para evitar que os mesmos valores sejam calculados
    pelas varias chamadas de Fibonacci, pode-se utilizar dicionarios (Python)

    Assim e possivel manter sob controle os valores ja calculados
    e evitar que eles sejam calculados novamente

    Veja que depois de otimizado, o codigo fica muito mais rapido
    pois nao calcula novamente valores que ja foram calculados
'''

import time

dicto = {}

def fibboHigh(numero):

    print ('fib(%d)' %numero)
    
    if numero <= 2:
        return 1
    else:
        if numero not in dicto:
           dicto[numero] = fibboHigh(numero - 1) + fibboHigh(numero - 2)
        return dicto[numero] 

def fibbo(numero):

    a, b = 0, 1

    while(a < numero):
        print(a)

        a, b = b, a + b

startR = time.time()

fibboHigh(30)

endR = time.time()

start = time.time()

fibbo(30)

end = time.time()

print("O tempo para calculo com recursao otimizada e " + str((endR - startR)))
print("O tempo para calculo sem recursao e " + str((end - start)))
