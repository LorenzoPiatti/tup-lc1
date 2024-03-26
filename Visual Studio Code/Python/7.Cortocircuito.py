
# Cuando Python detecta que no se gana nada evaluando el resto de una expresión lógica,
# detiene su evaluación y no realiza el cálculo del resto de la expresión.

# EJEMPLO:
def test():
    print("Se llamó a la función:")
    return True

print(True and test())
print(False and test())  # La función no se ejecutará.

print(True or test())    # La función no se ejecutará.
print(False or test())


# OTRO EJEMPLO:
print(5 and 1) # 1
print(5 and 0) # 0
print(0 and 5) # 0

print(5 or 1) # 5
print(1 or 5) # 1
print(5 or 0) # 5
print(0 or 5) # 5