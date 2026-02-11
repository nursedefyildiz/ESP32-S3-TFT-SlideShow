#include <Arduino.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>
#include "image.h" // wpp2, wpp3, wpp4, wpp5 görsellerinin olduğu dosya

#define TFT_CS   10
#define TFT_DC   13
#define TFT_RST  14

Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_RST);

void setup() {
  Serial.begin(115200);
  
  // ESP32-S3 SPI Pinleri
  SPI.begin(12, -1, 11, 10);
  tft.begin();
  
  tft.setRotation(1); 
  tft.fillScreen(ILI9341_BLACK);

  Serial.println(">>> Yeni Slayt Listesi Yukleniyor... <<<");
}

void loop() {
 
  for (int i = 0; i < epd_bitmap_allArray_LEN; i++) {
    
    // Yeni dizindeki (wpp2'den wpp5'e) resmi çizdirir
    tft.drawRGBBitmap(0, 0, epd_bitmap_allArray[i], 320, 240);
    
    // 3 saniye bekle ve sonraki resme geç
    delay(3000); 
  }
}