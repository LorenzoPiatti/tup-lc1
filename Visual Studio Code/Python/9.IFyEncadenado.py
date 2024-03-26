
# IF - solo si condición se evalúa a True, se ejecutarán las sentencias que forman parte de
# bloque de código.

# EJEMPLO - OPCIONES MÚLTIPLES:
autos = ["audi", "bmw", "toyota"]

for auto in autos:
    if auto == "bmw":
        print(auto.upper())
    else:
        print(auto.title())


# ENCADENAMIENTO:
numero = 35
if 0 <= numero <= 100: # Antes teníamos que poner "if num >= 0 and num <= 100"
    print(f"El número {numero} se encuentra entre el 0 y el 100.")


# OTRO EJEMPLO:
base, altura, profundidad = 20, 25, 21
if base == altura == profundidad:
    print("La figura es un cubo.")
else:
    print("La figura no es un cubo.")


# IF - ELIF - ELSE:
cuotas = 6
if cuotas <= 3:
    print("La compra no tiene recargo.")
elif cuotas <= 6:
    print("La compra tiene un 20% de recargo.")
else:
    print("La compra tiene un 60% de recargo.")