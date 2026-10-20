# Desktop Weather Station — I2C Bus Architecture

## ⚡ Shared I2C Bus Guidelines
* **Multi-Device Communication:** Both the BME280 sensor and the SSD1306 OLED display share the same I2C bus (`SDA` and `SCL`). They operate seamlessly together because each hardware component is assigned a unique hexadecimal address (`0x3C` for the OLED display, `0x76` or `0x77` for the BME280 sensor).
