from ejercicio01 import Usuario

# Registrar
print("Sign in")
user_name = input("Ingrese el usuario: ")
user_pass = input("Ingrese la contraseña: ")
user = Usuario(user_name, '', user_pass)

# Ingresar
print("Login in")
user_name = input("Ingrese el username: ")
user_pass = input("Ingrese la password ")
if (user.validar_credenciales(user_name, user_pass)):
    print("Ingreso correctamente..")
    print(f"Nombre: {user.get_user_name()}\nFecha Alta: {user.get_user_fecha_alta()} \nFecha Baja: {user.get_user_fecha_baja()}")
else:
    print("Usuario o Contraseña incorrecta..")
    
print("Perfil - baja usuario")
user.baja_usuario()