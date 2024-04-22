#Ejercicio 1 Practica Unidad 3

import datetime
    
class Usuario:
    
    def __init__(self, user_name, estado, email, contraseña, nombre, apellido, fecha_alta, fecha_baja) -> None:
        self.user_name = user_name
        self.estado = False
        self.email = email
        self.contraseña = contraseña
        self.nombre = nombre
        self.apellido = apellido
        self.fecha_alta = None
        self.fecha_baja = None

    def dar_alta(self):
        self.fecha_alta = datetime.date.today()
        self.estado = True

    def baja_usuario(self):
        self.estado = False
        self.fecha_baja = datetime.datetime.now()

    def validar_credenciales(self, user_name: str, contraseña: str) -> bool:
        user_name = input('Ingrese su usuario: ')
        contraseña = input('Ingrese su contraseña: ')
        if self.user_name == user_name and self.contraseña == contraseña:
            return self.user_name and self.contraseña
        else:
            print("Usuario o contraseña incorrecta")