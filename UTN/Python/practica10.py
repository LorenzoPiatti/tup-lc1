from funciones10 import *
empleados = []
menu_principal = True
while menu_principal == True:
    print("\nMenu principal:")
    print("1. Registrar Empleado")
    print("2. Agregar Falta")
    print("3. Mostrar Registro de Empleados")
    print("4. Salir")
    opcion = int(input("Ingrese una opcion: \n"))
    if opcion == 1:
        registrar_empleado(empleados)
    elif opcion == 2:
        agregar_falta(empleados)
    elif opcion == 3:
        resumen_empleado(empleados)
    elif opcion == 4:
        menu_principal = False
        print("Saliendo del programa..")
    else:
        print("Opcion invalida, ingrese una opcion valida")