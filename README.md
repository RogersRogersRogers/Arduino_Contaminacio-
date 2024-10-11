# Proyecto de Medición y Publicación de Datos

Este proyecto implementa un sistema para medir diferentes parámetros ambientales como el CO2 y la temperatura, y publicar estos datos a través de Bluetooth Low Energy (BLE). El sistema utiliza varias clases para encapsular las funcionalidades necesarias, como la gestión de LEDs, la medición de datos, y la publicación de estos datos.

## Estructura del Proyecto

El proyecto está organizado en varias clases, cada una con responsabilidades específicas:

### Clases Principales

1. **LED**
   - Esta clase gestiona un LED específico.
   - **Métodos:**
     - `encender()`: Enciende el LED.
     - `apagar()`: Apaga el LED.
     - `alternar()`: Cambia el estado del LED (encendido/apagado).
     - `brillar(long tiempo)`: Enciende el LED durante un tiempo específico y luego lo apaga.

2. **Medidor**
   - Esta clase simula la medición de CO2 y temperatura.
   - **Métodos:**
     - `medirCO2()`: Devuelve un valor simulado de CO2.
     - `medirTemperatura()`: Devuelve un valor simulado de temperatura.

3. **Publicador**
   - Esta clase se encarga de la publicación de los datos a través de BLE.
   - **Métodos:**
     - `publicarCO2(int16_t valorCO2, uint8_t contador, long tiempoEspera)`: Publica un valor de CO2.
     - `publicarTemperatura(int16_t valorTemperatura, uint8_t contador, long tiempoEspera)`: Publica un valor de temperatura.

4. **PuertoSerie**
   - Maneja la comunicación a través del puerto serie.
   - **Métodos:**
     - `escribir(T mensaje)`: Envía un mensaje al puerto serie.

5. **ServicioEnEmisora**
   - Esta clase gestiona las características del servicio BLE.
   - **Métodos:**
     - `activarServicio()`: Activa el servicio y sus características.
     - `anyadirCaracteristica(Caracteristica & car)`: Añade una nueva característica al servicio.

### Ejemplo de Uso

A continuación, se presenta un ejemplo de cómo se pueden usar estas clases en el código principal:

```cpp
#include "LED.h"
#include "Medidor.h"
#include "Publicador.h"
#include "PuertoSerie.h"
#include "ServidorEnEmisora.h"

// Definición de objetos
LED led(13);
Medidor medidor;
Publicador publicador;
PuertoSerie puerto(9600);
ServicioEnEmisora servicio("MiServicioBLE");

void setup() {
    puerto.esperarDisponible();
    led.encender();
    publicador.encenderEmisora();
    servicio.activarServicio();
}

void loop() {
    int16_t valorCO2 = medidor.medirCO2();
    publicador.publicarCO2(valorCO2, 0, 1000);
    
    int16_t valorTemperatura = medidor.medirTemperatura();
    publicador.publicarTemperatura(valorTemperatura, 0, 1000);
}

Requisitos
Hardware: Microcontrolador compatible con Arduino.
Software: Entorno de desarrollo Arduino IDE.
Instalación
Clona este repositorio.
Abre el proyecto en Arduino IDE.
Conecta el hardware y selecciona la placa adecuada.
Carga el código al microcontrolador.
