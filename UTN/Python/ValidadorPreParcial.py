def validar_estandar_conocimiento(cantidad_cursos: int, antiguedad: int) -> bool:
    if cantidad_cursos >= antiguedad:
        return True
    else:
        return False