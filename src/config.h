#include "secrets.h"

#define HOSTNAME "roomba" // e.g. roomba.local
#define BRC_PIN 2
#define ROOMBA_650_SLEEP_FIX 1
#ifndef ROOMBA_650_SLEEP_FIX
#define ROOMBA_500 1
#endif

#define ENABLE_SLEEP 1

#define MQTT_SERVER "192.168.10.1"
#define MQTT_USER "openhabian"
#define MQTT_COMMAND_TOPIC "casa/cocina/roomba/command"
#define MQTT_STATE_TOPIC "casa/cocina/roomba/state"