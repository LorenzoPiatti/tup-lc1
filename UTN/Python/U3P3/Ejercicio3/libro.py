from datetime import date

class Libro():
    
    __list_isbn = [] # Atributo de clase
    
    def __init__(self, nombre:str, fecha_lanzamiento:date, autor:str = "Unknow") -> None:
        self.__nombre = nombre # Atributo de instancia
        self.__fecha_lanzamiento = fecha_lanzamiento
        self.__autor = autor
        self.__isbn = Libro.generar_ISBN() # Atributo de clase
        
    def get_nombre(self) -> str: # getter, recupera un valor almacenado
        return self.__nombre
    
    def set_nombre(self, new_nombre:str): # setter, cambia el valor almacenado
        self.__nombre = new_nombre
    
    def get_fecha_lanzamiento(self) -> date:
        return self.__fecha_lanzamiento
    
    def set_fecha_lanzamiento(self, new_fecha_lanzamiento:date):
        self.__fecha_lanzamiento = new_fecha_lanzamiento
        
    def get_autor(self) -> str:
        return self.__autor
    
    def set_autor(self, new_autor:str):
        self.__autor = new_autor
        
    def get_isbn(self) -> str:
        return self.__isbn
    
    def set_isbn(self, new_isbn:str):
        if (new_isbn in Libro.__list_isbn):
            raise Exception("Error!, isbn duplicado")
        Libro.__list_isbn.append(new_isbn)
        self.__isbn = new_isbn
        
    @classmethod
    def generar_ISBN(cls) -> str:
        from code_generator import generated_code
        cod = generated_code()
        while (cod in Libro.__list_isbn):
            cod = generated_code()
        Libro.__list_isbn.append(cod)
        return cod