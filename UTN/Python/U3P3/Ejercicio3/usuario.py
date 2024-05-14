from datetime import date
from tipo_documento import Tipo_Documento
from persona import Persona

class Usuario(Persona):
    def __init__(self, nombre: str, apellido: str, fecha_nacimiento: date, nro_documento: int, tipo_documento: Tipo_Documento, user_name:str, estado:bool, password:str, email:str, fecha_alta:date, fecha_baja:date, administrador:bool) -> None:
        super().__init__(nombre, apellido, fecha_nacimiento, nro_documento, tipo_documento)
        self._user_name = user_name
        self._estado = estado
        self._password = password
        self._email = email
        self._fecha_alta = fecha_alta
        self._fecha_baja = fecha_baja
        self._administrador = False
        
    def get_user_name(self)->str:
        return self._user_name

    def set_user_name(self, new_user_name:int) -> None:
        self._user_name = new_user_name

    def get_password(self)->str:
        return self._password 

    def set__password(self, new_password) -> None:
        self._password = new_password 

    def get_estado(self)->bool:
        return self._estado    

    def set_estado(self, new_estado) -> None:
        self._estado = new_estado

    def get_email(self)->str:
        return self._email

    def set_email(self, new_email) -> None:
        self._email = new_email

    def get_fecha_alta(self)->date:
        return self._fecha_alta 

    def get_fecha_baja(self)->date:
        return self._fecha_baja

    def set_fecha_baja(self, new_fecha_baja)->date:
        self._fecha_baja = new_fecha_baja