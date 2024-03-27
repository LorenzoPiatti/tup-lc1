
# FOR - establece la variable iteradora en cada valor de una lista, arreglo o cadena
# proporcionada y repite el código en el cuerpo del bucle for para cada valor de la variable
# iteradora.

lista = [1, 2, 3, 4]

for i in lista:
    print(i, end=", ") # 1, 2, 3, 4,
print("\n")

# RANGE CON 1 ARGUMENTO - si se llama a range() con un solo argumento,Python asume inicio = 0.
for i in range(5):
    print(i, end=", ") # 0, 1, 2, 3, 4,
print("\n")

# RANGE CON 3 ARGUMENTOS - incia en el primero, al segundo no lo toca, el tercero es el paso.
for i in range(0, 5, 1):
    print(i, end=", ") # 0, 1, 2, 3, 4,
print("\n")