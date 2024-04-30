def registrar_empleado(empleados):
    nombre = str(input("Ingrese el nombre y apellido: \n"))
    no_encontrado = False
    for diccionario_empleados in empleados:
        if diccionario_empleados["nombre"] == nombre:
            print("El empleado ya se encuentra registrado\n")
            no_encontrado = True
            break
    if no_encontrado == False:
        dni = int(input("Ingrese el DNI: \n"))
        diccionario_empleados = {"nombre": nombre, "dni": dni, "faltas": 0}
        empleados.append(diccionario_empleados)
    return (empleados)

def agregar_falta(empleados):
    dni = int(input("Ingrese el DNI del empleado: \n"))
    encontrado = False
    for diccionario_empleados in empleados:
        if dni == diccionario_empleados["dni"]:
            encontrado = True
            falta = int(input("Ingrese las faltas del empleado: \n"))
            diccionario_empleados["faltas"] += falta
            print("Las faltas se agregaron correctamente.")
            break
    if encontrado == False:
        print("El DNI ingresado no se encuentra registrado en el sistema\n")
    return (empleados)

def resumen_empleado(empleados):
    for diccionario_empleados in empleados:
        print("Empleado:")
        print(f"Nombre: {diccionario_empleados['nombre']}")
        print(f"DNI: {diccionario_empleados['dni']}")
        print(f"Faltas: {diccionario_empleados['faltas']}\n")
    return (empleados)