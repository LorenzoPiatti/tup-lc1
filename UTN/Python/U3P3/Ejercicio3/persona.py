from abc import ABC, abstractmethod
from datetime import date
from tipo_documento import TipoDocumento

class Persona(ABC):
    @abstractmethod
    def __init__(self, nombre:str, apellido:str, fecha_nacimiento:date, nro_documento:int, tipo_documento: TipoDocumento) -> None:
        self._nombre = nombre # Atributo protegido
        self._apellido = apellido
        self._fecha_nacimiento = fecha_nacimiento
        self._nro_documento = nro_documento
        self._tipo_documento = tipo_documento
    
    def get_edad(self) -> int:
        hoy = date.today()
        edad = hoy.year - self._fecha_nacimiento.year
        if hoy.month <= self._fecha_nacimiento.month:
            if hoy.day < self._fecha_nacimiento.day:
                edad -= 1
        return edad
    
    def get_nombre(self) -> str:
        return self._nombre

    def set_nombre(self, new_nombre:str) -> None:
        self._nombre = new_nombre

    def get_apellido(self) -> str:
        return self._apellido

    def set_apellido(self, new_apellido:str) -> str:
        self._apellido = new_apellido

    def get_fecha_nacimiento(self) -> str:
        return self._fecha_nacimiento
    
    def set_fecha_nacimiento(self, new_fecha_nacimiento:date) -> None:
        self._fecha_nacimiento = new_fecha_nacimiento

    def get_nro_documento(self) -> str:
        return self._nro_documento
    
    def set_nro_documento(self, new_nro_documento:int) -> None:
        self._nro_documento = new_nro_documento
        
    def get_tipo_documento(self) -> TipoDocumento:
        return self._tipo_documento
    
    def set_tipo_documento(self, new_tipo_documento: TipoDocumento) -> None:
        self._tipo_documento = new_tipo_documento