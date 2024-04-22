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

