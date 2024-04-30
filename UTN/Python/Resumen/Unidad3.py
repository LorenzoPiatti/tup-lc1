class Usuario:
    # Constructor
    def __init__(self) -> None:
        self.user_name # Publico
        self._user_name # Protegido
        self.__user_name # Privado
    
    # Getter publico del atributo privado
    def get_estado(self) -> bool:
        return self.__estado
    "Los getter siempre retornan -> bool -> str, etc.."
    
    # Setter publico del atributo privado
    def set_estado(self, nuevo_estado: bool) -> None:
        self.__estado = nuevo_estado
    "Los setter siempre en -> None. Debido a que no retornan nada"