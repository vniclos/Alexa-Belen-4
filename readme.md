# Alexa Belen 

## Que hace este projecto

Maneja cuatro zonas del belen con Alexa y con entorno web.

## Uso mediante Alexa.
- **Para el portal:** Alexa! Enciende el portal, y Alexa! apaga el portal. (Maneja relé 0)
- **Para el cielo:** Alexa! Enciende el cielo, y Alexa! apaga el cielo. (Maneja relé 1)
- **Para el fuego:** Alexa! Enciende el fuego, y Alexa! apaga el fuego. (Maneja relé 2)
- **Para el castillo:** Alexa! Enciende el castillo, y Alexa! apaga el castillo. (Maneja relé 3)


Puedes ver este video de testeo de funciomamiento


https://user-images.githubusercontent.com/8515368/210542036-b7f4d6bd-f522-4950-ba19-f37af6297f18.mp4


## Uso mediante entorno web.

La siguiente imagen es la pagina web permite manipular el estado de los dispositivos conecatados , la direccion por defencto es http://192.168.2.40 que se corresponde con la variable *IPAddress g_NetWsIPAddresslocal_IP(192, 168, 2, 40);* del fichero "mainDefines.h"

Como se puede ver por el momento ofrece mas opciones que Alexa, esta ultima solo permite encender y apagar

![belenWeb](https://user-images.githubusercontent.com/8515368/210620610-69200b41-fd9f-4927-a009-005d696fb037.jpg)


## Que se necesita de hardware

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
  
## Ajustes personalizados se realizan en el fichero "mainDdefines.h"

Pins usados (Si no los cambias) en fichero "mainDefines.h"

Estos son los pines utilizados por defecto
```c
const int g_pinIntLedBlue =2;
const int g_pingRingLed = 15;
int g_pinRelays[4] = {26, 25, 33, 32}; // 3534}
```
  
 Configuracion wifi se debe ajustar en el fichero "mainDefines.h
 
 Ajustando wifi sisid y wifi password, asi como una ip libre correspondiente a tu rango de ip 

```c
long g_NetWsWifiIntervalPrevious = 0;
long g_NetWsWifiIntervalLapse = 30000;
const char *g_NetWsWifiSsid = "Your wifi";
const char *g_NetWsWifiPwd = "your wifi pasword";
IPAddress g_NetWsIPAddresslocal_IP(192, 168, 2, 40);
IPAddress g_NetWsIpGateway(192, 168, 2, 1);
IPAddress g_NetWsIpSubnet(255, 255, 255, 0);
IPAddress g_NetWsIpDNS1(8, 8, 8, 8); // optional
IPAddress g_NetWSIpDNS2(8, 8, 4, 4); //optional
```

