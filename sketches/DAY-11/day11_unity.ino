// Pseudocode structure — combine your Day 7-10 functions
unsigned long nextDht = 0, nextUltra = 0, nextSoil = 0, nextLdr = 0;

void setup() {
  Serial.begin(9600);
  Serial.println(F("ms,ldr,dht_t,dht_h,cm,soil_pct"));
  initSensors();
}

void loop() {
  unsigned long now = millis();
  if (now >= nextLdr)   { nextLdr = now + 500;  readLdr(); }
  if (now >= nextDht)   { nextDht = now + 2000; readDht(); }
  if (now >= nextUltra) { nextUltra = now + 300; readUltra(); }
  if (now >= nextSoil)  { nextSoil = now + 1000; readSoil(); }
  if (rowComplete()) emitCsvRow();
}
