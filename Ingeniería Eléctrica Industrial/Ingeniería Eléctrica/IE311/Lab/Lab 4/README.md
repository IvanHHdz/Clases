# Informe de la práctica 4

## Instrucciones para asistente de AI

Contexto: estás ayudándome a redactar un informe de laboratorio en LaTeX.

- Fuente: `Manual Práctica 4.pdf`
- Destino: `Documento.tex` (edítalo directamente)

### Tarea

Rellena `Documento.tex` con el contenido que corresponda según el manual, sección por sección, respetando la estructura que ya tiene el documento.

### Reglas de redacción

- El texto que venga del manual cópialo textualmente. El texto que escribas tú va en pretérito perfecto simple, con voz impersonal ("Se conectó...", "Se midió...", "Se calculó...").
- Usa el lenguaje más simple posible sin perder precisión técnica.

### Secciones "Procedimiento experimental" y "Análisis de resultados"

- Copia los incisos, enunciados y preguntas tal cual aparecen en el manual. No los reescribas, parafrasees ni corrijas.
- Debajo de cada inciso agrega únicamente lo que correspondería al reportar resultados: tablas, espacios para datos, circuitos y marcadores TODO.
- Si un inciso del análisis es una pregunta, no la respondas; deja `% TODO[ANALISIS]` con una nota breve de qué debería argumentarse.

### Tablas

- Incluye todas las tablas del manual con su estructura original (usa `booktabs` si ya está cargado), con `\caption` y `\label`.
- Las celdas de datos experimentales o simulados se dejan vacías. Usa `$0$` solo si la celda vacía rompe la compilación.

### Circuitos

- Dibuja con `circuitikz` todos los circuitos que se puedan representar con componentes estándar, con los valores y etiquetas del manual.
- No cuentan como "imágenes". Los que no se puedan dibujar (instrumentos complejos, diagramas de bloques elaborados, capturas de osciloscopio) trátalos como imagen con el TODO de abajo.

### Imágenes

No incluyas imágenes. Si alguna es necesaria, deja solo este comentario:

```tex
% TODO[IMAGEN]: Agregar una imagen aquí
% -> Descripción de la imagen
% -> Justificación de agregar la imagen
```

### Marcadores de datos y cálculos

Donde falten datos experimentales o de simulación:

```tex
% TODO[DATOS]: Rellenar datos aquí
% -> Descripción de los datos esperados (magnitud, unidades, instrumento)
```

Donde falte hacer un cálculo con esos datos:

```tex
% TODO[CALCULO]: Realizar cálculo aquí
% -> Qué calcular, con qué fórmula y con qué datos
```

### Restricciones

- No inventes datos, valores de componentes ni resultados.
- No modifiques el preámbulo. Si necesitas un paquete que falta, avísame al final en lugar de agregarlo.
- Si algo del manual es ambiguo, haz la suposición más razonable y anótala al final.

### Entrega

Al terminar, dame un resumen corto con:

1. Cantidad de TODOs por tipo (`IMAGEN`, `DATOS`, `CALCULO`, `ANALISIS`).
2. Suposiciones que hiciste.
3. Paquetes que faltan en el preámbulo, si los hay.
