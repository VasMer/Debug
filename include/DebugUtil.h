#ifdef DEBUG
#define DEB(x)                         \
    Serial.print(millis());            \
    Serial.print(" ");                 \
    Serial.print(__PRETTY_FUNCTION__); \
    Serial.print("[");                 \
    Serial.print(__LINE__);            \
    Serial.print("]: ");               \
    Serial.println(x);

#else
    #define DEB(x)
#endif