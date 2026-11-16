# Formato de informes de laboratorios en $\LaTeX$

Aquí está el formato utilizado para realizar informes de laboratorios en $\LaTeX$. No incluye portada, pues usualmente esta se trabaja aparte. Tampoco incluye índice por ser innecesario. El resto de cosas son iguales a las del formato general.

## Instrucciones para asistente de AI

Contexto: redacto un informe de laboratorio en LaTeX (Laboratorio de Circuitos Eléctricos II, UNAH-VS). Eres mi asistente de redacción y tienes acceso a los archivos del proyecto.

### Archivos

- Fuente: `Manual Práctica 5.pdf` (solo lectura) y `Presentación.pdf` (solo lectura)
- Destino: `Documento.tex` (edítalo directamente)
- Preámbulo: `Formato.tex` (se carga con `\input`). Contiene los paquetes y macros (`\rellenar`, `\imagen`, `itemsinforme`, etc.)
- Referencia de formato y rúbrica: `Silabo_de_IE-311__Martes_1500_.pdf`

### Antes de editar

1. Lee completo `Documento.tex` y `Formato.tex`. Lista los paquetes y macros disponibles y úsalos.
2. Lee el manual completo. Si el PDF no se extrae bien (escaneado, ecuaciones ilegibles, tablas rotas), avísame y detente en vez de adivinar.
3. No pidas confirmación para empezar. Si algo es ambiguo, aplica la regla de "Ambigüedades y errores del manual".

### Reglas generales

- Respeta las secciones de nivel `\section` de `Documento.tex` (no las agregues, quites ni renombres). Dentro de Procedimiento experimental y Análisis de resultados puedes agregar o quitar `\subsection`, ítems de lista y filas para reflejar la estructura real del manual. Reemplaza los ejemplos genéricos de la plantilla (pasos "1, 2, 3", tabla "Magnitud 1/2", preguntas "1, 2") por el contenido del manual.
- Actualiza `\numeroPractica` y `\nombrepractica` con los datos del manual (Práctica 4).
- Lo que venga del manual se copia textualmente (incisos, enunciados, preguntas, ecuaciones, numeración, unidades). No reescribas, parafrasees ni corrijas, ni siquiera la ortografía.
- Lo que escribas tú va en español, pretérito perfecto simple y voz impersonal ("Se conectó…", "Se midió…", "Se calculó…"), con el lenguaje más simple posible sin perder precisión técnica.
- No inventes datos, valores de componentes, resultados ni referencias bibliográficas.
- Los comentarios y notas de los TODO van en español.
- Se me van a pasar los datos del laboratorio después: yo hago todos los cálculos con ellos. Tú me dejas el formato, la fórmula y la explicación de qué hacer.

### Contenido por sección

- **Introducción:** texto propio, no el del manual, de 120 a 150 palabras (cuéntalas con `wc -w`, no de memoria). Presenta el tema, su importancia y su conexión con el marco teórico. Buena redacción.
- **Objetivos:** copia los del manual (mínimo 3). Si hay menos de 3, complétalos con objetivos coherentes con la práctica y anótalo en el resumen.
- **Materiales y equipo:** lista lo que el manual menciona (instrumentos, componentes, software). No inventes modelos ni valores nominales: donde ayudaría ponerlos, deja
  `% TODO[DATOS]: Agregar modelo/valor nominal de <elemento>`.
- **Marco teórico:** cópialo completo y tal cual del manual, con sus ecuaciones. Conserva las subsecciones que tenga (adapta `\subsection` a las del manual). Cita el manual con `\cite{}`.
- **Procedimiento experimental:** copia los incisos tal cual y en orden. Debajo de cada uno agrega solo lo propio del reporte: tablas, circuitos, marcadores TODO y, cuando aporte, una frase breve de lo realizado con huecos, por ejemplo: "Se midió con el multímetro y se obtuvo \rellenar{valor con unidades}."
- **Análisis de resultados:** copia los incisos y las preguntas tal cual. Debajo de cada uno:
  - Si es un cálculo → usa `TODO[CALCULO]` (ver abajo).
  - Si es una pregunta que se responde solo con teoría o con el manual → redáctala de forma concisa y coherente, sin inventar.
  - Si la respuesta depende de mis datos → deja una respuesta esqueleto con huecos, por ejemplo "Como se observó en la medición de X, el valor fue \rellenar{valor}…", más:

    ```tex
    % TODO[ANALISIS]: Responder / completar la pregunta
    % -> Qué debería argumentarse (1-2 líneas) y con qué datos o resultados se sustenta
    ```

  - Si el manual pide investigar algo o citar una fuente → no inventes la referencia:

    ```tex
    % TODO[REFERENCIA]: Investigar y citar fuente aquí
    % -> Tema a investigar según el manual
    ```

- **Conclusiones:** mínimo 3, amplias, ligadas a los objetivos y a lo experimental. Redáctalas como esqueleto con huecos `\rellenar{...}` para cada valor o resultado medido (por ejemplo "El error porcentual de la frecuencia de corte fue \rellenar{valor}\,\%…"). No afirmes que algo coincidió, mejoró o falló: deja eso condicionado a mis datos y márcalo con `TODO[ANALISIS]`.
- **Bibliografía:** agrega el manual a `references.bib` (créalo si no existe) con los campos que se conozcan, y marca con comentario los que falten. No agregues fuentes que no se hayan usado.

### Tablas

- Incluye todas las del manual con su estructura original (`booktabs`), con `\caption` y `\label` (convención: `tab:p4-<tema>`), usando `[H]` como en la plantilla.
- Celdas de datos experimentales o simulados vacías. Usa `$0$` solo si la celda vacía rompe la compilación.
- Si una celda requiere un cálculo mío (error, ganancia en dB, etc.), déjala vacía y agrega el TODO correspondiente.

### Circuitos

- Dibuja con `circuitikz` todo circuito representable con componentes estándar, con los valores y etiquetas del manual. Cada uno en `figure[H]` con `\caption` y `\label` (`fig:p4-<tema>`).
- No cuentan como imágenes. Los que no se puedan dibujar (instrumentos complejos, diagramas de bloques elaborados, capturas de osciloscopio o de simulador) se tratan como imagen.

### Gráficas e imágenes

- Si el manual pide graficar datos y LaTeX puede hacerlo (por ejemplo Bode con ejes logarítmicos), deja el entorno `pgfplots` listo: ejes, etiquetas con unidades, título y leyenda, con el `\addplot` comentado esperando mis datos, más `TODO[DATOS]`. Si no se puede con LaTeX, trátalo como imagen.
- No incluyas imágenes. Si alguna es necesaria (montaje físico, captura de osciloscopio, captura de simulación, fotografía), deja solo:

```tex
% TODO[IMAGEN]: Agregar una imagen aquí
% -> Descripción de la imagen
% -> Justificación de agregar la imagen
```

- Si la práctica es virtual (Multisim/TinkerCad), indica en la descripción que la captura debe mostrar fecha y hora, como exige el sílabo.

### Datos y cálculos

```tex
% TODO[DATOS]: Rellenar datos aquí
% -> Descripción de los datos esperados (magnitud, unidades, instrumento)
```

Para cada cálculo que me toca hacer, deja el formato listo en el `.tex` y el marcador:

```tex
% TODO[CALCULO]: Realizar cálculo aquí
% -> Qué calcular, con qué fórmula y con qué datos
```

Dentro del `align` o `equation`, deja la fórmula simbólica y la línea de sustitución con huecos. Ejemplo:

```tex
\begin{align}
    E_{\%} &= \frac{\left|\rellenar{V_{\text{teórico}}} - \rellenar{V_{\text{medido}}}\right|}{\rellenar{V_{\text{teórico}}}} \times 100\,\% = \rellenar{resultado}\,\%
\end{align}
```

La fórmula debe ser la correcta para el cálculo que pide el manual. Si el manual no la da, usa la estándar y anótalo como suposición.

### Ambigüedades y errores del manual

- Si algo es ambiguo o hay un error evidente (componente mal numerado, unidad incorrecta, dato inconsistente): déjalo tal cual en el texto copiado, asume lo más razonable para el resto del documento, aplícalo de forma consistente y márcalo con un comentario en el lugar:
  `% SUPUESTO: <qué asumiste y por qué>`

### Preámbulo

Si falta un paquete, agrégalo en `Formato.tex` (no en `Documento.tex`) y repórtalo al final.

### Verificación

- Compila con `latexmk -pdf Documento.tex` y corrige los errores que introduzcas. Si no puedes compilar, dilo explícitamente.
- Cuenta los TODOs con `grep -c` por tipo (`IMAGEN`, `DATOS`, `CALCULO`, `ANALISIS`, `REFERENCIA`), y los `SUPUESTO` y los `\rellenar` restantes. No los cuentes de memoria.

### Entrega

Resumen corto con:

1. Cantidad de TODOs por tipo (`IMAGEN`, `DATOS`, `CALCULO`, `ANALISIS`, `REFERENCIA`) y de `\rellenar` pendientes.
2. Suposiciones hechas (las marcadas con `SUPUESTO`) y errores del manual que dejaste intactos.
3. Paquetes que agregaste a `Formato.tex`.
4. Conteo de palabras de la introducción.
5. Estado de la compilación (éxito / warnings relevantes / no compilado).
6. Si la práctica es virtual: recordatorio de adjuntar los `.ms14` y las capturas con fecha y hora.
