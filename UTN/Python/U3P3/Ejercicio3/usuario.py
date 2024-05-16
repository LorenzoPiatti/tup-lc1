from datetime import date
from tipo_documento import Tipo_Documento
from persona import Persona

class Usuario(Persona):
    
    __list_user_name = []
    
    def __init__(self, nombre: str, apellido: str, fecha_nacimiento: date, nro_documento: int, tipo_documento: Tipo_Documento, user_name:str, estado:bool, password:str, email:str, fecha_alta:date, fecha_baja:date, administrador:bool = False) -> None:
        self.__user_name = Usuario.__validar_user_name(user_name)
        self.__estado = True
        self.__password = password
        self.__email = email
        self.__fecha_alta = date.today()
        self.__fecha_baja = None
        self.__administrador = administrador
        super().__init__(nombre, apellido, fecha_nacimiento, nro_documento, tipo_documento)
        
    @classmethod
    def __validar_user_name(cls, user_name:str) -> str:
        if user_name in Usuario.__list_user_name:
            raise Exception("Error!, user_name utilizado")
        Usuario.__list_user_name.append(user_name)
        return user_name
    
    def get_user_name(self)->str:
        return self.__user_name

    def set_user_name(self, new_user_name:str) -> None:
        old_user_name = self.__user_name
        self.__user_name = Usuario.__validar_user_name(new_user_name)
        Usuario.__list_user_name.remove(old_user_name)

    def get_password(self)->str:
        return self.__password 

    def set__password(self, new_password) -> None:
        self.__password = new_password 

    def get_estado(self)->bool:
        return self.__estado    

    def set_estado(self, new_estado) -> None:
        self.__estado = new_estado

    def get_email(self)->str:
        return self.__email

    def set_email(self, new_email) -> None:
        self.__email = new_email

    def get_fecha_alta(self)->date:
        return self.__fecha_alta 

    def get_fecha_baja(self)->date:
        return self.__fecha_baja

    def set_fecha_baja(self, new_fecha_baja)->date:
        self.__fecha_baja = new_fecha_baja