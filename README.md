# Printf

## Descripción 

El proyecto **Printf** se centra en replicar el funcionamiento de la función original `printf` de C. Esta función es una de las más utilizadas en el lenguaje C y se utiliza para imprimir texto formateado en la consola o en archivos. El objetivo principal es entender y recrear su comportamiento básico.

### Conversiones

Se deben implementar las siguientes conversiones de formato:

| Conversión  | Descripción |
|-------------|-------------|
| **%c**      | Imprime un solo carácter. |
| **%s**      | Imprime una cadena de caracteres. |
| **%p**      | Imprime un puntero en formato hexadecimal. |
| **%d**      | Imprime un número entero con signo en base 10. |
| **%i**      | Imprime un número entero con signo en base 10. |
| **%u**      | Imprime un número entero sin signo en base 10. |
| **%x**      | Imprime un número entero sin signo en formato hexadecimal en minúsculas. |
| **%X**      | Imprime un número entero sin signo en formato hexadecimal en mayúsculas. |
| **%%**      | Imprime el símbolo del porcentaje literal. |

### Función ft_printf

El prototipo de la función `ft_printf` es el siguiente:

```C
int ft_printf(const char *formato, ...);
```

