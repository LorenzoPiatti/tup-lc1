def cursos():
    while True:
        print("\nSeleccione un curso:")
        print("1. PHP")
        print("2. Python")
        print("3. C#")
        print("4. HTML y CSS")
        print("5. Java")
        print("6. JS")
        print("7. Ruby")
        print("8. Git")
        print("9. Salir")
        
        opcion = int(input("Ingrese la opcion correspondiente: "))
        
        if opcion == "1":
            return "PHP"
        elif opcion == "2":
            return "Python"
        elif opcion == "3":
            return "C#"
        elif opcion == "4":
            return "HTML y CSS"
        elif opcion == "5":
            return "Java"
        elif opcion == "6":
            return "JS"
        elif opcion == "7":
            return "Ruby"
        elif opcion == "8":
            return "Git"
        elif opcion == 9:
            return "Salir"
        else:
            print("Opción inválida. Por favor, ingrese una opción válida.")
        