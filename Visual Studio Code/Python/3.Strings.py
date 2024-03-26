
# Es lo mismo:
x = "juani"
x = 'juani'


# Título, mayúsculas, minúsculas:
print(x.title())
print(x.lower())
print(x.upper())


# Concatenar cadenas:
first_name = "Ada"
second_name = "Lovelace"
full_name = first_name + " " + second_name
print(full_name)


# Eliminar espacios en blanco:
txt = "   banana   "
x = txt.lstrip()
x = x.rstrip()


# Párrafos con enters:
texto = """Hola esto es un párrafo 
con enters. Se muestra 
todo como está"""
print(texto)


# F-STRINGS:
primer_nombre = "ada"
segundo_nombre = "lovelace"
nombre_completo = f"{primer_nombre} {segundo_nombre}"
print(f"Hola!, {nombre_completo.title()}!")

materia = "Programación 2"
nota = 9
print(f"La materia {materia} tiene una nota de {nota}")


# Eliminación de prefijos:
url_comun = "https://youtube.com"
url_modificada = url_comun.removeprefix("https://")
print(url_modificada)


# Cadenas como ARREGLOS:
a = "Hola! Cómo estás?"
print(a[1])


# Longitud de cadena:
b = "Hola! Cómo estás?"
print(len(b))


# Comprobar existencia en una cadena - BOOL:
c = "Hola! Cómo estás?"
bool = ("Cómo" in c)
print(bool)


# Reemplazar palabras en una cadena - TODAS:
d = "Hola! Cómo estás? Hola"
d_modificar = d.replace('Hola', 'HOLA')
print(d_modificar)


# Reemplazar palabras en una cadena - x CANTIDAD x INICIO:
d = "Hola! Cómo estás? Hola"
d_modificar = d.replace('Hola', 'HOLA', 1)
print(d_modificar)


# Reemplazar palabras en una cadena - x CANTIDAD x FIN:
d = "Hola! Cómo estás? Hola"
d_reemplazar = d.replace("Hola", "HOLA")
d_reemplazar = d_reemplazar.replace("HOLA", "Hola", 1)
print(d_reemplazar)