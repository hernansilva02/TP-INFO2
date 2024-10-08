
# Trabajo Práctico Informática 2 - Control de Tensión

## Memoria Descriptiva

El proyecto se trata de un control de diferencia de potencial o tensión eléctrica diseñado para automóviles particulares, es decir, para baterías de 12 Volts.

El microcontrolador se encargará de medir constantemente la tensión de la batería, si esta tensión se encuentra en un rango que va desde los 12.5 Volts hasta 14.5 Volts, una luz azul se prenderá indicando el correcto funcionamiento de la batería. Por otro lado, si la medición del microcontrolador no corresponde con ese rango se emitirá un sonido interminente con un intervalo de 2 segundos para avisar al usuario y además la luz cambiará a color rojo indicando al usuario que ,ya sea la batería o el alternador, no están funcionando correctamente.



|Nivel de tensión | Indicación |
|:------:|:--------------------:|
|> 14.5 Volts|Luz roja y sonido intermitente|
|< 12.5 Volts|Luz roja y sonido intermitente|
|12.5 Volts < Tensión < 14.5 Volts|Luz azul|


## Diagrama de Estados

![sample SVG image](/fsm-dde.svg)

