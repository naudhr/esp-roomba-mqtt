#include "secrets.h"

#define HOSTNAME "roomba" // e.g. roomba.local
#define BRC_PIN 2
#define ROOMBA_650_SLEEP_FIX 1
#ifndef ROOMBA_650_SLEEP_FIX
#define ROOMBA_500 1
#endif

#define ENABLE_SLEEP 1

// to be adjusted by user
#define MQTT_SERVER "10.0.0.2"
#define MQTT_USER "roomba"

// Only change if you know what you're doing!
#define MQTT_DISCOVERY "homeassistant"
#define MQTT_DEVICE_CLASS "vacuum"
#define MQTT_DIVIDER "/"
#define MQTT_TOPIC_BASE MQTT_DISCOVERY MQTT_DIVIDER MQTT_DEVICE_CLASS MQTT_DIVIDER
#define MQTT_IDPREFIX "roomba_"
#define MQTT_COMMAND_TOPIC "command"
#define MQTT_STATE_TOPIC "state"
#define MQTT_CONFIG_TOPIC "config"
