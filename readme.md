# Alexa  Belen: manejando 4 zonas

##que hace este projecto

Maneza cuatro zonas del belen con alexa, atendera a los comandos:

- Portal: Enciende y apaga el portal conectado a rele 1
- Cielo: Enciende y apaga  los leds del cielo conectados, o lo que conectemos alrele 2
- Fuego: Enciende y apaga  los leds del fuego, o lo que conectemos a rele 3
- Castillo: Enciende y apaga  los leds del castillo, o lo que conectemos a rele 4
- 
[![Watch the video](https://i.imgur.com/vKb2F1B.png)]((https://github.com/vniclos/alexa belen.mp4))




## que se necesita de hardware

- ESP32 DEV KIT
- KIT DE 4 RELES
- Cables
- Leds
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
  




