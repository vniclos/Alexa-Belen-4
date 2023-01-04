# Alexa  Belen: manejando 4 zonas

##que hace este projecto

Maneza cuatro zonas del belen con alexa, atendera a los comandos:

- Portal: Enciende y apaga el portal conectado a rele 1
- Cielo: Enciende y apaga  los leds del cielo conectados, o lo que conectemos alrele 2
- Fuego: Enciende y apaga  los leds del fuego, o lo que conectemos a rele 3
- Castillo: Enciende y apaga  los leds del castillo, o lo que conectemos a rele 4

## Puedes ver este video de testeo de funciomamiento
https://user-images.githubusercontent.com/8515368/210542036-b7f4d6bd-f522-4950-ba19-f37af6297f18.mp4



## que se necesita de hardware

- ESP32 DEV KIT
- KIT DE 4 RELES conectados a pins 26, 25, 33, 32}
- Cables
- Leds
- RGB ring led 24leds compatible con NeoPixel conectado a pin 15
- Resistencias
- transformador de 5v con 3-6a dependiendo del numero de led


Oppcional el portal se puede instar un anillo de leds neopixel, para cambiar automaticamente los colores en secuencia suave

## Que entorno necesito para compilarlo
- Visual studio code
- Platformio
- Arduino ide configurado para esp32
- Librerias
  - ESP Async WebServer
  - FauxmoESP
  - ESPAsyncTCP
  - adafruit/Adafruit NeoPixel
  
## aujestes personalizados se realizan en fichero main defines

Pins usados (Si no los cambias) en fichero "mainDefines.h"

Estos son los pines utilizados por defecto
```c
const int g_pinIntLedBlue =2;
const int g_pingRingLed = 15;
int g_pinRelays[4] = {26, 25, 33, 32}; // 3534}
```
  
 Configuracion wifi




