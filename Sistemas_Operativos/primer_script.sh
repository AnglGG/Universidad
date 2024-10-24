#!/bin/bash
# Es necesaria la línea anterior para que sea un bash script
echo "Hola soy un shell tipo $SHELL y mi pid es $$"
echo "Se invocó al script como $0"
echo "El nombre del script, sin ruta, es `basename $0`"
echo "He recibido $# argumentos"
echo "Esta es la lista de argumentos: $*"
