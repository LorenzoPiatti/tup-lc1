#Ejercicio 1 Practica Unidad 3

from datetime import date
    
class Usuario:
    
    def __init__(self, user_name: str, user_email: str, user_contraseña: str, user_nombre: str, user_apellido: str) -> None:
        self.__user_name: str = user_name
        self.__user_estado: bool = True
        self.__user_email: str = user_email
        self.__user_contraseña: str = user_contraseña
        self.__user_nombre: str = user_nombre
        self.__user_apellido: str = user_apellido
        self.__user_fecha_alta: date = date.today()
        self.__user_fecha_baja: date = None

    def get_user_name(self) -> str:
        return self.__user_name
    
    def get_estado(self) -> bool:
        return self.__user_estado
    
    def set_estado(self, nuevo_estado: bool) -> None:
        self.__user_estado = nuevo_estado

    def get_user_fecha_alta(self) -> date:
        return self.__user_fecha_alta
    
    def get_user_fecha_baja(self) -> date:
        return self.__user_fecha_baja
    
    def __set_user_fecha_baja(self, nueva_fecha: date) -> None:
        self.__user_fecha_baja = nueva_fecha
        
    def baja_usuario(self) -> None:
        self.__user_estado = False
        self.__set_user_fecha_baja(date.today())

    def validar_credenciales(self, user_name: str, user_contraseña: str) -> bool:
        return user_name == self.__user_name and user_contraseña == self.__user_contraseña