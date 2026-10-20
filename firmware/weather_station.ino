```cpp
// ==========================================
// ESP DESKTOP WEATHER STATION
// BME280 Sensor & SSD1306 OLED Display
// Developer: Aditya Kumar Gupta (aditya.geninfo.in)
// ==========================================

#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET    -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

Adafruit_BME280 bme; // I2C

void setup() {
  Serial.begin(115200);
  
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    while(1);
  }

  if (!bme.begin(0x76)) {
    Serial.println(F("Could not find a valid BME280 sensor, check wiring!"));
    while (1);
  }

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
}

void loop() {
  float temp = bme.readTemperature();
  float humidity = bme.readHumidity();
  float pressure = bme.readPressure() / 100.0F;

  display.clearDisplay();
  display.setCursor(0,0);
  display.println(F("DESKTOP WEATHER STATION"));
  display.println(F("---------------------"));
  
  display.print(F("Temp: ")); display.print(temp); display.println(F(" C"));
  display.print(F("Humidity: ")); display.print(humidity); display.println(F(" %"));
  display.print(F("Pressure: ")); display.print(pressure); display.println(F(" hPa"));
  
  display.display();
  delay(2000);
}
