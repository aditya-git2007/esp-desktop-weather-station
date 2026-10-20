# esp-desktop-weather-station
Compact desktop weather station using ESP8266/ESP32, BME280 sensor, and Wi-Fi API synchronization
# ⛅ ESP Desktop Weather Station & Environmental Monitor

> A compact, Wi-Fi-connected desktop monitoring station that tracks indoor/outdoor temperature, relative humidity, barometric pressure, and dew point, displaying real-time metrics on an OLED screen.

[![Status](https://img.shields.io/badge/Status-Completed-emerald?style=for-the-badge)]()
[![MCU](https://img.shields.io/badge/MCU-NodeMCU_ESP8266_/_ESP32-blue?style=for-the-badge)]()

---

## 🎯 Overview & Mission Objective
Designed as an elegant desktop companion, this weather station measures immediate micro-climate variables via a high-precision BME280 sensor and connects over local Wi-Fi to fetch synchronized meteorological data and time updates.

---

## 🛠️ Bill of Materials (BOM)
| Component | Specification / Role |
| :--- | :--- |
| **NodeMCU ESP8266 / ESP32** | Wi-Fi microcontroller handling sensor polling and web requests |
| **BME280 Sensor Module** | I2C precision sensor for temperature, humidity, and barometric pressure |
| **0.96" OLED Display (SSD1306)** | Crisp graphical screen for real-time weather rendering |
| **Power Supply** | Micro-USB / Type-C 5V regulated desktop power |

---

## 📌 GPIO Pinout Mapping (I2C Bus)
| Component | Component Pin | ESP32 / ESP8266 Pin | Engineering Function |
| :--- | :--- | :--- | :--- |
| **BME280 Sensor** | `SDA / SCL` | `GPIO 21 / 22` (ESP32) or `D2 / D1` (ESP8266) | Shared I2C Environmental Bus |
| **SSD1306 OLED** | `SDA / SCL` | `GPIO 21 / 22` (ESP32) or `D2 / D1` (ESP8266) | Shared I2C Graphic Display Bus |

---

## 📂 Repository Structure
```text
📂 esp-desktop-weather-station
├── 📂 firmware             <-- C++ source code (weather_station.ino)
├── 📂 schematics           <-- I2C wiring and power guidelines
└── 📄 README.md            <-- Project documentation
