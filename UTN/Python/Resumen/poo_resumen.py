#POO
#Siempre para definirlas se usa "PascalCase o UpperCamelCase que son sinonimos" "EjemploUno" "Para definir tanto atributos como compartamientos"
#1 Clase esta Compuesta por:
#* Atributos (Caracteristicas)
#* Metodos (Comportamientos)

#Cada objeto, pertenece a una clase 

#ABSTRACCION:
#Modelo de un objeto, o fenomeno del mundo real pero limitado al contexto especifico para el sistema que estoy desarrollando
#Tendra solo los datos relevantes para la funcion y omitiendo los que no son relevantes
#Ejemplo: Atributos y metodoos tecnicos del avion (Atributos: Motor, tamaño, horas de vuelo) (Metodo: Fly)
#Pero si voy a necesitar, (Atributo) numero de asiento y Metodo: (Reservar asiento como metodo)

#ENCAPSULAMIENTO:
#El proceso de encender el auto, no lo conozco. (En cada modelo de vehiculo el sistema de arranque es distinto)
#En cualquier forma, tengo 1 forma de encender el vehiculo de una manera sencilla. (Caja negra de la complejidad de encender el vehiculo)
#Encapsular es esconder el "comportamiento" y el "estado", que no debe ser expuesto para no ser "modificado" ni "acceda" cualquiera.
#Valores: 
#Atributos:  "Estado"           (Privado)   -
#            "Nombre"           (Publico)   +       
#Metodo:    "Comportamiento"    (Privado)   -
#            "Correr"           (Publico)   +

#Siempre por lo menos tiene que tener un atributo publico para poder comunicarse con otro objeto
#Si yo no encapsulo, produzco 1 "ACOMPLAMIENTO"

#HERENCIA:
#La capacidad que tengo de extender codigo que hay en una clase, y reutilizarlo en otra clase. (Para no duplicar codigo)
#En lugar de copiar codigo, vamos a extenderlo desde la clase padre a la clase hija.
#Clase Padre o SuperClase: Animales
#Clase Hijas o SubClase: Clase Perro - Clase Gato
#Atributo: Color lo pueden heredar todas las subclases
#Metodo: Comer lo pueden heredar todas las subclases
#A parte cada subclase, va a tener sus atributos y sus metodos particulares de cada clase.

#CONSTRUCCION DEL MODELO:
#LA SUPERCLASE: tiene que tener todos los atributos y todos los metodos que van a usar todas las subclases  ejemplo: Vehiculos
#A su vez: puede haber una clase padre como por ejemplo: vehiculo terrestres
#Que seria hija de la superclase pero padre de: Pickup, automovil, motocicleta
#Los atributos y metodos que heredan respetan el tipo de dato del padre en cuestion.

#Eliminar objeto:
#Cuando llamo a eliminar .eliminar, va a "AUDITAR" automaticamente (Registro de informacion)

#POO

# class Alumno():

#Metodo constructor  #Siempre que necesito instanciar una clase necesito un constructor.
#        def __init__(self, nombre:str, legajo:str, anio_comienzo:int) -> None:     
#         self.nombre:str = nombre
#         self.legajo:str = legajo
#         self.anio_comienzo:int = anio_comienzo
        

#from alumno import Alumno

# #Instanciando objeto del tipo alumno
# var = int(1)
# obj = Alumno()

# print(type(var))
# print(type(obj))

# #Class determina que es un objeto, en python son todos objetos.

# from alumno import Alumno

# alumno_1 = Alumno() #Instanciando alumno_1eto del tipo alumno
# alumno_2 = Alumno()

# #Accediendo al valor almacenado en un atributo
# print(alumno_1.nombre)   
# print(alumno_1.legajo) 
# print(alumno_1.anio_comienzo) 

# #Modificacion de un valor de un atributo
# alumno_2.nombre = "Maria"       
# print(alumno_2.nombre) 

# #Al crear dos alumnos, ambos van a quedar con los valores del constructor


#Nunca vamos a poner ningun print ni ningun input para preservar la separacion en capas






