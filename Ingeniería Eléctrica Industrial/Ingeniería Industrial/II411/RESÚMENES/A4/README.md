# Resumen Administración de la Responsabilidad Social y la Ética

Se debe realizar una investigación corta en $\LaTeX$, usando los archivos ya existentes, en la disposición propuesta. No se deben agregar más secciones. La investigación consistirá en el tema _"Administración de la Responsabilidad Social y la Ética"_ desde un enfoque empresarial industral. Recuerde aplicar las normas APA en el trabajo, agregar todas las referencias necesarias al `references.bib`. Sea detallado sin excederse en profundidad. El resumen debe contener un aproximado de 4 a 5 páginas sin contar la portada y las referencias (no borre los `\newpage` ya agregados). De considerarlo necesario, cambie el formato en `formato.tex`. Utilice solamente fuentes confiables y verificables. Escriba en lenguaje natural, sin tecnicismos innecesarios ni palabras rimbombantes ni rebuscadas. Use lenguaje sencillo.

## Correción 1

Lo que puede mejorar

### Falta de ejemplos concretos (principal mejora)

Tu investigación es correcta, pero demasiado abstracta.

Todo el tiempo hablas de:

> “la empresa”, “las organizaciones”, “el sector industrial”

pero nunca muestras un caso real.

Con solo agregar algo como:

Toyota implementa procesos de reducción de residuos industriales.
Patagonia prioriza sostenibilidad ambiental.
Volkswagen mostró un caso contrario con el escándalo de emisiones.

hubieras elevado bastante la calidad.

Penalización: moderada.

### Repetición de ideas

Hay varias ideas que aparecen tres veces con distintas palabras:

mejora reputación
genera confianza
fortalece relaciones
sostenibilidad

No está mal repetir para reforzar, pero aquí se siente un poco redundante.

Ejemplo:

introducción → reputación y sostenibilidad
cuerpo → reputación y sostenibilidad
conclusión → reputación y sostenibilidad otra vez

Podrías compactar un poco.

### Problema serio con las citas en el cuerpo

Aquí sí fui rígido.

Cambie todas las referencias de `\\cite{}` a `~\parencite{}`. Para que compilen correctamente.

### Podría tener una tesis más fuerte en la introducción

Tu introducción explica el tema, pero no “engancha”.

Una versión más fuerte sería cerrar con una postura clara:

> En la actualidad, una empresa industrial que ignore la ética y la responsabilidad social compromete su sostenibilidad y competitividad.

Eso da más dirección al trabajo.

## Correción 2

### APA sigue teniendo errores en autores institucionales (**principal defecto restante**)

Este problema sobrevivió.

En las citas internas aparece:

> (for Standardization, 2010; for Economic Co-operation & Development, 2011)
>

Eso está mal.

El autor no es “for Standardization”.

Debería ser:

* (**International Organization for Standardization [ISO], 2010**)
* (**Organisation for Economic Co-operation and Development [OECD], 2011**)

Parece que el gestor bibliográfico interpretó mal nombres corporativos.

Lo mismo en referencias:

```text
for Standardization, I. O.
for Economic Co-operation, O., & Development.
```

Eso definitivamente no es APA correcto.

Si el profesor revisa APA con lupa, aquí aún perderías puntos.

Asegúrese de sonar natural y mantener el lenguaje sencillo.
Hazlo sentir más... humano...
