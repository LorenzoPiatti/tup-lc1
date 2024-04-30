import ValidadorPreParcial
import CursosPreParcial

empleados = []

# 1. Registrar empleados
def registrar_empleados():
    nombre = input("Ingrese el nombre: ")
    legajo = input("Ingrese el legajo: ")
    while len(legajo) != 5:
        legajo = input("Legajo invalido, ingrese nuevamente: ")
    antiguedad = int(input("Ingrese la antiguedad en meses: "))
    if antiguedad < 6:
        print("La antiguedad del empleado debe ser mayor a 6 meses.")
        return
    empleado = {"nombre": nombre, "legajo": legajo, "antiguedad": antiguedad, "cursos": []}
    empleados.append(empleado)
    print("El empleado se registro correctamente.")

# 2. Agregar nuevo curso
def agregar_nuevo_curso():
    encontrado = False
    legajo = input("Ingrese el legajo del empleado: ")
    for empleado in empleados:
        if empleado["legajo"] == legajo:
            encontrado = True
            while True:
                print("1. Agregar curso")
                print("2. Salir")
                opcion = int(input("Ingrese la opcion: "))
                if opcion == 1:
                    curso = CursosPreParcial.cursos()
                    empleado["cursos"].append(curso)
                    print("El curso se registro correctamente.\n")
                elif opcion == 2:
                    break
                else:
                    print("Opción inválida. Por favor, ingrese una opción válida.")
    if encontrado == False:
        print("No se encontro empleado con ese legajo.")

# 3. Mostrar resumen
def mostrar_resumen():
    empleados_ordenados = sorted(empleados, key=lambda e: len(e["cursos"]), reverse=True)
    print(f"\nCantidad de empleados: {len(empleados)}")
    for empleado in empleados_ordenados:
        print(f"\nEmpleado: {empleado['nombre']} - Legajo: {empleado['legajo']} - Antiguedad: {empleado['antiguedad']}")
        print(f"Cursos: {' - '.join(empleado['cursos'])}")
        print(f"Cantidad de cursos: {len(empleado['cursos'])}")

# Menu Principal
while True:
    print("\nMenú principal:")
    print("1. Registrar empleados")
    print("2. Agregar nuevo curso")
    print("3. Mostrar resumen")
    print("4. Salir")

    opcion = input("Ingrese la opción deseada: ")

    if opcion == "1":
        registrar_empleados()
    elif opcion == "2":
        agregar_nuevo_curso()
    elif opcion == "3":
        mostrar_resumen()
    elif opcion == "4":
        print("Saliendo del programa...")
        break
    else:
        print("Opción inválida. Por favor, ingrese una opción válida.")