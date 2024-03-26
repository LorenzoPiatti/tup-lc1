
# Los booleanos de toda la vida:
print(10 > 9)
print(9 > 10)
print(10 == 9)


# FALSE:     vacío, falso, 0 o 'None'.
# VERDADERO: cadena, verdadero o cualquier núm.


# FALSO:
print(bool(False))
print(bool(None))
print(bool(0))
print(bool(""))
print(bool(()))
print(bool([]))
print(bool({}))


# isinstance() - para determinar si un objeto es de cierto tipo de datos:
x = 200
print(isinstance(x, int))