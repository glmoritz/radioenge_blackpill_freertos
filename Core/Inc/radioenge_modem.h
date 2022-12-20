
#ifndef __RADIOENGEMODEM_H
#define __RADIOENGEMODEM_H

#include "cmsis_os.h"

typedef enum
{
  RADIO_RESET,
  RADIO_CONFIGURING,
  RADIO_JOINING,
  RADIO_JOINED  
} RADIO_STATE;

typedef enum
{
  JOINED_TX,
  JOINED_WAIT_START,
  JOINED_WAITING,
  JOINED_RX  
} JOINED_STATE;

#endif