/*
 * occupy.h
 * Occupation - Shared Definations
 *
*/
#define DEBUG 1

#ifndef __OCCUPY_H__
#define __OCCUPY_H__ value
/* Default Radio Group */
#define OCCUPY_RADIO_GROUP 80

#define OCCUPY_RADIO_TIMEOUT 200

#define OCCUPY_MEASURE_READ_COUNT 1000
#define OCCUPY_MEASURE_THRESHOLD 256
#define OCCUPY_MEASURE_DELAY 100

#define OCCUPY_DISPLAY_SCROLL_SPEED 65

typedef enum
{
    occupy_status_unknown = 0,
    occupy_status_vacant = 1,
    occupy_status_occupied = 2,
}occupy_status;

const char *occupy_transmit_query = "^@?";
const char *occupy_transmit_ping = "^@P";
const char *occupy_transmit_ack = "^@A";

/* DEBUG PRINT */
#ifdef DEBUG
#define dprint(msg) uBit.serial.printf("DEBUG: %d: %s: %s\r\n",__LINE__,__func__,msg)
#define dprintf(...) uBit.serial.printf("DEBUG: " __VA_ARGS__)
#else
#define dprint(msg)
#define dprintf(...)
// ^^ Empty Define ^^
#endif /* DEBUG PRINT */

#endif /* ifndef __OCCUPY_H__ */