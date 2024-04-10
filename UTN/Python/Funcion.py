def suma(a,b):
    return(a+b)

def resta(a,b):
    return(a-b)

def multiplicacion(a,b):
    return(a*b)

def division(a,b):
    return(a/b)

def eliminar_duplicados(lista):
    lista_nueva = []
    for i in lista:
        if i not in lista_nueva:
            lista_nueva.append(i)
    return lista_nueva

def pares(lista):
    lista_pares = []
    for i in lista:
        if i % 2 == 0:
            lista_pares.append(i)
    return lista_pares

#con lambda:
numeros = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
pares = list(filter(lambda x: x % 2 == 0, numeros))
print(pares)

def impares(lista):
    lista_impares = []
    for i in lista:
        if i % 2 != 0:
            lista_impares.append(i)
    return lista_impares

def es_par(lista):
    return lista % 2 == 0