import numpy as np

# Datos de la tabla
x1 = np.array([0, 0.5, -0.5, 1, -1])
x2 = np.array([1, 1, 0, -1, -0.5])
x3 = np.array([-1, 0.5, 0.5, 1, -0.5])
y = np.array([1.5, 3.5, 0.5, 0.5, -2])

# Definir las funciones h1(x) y h2(x)
def h1(x1, x2, x3):
    return 0.5 + 0.1 * x1 - 0.5 * x2 + 0.5 * x3

def h2(x1, x2, x3):
    return -0.5 - 1.0 * x1 - 1.0 * x2 + 1.5 * x3

# Calcular las predicciones para h1 y h2
h1_pred = h1(x1, x2, x3)
h2_pred = h2(x1, x2, x3)

# Calcular el error cuadrático medio (ECM) para h1 y h2
ecm_h1 = np.mean((y - h1_pred)**2)
ecm_h2 = np.mean((y - h2_pred)**2)

# Mostrar los resultados
print(f"ECM para h1(x): {ecm_h1:.2f}")
print(f"ECM para h2(x): {ecm_h2:.2f}")
