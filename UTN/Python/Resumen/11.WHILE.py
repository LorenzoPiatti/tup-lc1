
# WHILE - se ejecuta siempre que, o mientras , cierta condición sea verdadera.

numero = 1
while numero <= 5:
    print(numero)
    numero += 1

# 1
# 2
# 3
# 4
# 5


# REQUERIR SALIDA - mantendremos el programa ejecutándose mientras el usuario no haya ingresado el valor de salida.
    
texto = """Ingresa una palabra, 
si ingresas 'quit' se detiene el prorama: """

mensaje = ""

while mensaje != "quit":
    mensaje = input(texto)
    print(mensaje)


# REQUERIR SALIDA CON 'break':

texto = """Ingresa una palabra, 
si ingresas 'quit' se detiene el prorama: """

mensaje = ""

while True:
    mensaje = input(texto)

    if mensaje == "quit":
        break