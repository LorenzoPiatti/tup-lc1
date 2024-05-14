from persona import Persona
from datetime import date

class Usuario(Persona):
    def __init__(self, nombre: str, apellido: str, fecha_nacimiento: date, nro_documento: int, user_name:str, password:str, estado:bool, email:str, fecha_alta:date=date.today()) -> None:
        super().__init__(nombre, apellido, fecha_nacimiento, nro_documento)
        self.__user_name = user_name
        self.__password = password
        self.__estado = True
        self.__email = email
        self.__fecha_alta = fecha_alta
        self.__fecha_baja = None
        
    def get_user_name(self)->str:
        return self.__user_name

    def set_user_name(self,__new_user_name:int):
        self.__user_name = __new_user_name

    def get_password(self)->str:
        return self.__password 

    def set__password(self, __new_password):
        self.__password = __new_password 

    def get_estado(self)->bool:
        return self.__estado    

    def set_estado(self, new_estado):
        self.__estado = new_estado

    def get_email(self)->str:
        return self.__email

    def set_email(self,__new_email):
        self.__email = __new_email

    def get_fecha_alta(self)->date:
        return self.__fecha_alta 

    def get_fecha_baja(self)->date:
        return self.__fecha_baja

    def set_fecha_baja(self, __new_fecha_baja)->date:
        self.__fecha_baja = __new_fecha_baja

    
    def validar_credencial(self, user_name, password) ->bool:
        return user_name == self.__user_name and password == self.__password


    def baja_usuario(self)->None:
        self.__estado = False
        self.set_fecha_baja(date.today())

    def __str__(self)->str:
        return f"Nombre: {self.get_nombre()} \nApellido: {self.get_apellido()} \nFecha Nacimiento: {self.get_fecha_nacimiento()} \nEdad: {self.get_edad()} \nDNI: {self.get_nro_documento()} \nUserName: {self.get_user_name()} \nPassword: {self.get_password()} \nEstado: {self.get_estado()} \nEmail: {self.get_email()}\nFecha de Alta: {self.get_fecha_alta()} \nFecha de Baja: {self.get_fecha_baja()}"  

    def __strBaja__(self)->str:
         return f"Usuario: {self.get_user_name()} fue dado de baja \nFecha de baja: {self.get_fecha_baja()}" 