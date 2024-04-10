#Duplicar cada elemento de una lista:
numeros = [1,2,4,5,6,7]
duplicada = list(map(lambda x : x * 2,numeros))
print ("duplicar:", duplicada, "\n")

#Filtrar números mayores que 5:
numeros = [1,2,4,5,6,7]
mayores_a_5 = list(filter(lambda x : x>5,numeros))
print ("filtrar:", mayores_a_5, "\n")

#1-Ordenar una lista de números de forma ascendente:
#Escribe un programa que ordene una lista de números de forma ascendente utilizando una expresión lambda.

numeros = [2,5,1,3,45,34,123,12]
lista_ascendente = sorted(numeros, key=lambda x: x)
print("1:", lista_ascendente, "\n")

#2-Ordenar una lista de cadenas por longitud:
#Escribe un programa que ordene una lista de cadenas por longitud, de la más corta a la más larga, utilizando una expresión lambda.

cadenas = ["a todos", "hola", "yo soy el leon"]
lista_ordenada = sorted(cadenas, key=lambda x: len(x))
print("2:", lista_ordenada, "\n")

#3-Filtrar números pares de una lista:
#Escribe un programa que filtre los números pares de una lista utilizando una expresión lambda.

numeros = [1,2,3,4,5,6,7,8,9,10]
pares = list(filter(lambda x: x % 2 == 0, numeros))
print("3:", pares, "\n")

#4-Filtrar palabras que comienzan con una letra específica:
#Escribe un programa que filtre las palabras de una lista que comiencen con una letra específica utilizando una expresión lambda.

palabras = ['manzana', 'banana', 'pera', 'sandía', 'melón', 'papaya', 'cereza']
letra_especifica = 'm'
palabras_filtradas = list(filter(lambda palabra: palabra.startswith(letra_especifica), palabras))
print("4:", palabras_filtradas, "\n")

#5-Ordenar una lista de tuplas por el segundo elemento:
#Escribe un programa que ordene una lista de tuplas por el valor del segundo elemento de cada tupla utilizando una expresión lambda.

tuplas = [('A', 3), ('B', 1), ('C', 5), ('D', 2)]
tuplas_ordenadas = sorted(tuplas, key=lambda x: x[1])
print("5:", tuplas_ordenadas, "\n")

#6-Filtrar números primos de una lista:
#Escribe un programa que filtre los números primos de una lista utilizando una expresión lambda y una función auxiliar para verificar si un número es primo.

def es_primo(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

numeros = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]
primos = list(filter(lambda x: es_primo(x), numeros))
print("6:", primos, "\n")

#7-Ordenar una lista de diccionarios por el valor de una clave específica:
#Escribe un programa que ordene una lista de diccionarios por el valor de una clave específica en cada diccionario utilizando una expresión lambda.

lista_diccionarios = [{'nombre': 'Juan', 'edad': 30},{'nombre': 'María', 'edad': 25},{'nombre': 'Pedro', 'edad': 35},{'nombre': 'Ana', 'edad': 28}]
clave_especifica = 'edad'
ordenar_diccionarios = sorted(lista_diccionarios, key=lambda x: x[clave_especifica])
print("7:", ordenar_diccionarios, "\n")

#8-Filtrar elementos que cumplen una condición específica:
#Escribe un programa que filtre los elementos de una lista que cumplan una condición específica utilizando una expresión lambda.

numeros = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100]
numeros_mayores_que_50 = list(filter(lambda x: x > 50, numeros))
print("8:", numeros_mayores_que_50, "\n")

#9-Ordenar una lista de cadenas ignorando mayúsculas y minúsculas:
#Escribe un programa que ordene una lista de cadenas ignorando las diferencias entre mayúsculas y minúsculas utilizando una expresión lambda.

cadenas = ['Python', 'java', 'C++', 'Rust', 'JavaScript', 'GO']
cadenas_ordenadas = sorted(cadenas, key=lambda x: x.lower())
print("9:", cadenas_ordenadas, "\n")

#10-Filtrar elementos que contienen una subcadena específica:
#Escribe un programa que filtre los elementos de una lista que contengan una subcadena específica utilizando una expresión lambda.

nombres = ['Juan', 'María', 'Pedro', 'Ana', 'Roberto', 'Carla', 'Sofía']
subcadena = 'ar'
nombres_filtrados = list(filter(lambda nombre: subcadena in nombre, nombres))
print("10:", nombres_filtrados, "\n")