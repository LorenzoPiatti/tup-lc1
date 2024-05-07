'''El siguiente ejemplo implementa todo lo explicado hasta aquí:
Se implementa una clase llamada Alumno, que posee un atributo de clase (nro_alumnos) que lleva la cuenta de los objetos instanciados.
Cada objeto posee un nombre y una nota.  
Se definen métodos para inicializar sus atributos, imprimir el estado del objeto, procesar su eliminación de la memoria y para mostrar un texto con su estado. El estado es “regular” (nota menor o igual a 4), “bueno” (nota mayor a 4 y menor que 9) o “excelente” (nota mayor que 9).
En el programa principal se instancian dos objetos de la clase Alumno y se muestran algunas de sus características. Al salir del programa se ve como son eliminados de la memoria'''

'''class Alumno: # Creamos la clase
    nro_alumnos = 0 # Cantidad de legajos existentes

    #Constructor
    def __init__(self,nombre,nota):
        self.nombre = nombre
        self.nota = nota
        Alumno.nro_alumnos += 1 # Agregamos un legajo

    # Mostrar datos del objeto
    def __str__(self): 
        return f"Nombre: {self.nombre} (nota: {self.nota})"

    # Damos de baja el alumno
    def __del__(self): 
        Alumno.nro_alumnos -= 1 # Restamos un legajo
        print("Alumno dado de baja.")
        print(f"{Alumno.nro_alumnos} legajos restantes.")
        
    def mostrar_estado(self): # ¿está aprobado?
        print(f"El estado de {self.nombre} es ",end="" )
        if self.nota <= 4:
            print("regular")
        elif self.nota < 9:
            print("bueno")
        else:
            print("excelente")

#Programa Principal
alumno1 = Alumno("Aldo López", 8)
alumno2 = Alumno("Juana Martín", 3)
print(alumno1) # Nombre: Aldo López (nota: 8) 
print(alumno2) # Nombre: Juana Martín (nota: 3)
alumno1.mostrar_estado() # El…de Aldo López es bueno
alumno2.mostrar_estado() # El…Juana Martín es regular
input("Pulse enter para salir")'''


#Ejercicio 1 Practica Unidad 3
'''class Usuario:
    
    def __init__(self, user_name, estado, email, contraseña, nombre, apellido, fecha_alta, fecha_baja) -> None:
        self.user_name = user_name
        self.estado = True
        self.email = email
        self.contraseña = contraseña
        self.nombre = nombre
        self.apellido = apellido
        self.fecha_alta = datetime.datetime.now()
        self.fecha_baja = None
        
    def validar_credenciales(self, user_name: str, contraseña: str) -> bool:
        user_name = input('Ingrese su usuario: ')
        contraseña = input('Ingrese su contraseña: ')
        if self.user_name == user_name and self.contraseña == contraseña:
            return self.user_name and self.contraseña
        else:
            print("Usuario o contraseña incorrecta")
        
    def baja_usuario(self) -> None:
        self.estado = False
        self.fecha_baja = datetime.datetime.now()
        
import datetime'''

'''Problema 2:
Ahora plantearemos otro problema empleando herencia. Supongamos que necesitamos implementar dos clases que llamaremos Suma y Resta. Cada clase tiene como atributo valor1, valor2 y resultado. Los métodos a definir son cargar1 (que inicializa el atributo valor1), carga2 (que inicializa el atributo valor2), operar (que en el caso de la clase "Suma" suma los dos atributos y en el caso de la clase "Resta" hace la diferencia entre valor1 y valor2), y otro método mostrar_resultado.

Si analizamos ambas clases encontramos que muchos atributos y métodos son idénticos. En estos casos es bueno definir una clase padre que agrupe dichos atributos y responsabilidades comunes.'''

'''class Operacion:
    def __init__(self) -> None:
        self.valor1 = 0
        self.valor2 = 0
        self.resultado = 0
    def cargar1(self) -> int:
        self.valor1 = int(input("Ingrese el primer valor: \n"))
    def cargar2(self) -> int:
        self.valor2 = int(input("Ingrese el segundo valor: \n"))
    def mostrar_resultado(self) -> None:
        print("El resultado de la resta de los numeros es: ", self.resultado)
        
class Suma(Operacion):
    def sumar(self) -> int:
        self.resultado = self.valor1 + self.valor2
class Resta(Operacion):
    def restar(self) -> int:
        self.resultado = self.valor1 - self.valor2
        
suma1 = Operacion()
suma1.'''

"""Declarar una clase Cuenta y dos subclases Caja Ahorra y PlazoFijo. Definir los atributos y métodos comunes entre una caja de ahorro y un plazo fijo y agruparlos en la clase Cuenta.
Una caja de ahorro y un plazo fijo tienen un nombre de titular y un monto. Un plazo fijo añade un plazo de imposición en días y una tasa de interés. Hacer que la caja de ahorro no genera intereses.
En el bloque principal del programa definir un objeto de la clase CajaAhorro y otro de la clase PlazoFijo."""

'''class Cuenta:
    def __init__(self, titular, monto) -> None:
        self.titular = titular
        self.monto = monto
    def imprimir(self):
        print(self.titular)
        print(self.monto)

class CajaAhorra(Cuenta):
    def __init__(self, titular, monto) -> None:
        super().__init__(titular, monto)
    def imprimir(self):
        print("Cuenta de ahorro: ")
        super().imprimir()

class PlazoFijo(Cuenta):
    def __init__(self, titular, monto, interes, plazo) -> None:
        super().__init__(titular, monto)
        self.plazo = plazo
        self.interes = interes
    def imprimir(self):
        print("Plazo fijo: ")
        super().imprimir()
        print("Plazo en dias: ", self.plazo)
        print("Interes: ", self.interes)
        self.ganancia_interes()
    def ganancia_interes(self):
        pass'''
        
"""Se desea implementar un programa para gestionar vehículos. Cada vehículo tiene una marca y un modelo. Además, existen dos tipos de vehículos: automóviles y motocicletas. Los automóviles pueden tener un número específico de puertas, mientras que las motocicletas tienen una cilindrada determinada.

Para ello, se proporciona una clase base Vehiculo que tiene como atributos marca y modelo, y un método descripcion() que devuelve una cadena con la descripción del vehículo.

Se pide implementar las clases Automovil y Motocicleta, que heredan de la clase base Vehiculo, y añaden los atributos adicionales puertas (para automóviles) y cilindrada (para motocicletas). Además, se debe sobrescribir el método descripcion() en cada una de las clases derivadas para incluir la información adicional correspondiente a cada tipo de vehículo."""

'''Enunciado:
Crear una clase abstracta llamada Animal que tenga un método abstracto llamado hablar(). Luego, crear una clase concreta llamada Perro que herede de Animal y defina su propio método hablar() para que imprima "Guau".'''

from abc import ABC, abstractmethod

class Animal(ABC):
    @abstractmethod
    def hablar(self):
        pass
    
class Perro(Animal):
    def hablar(self):
        print("Guau")
        
mi_perro = Perro()
mi_perro.hablar()