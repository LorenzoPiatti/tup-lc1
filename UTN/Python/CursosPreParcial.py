def cursos():
    while True:
        print("\nSeleccione un curso:")
        print("1. Python")
        print("2. HTML")
        print("3. CSS")
        print("4. JavaScript")
        print("5. C++")
        print("6. C#")
        print("7. PHP")
        print("8. MATLAB")
        print("9. Salir")
        
        opcion = int(input("Ingrese la opcion correspondiente: "))
        
        if opcion == 1:
            return "Python"
        elif opcion == 2:
            return "HTML"
        elif opcion == 3:
            return "CSS"
        elif opcion == 4:
            return "JavaSceipt"
        elif opcion == 5:
            return "C++"
        elif opcion == 6:
            return "C#"
        elif opcion == 7:
            return "PHP"
        elif opcion == 8:
            return "MATLAB"
        elif opcion == 9:
            return "Salir"
        else:
            print("Opción inválida. Por favor, ingrese una opción válida.")
        