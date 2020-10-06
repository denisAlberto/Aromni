#pragma once

#define VERSION       "Aromni 2020 - V0.005"
#define WIFI_SSID     "ssid"
#define WIFI_PASSWORD "pass"

#define DEVICE_ID ""

#define MSG_SIZE 500

/*
 * CA certificate
 */
static const char cacert[] PROGMEM = \
"-----BEGIN CERTIFICATE-----\n"\
"-----END CERTIFICATE-----\n";

/*
 * cert.perm
 */
static const char client_cert[] PROGMEM = \
"-----BEGIN CERTIFICATE-----\n"\
"-----END CERTIFICATE-----\n";

/*
 * key.perm
 */
static const char privkey[] PROGMEM = \
"-----BEGIN PRIVATE KEY-----\n"
"-----END PRIVATE KEY-----\n";

void
messageGenerator(
  char message[MSG_SIZE],
  bool heartBeat
) {

  if( message == NULL ){
    return;
  }
  
  struct timeval tv = {0};
  gettimeofday(&tv, NULL);
  
  snprintf( message,
            MSG_SIZE,
            "{\r\n"\
            "  \"schema\": \"aromni_schema\",\r\n"\
            "  \"payload\": {\r\n"\
            "    \"deviceid\": \"%s\",\r\n"\
            "    \"datetime\": \"%ld\",\r\n"\
            "    \"heartbeat\": %s\r\n"\
            "  }\r\n"\
            "}\r\n",
            DEVICE_ID,
            tv.tv_sec,
            (heartBeat == true)?"true":"false");
}
