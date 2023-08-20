# Planung

## Technologiediagramm

![Technologiediagramm Pavillion Steuerung](tech-diagram.png)

## Bauteile

Sensoren:
- Reed-Sensor, als Endschalter für die Motorposition über diesen Sensoren wird
  der Motorhub dann automatisch berechnet
- [Wind-Geschwindigkeits-Messgerät](https://www.amazon.de/dp/B0BB792HX4/?coliid=IQE30YSETVXA1&colid=21QCBJ2HOBVA7&psc=1&ref_=list_c_wl_lv_ov_lig_dp_it) (Oder selbst basteln mit Drehgeber und 3d-Druck)
- [Regensensor](https://www.amazon.de/AZDelivery-Regentropfen-Sensor-Arduino-gratis/dp/B07CP2GX9P/ref=sr_1_6?keywords=regensensor&qid=1692439071&sprefix=Regense%2Caps%2C136&sr=8-6&th=1)
- DHT11, Temperatur- & Luftfeuchtigkeitssensor
- 

Komponenten:
- [LED-Traffo](https://www.amazon.de/dp/B0BRQ4QPN3/?coliid=I1JPXFDW3M1YXV&colid=21QCBJ2HOBVA7&psc=1&ref_=list_c_wl_lv_ov_lig_dp_it) zum Versorgen der Steurung und Motor
- [Gehäuse](https://www.amazon.de/dp/B0C361NTYD/?coliid=I16KSY27W8VOEQ&colid=21QCBJ2HOBVA7&ref_=list_c_wl_lv_ov_lig_dp_it&th=1) zum Unterbringen der Kommponenten
- [H-Brücke](https://www.amazon.de/dp/B07DNHMNV8/?coliid=I77TI8FS7CUZT&colid=21QCBJ2HOBVA7&psc=1&ref_=list_c_wl_lv_ov_lig_dp_it) zum Umkehren der Drehrichtung des Motors
- ESP8266 Node MCU, Microcontroller zur Realisierung der Steuerung (Wifi & BT)
