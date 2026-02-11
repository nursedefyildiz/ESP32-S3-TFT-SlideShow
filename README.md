# ESP32-S3 TFT LCD Slayt Gösterisi

Bu proje, ESP32-S3 DevKitC-1 mikrodenetleyici ve 2.4" ILI9341 TFT LCD ekran kullanarak, gömülü sistemler üzerinde görsel verilerin nasıl işleneceğini ve görüntüleneceğini göstermektedir.

## 🚀 Özellikler
- 320x240 piksel çözünürlüğünde yatay slayt gösterisi.
- Görseller, RAM yerine `PROGMEM` (Flash bellek) üzerinde saklanarak bellek optimizasyonu sağlanmıştır.
- SPI haberleşme protokolü kullanılmıştır.

## 🛠️ Donanım Gereksinimleri
- ESP32-S3 DevKitC-1
- ILI9341 TFT LCD (240x320)
- Jumper Kablolar

## 📐 Bağlantı Şeması (Pinout)
| ILI9341 Pin | ESP32-S3 Pin |
|-------------|--------------|
| CS          | GPIO 10      |
| DC          | GPIO 13      |
| RST         | GPIO 14      |
| MOSI        | GPIO 11      |
| SCK         | GPIO 12      |
| VCC         | 3.3V         |
| GND         | GND          |

## 🖼️ Görsel Dönüştürme
Görselleri kod formatına (C array) dönüştürmek için [image2cpp](https://javl.github.io/image2cpp/) aracı kullanılmıştır. 
**Ayarlar:** - Canvas size: 320x240 
- Scaling: scale to fit, keeping proportions 
- Draw mode: Horizontal - 2 bytes per pixel (565)

## 📦 Kütüphaneler
- Adafruit GFX Library
- Adafruit ILI9341
