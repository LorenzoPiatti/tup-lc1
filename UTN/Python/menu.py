while True:
    from funcionMenu import mostrar_menu
    print(mostrar_menu)
    opcion = input("Seleccione una opción: ")
    
    if opcion == "1":
        opcion_1()
    elif opcion == "2":
        opcion_2()
    elif opcion == "3":
        opcion_3()
    elif opcion == "4":
        opcion_4()
    elif opcion == "5":
        opcion_5()
    elif opcion == "0":
        print("Saliendo del programa...")
        break
    else:
        print("Opción no válida. Por favor, seleccione una opción del menú.")