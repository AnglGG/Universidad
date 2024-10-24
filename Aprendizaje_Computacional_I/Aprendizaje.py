import numpy as np
import matplotlib.pyplot as plt

# Parámetros iniciales
w = 0.0  # Peso inicial
alpha = 0.1  # Tasa de aprendizaje
x = 2  # Entrada
y = 4  # Valor real
n_iterations = 10  # Número de iteraciones

# Datos para la gráfica
x_vals = np.array([x])  # Solo tenemos un valor de entrada
y_vals = np.array([y])  # Solo un valor real

# Crear la gráfica
plt.figure()
plt.scatter(x_vals, y_vals, color='red', label='Datos reales')  # Punto de datos reales

# Proceso de aprendizaje
for t in range(n_iterations):
    # Predicción
    h = w * x_vals
    
    # Cálculo del error
    error = y_vals - h  # Ahora error es un array
    
    # Actualización del peso
    w = w + alpha * error.item() * x  # Usamos item() para obtener el valor escalar
    
    # Dibujar la línea de ajuste en cada iteración
    plt.plot(x_vals, h, label=f'Iteración {t+1}')
    
    # Imprimir el progreso
    print(f"Iteración {t+1}: w = {w:.4f}, error = {error.item():.4f}")  # Usamos item() para formatear el valor

# Personalizar la gráfica
plt.xlabel('x')
plt.ylabel('y')
plt.title('Ajuste de la línea en cada iteración')
plt.legend()
plt.grid(True)

# Mostrar la gráfica
plt.show()

# Resultado final
print(f"Peso final ajustado: w = {w:.4f}")
