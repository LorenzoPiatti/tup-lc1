from persona import Persona
from usuario import Usuario
from datetime import date

usuario1 = Usuario("Cristian", "Ninotti", date(1989,9,26), 34732713, "fana", "asd", True,  "cris@gmail.com", date.today())
print(usuario1)

print("-----------------------------------")

"""usuario2 = Usuario("Francisco", "Poli Veliz", date(1993,2,17), 37402155, "fran", "asd", True,  "fran@gmail.com", date.today())
print(usuario2)

print("-----------------------------------")
usuario2.baja_usuario()
print(usuario2.__strBaja__())"""

usuario1.set_apellido("Ramirez")
print(usuario1)