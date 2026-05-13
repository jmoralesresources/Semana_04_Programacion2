| <div align="right"><img src="../../Logo-UNA-Rojo_FondoTransparente%20(2).png" width="120" alt="Logo UNA" /></div> | | <p align="right"><img src="../../images.jpeg" width="120" alt="Logo EscINF" /></p> |
|:----------------------------------------------------|:-------------------------------------------------------------:|------------------------------------------------------------:|

**Programa de curso** · **Programación II**  
**Carrera:** Ingeniería de Sistemas de Información con grado en Bachillerato y salida lateral de Diplomado en Programación de Aplicaciones Informáticas.

---

# Semana 4 – Práctica semanal

**Contenidos:** Principio de Sustitución de Liskov, Patrón Decorator.  
**Nota:** Entrega del primer proyecto (según cronograma del curso).

---

## Actividad 1 (LSP)

- Escriba una jerarquía que viole LSP: por ejemplo, `Rectangulo` y `Cuadrado` donde `Cuadrado` restrinja el comportamiento de la base. Documente la violación en MD.
- Rediseñe para cumplir LSP (por ejemplo, interfaz común sin restricciones incompatibles) y muestre el código corregido.

---

## Actividad 2 (Decorator – Café)

- Implemente la interfaz `ICafe` con `double costo()` y `std::string descripcion()`.
- Clase concreta `CafeSimple`. Decoradores `ConLeche` y `ConAzucar` que envuelven un `ICafe*` y añaden costo y texto a la descripción.
- En `main`, cree un café con leche y azúcar y muestre costo total y descripción.

---

## Actividad 3 (Diagrama y comparación)

- Incluya en MD un diagrama de clases del Decorator (componente, decorador base, dos decoradores concretos).
- Redacte un párrafo comparando Decorator con herencia para añadir variantes (ventajas del Decorator).

---

**Formato de entrega:** Código y documentación en **archivo(s) MD (Markdown)**.
