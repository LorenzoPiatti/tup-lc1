
# FUNCIONES LAMBDA - son una forma corta de declarar funciones pequeñas y anónimas:

# EJEMPLO:
area = lambda x, y: print(x*y)
area(4, 5)

# OTRO EJEMPLO:
cuadrado = lambda x: print(x ** 2)
cuadrado(4) # 4 al cuadrado = 16


# DEFINICIÓN DE UNA FUNCIÓN SIN LAMBDA:
def z(a):
    a = a ** 2
    return a
print(z(4)) # 4 al cuadrado = 16