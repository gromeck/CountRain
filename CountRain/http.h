/*
**  http defines & prototypes
*/
#ifndef __HTTP_H__
#define __HTTP_H__ 1

#include "util.h"
#include <ESP8266WebServer.h>

#define HTTP_GET_VAR_WIFI_ALLPARAMS "all"
#define HTTP_GET_VAR_WIFI_SSID      "wifissid"
#define HTTP_GET_VAR_WIFI_PSK       "wifipsk"
#define HTTP_GET_VAR_NTP_SERVER     "ntpserver"
#define HTTP_GET_VAR_COUNTERVAL     "counter"
#define HTTP_GET_VAR_COUNTERINC     "increment"

/*
**  setup the HTTP web server:w
*/
void HttpSetup(void);

/*
**	handle incoming HTTP requests
*/
void HttpHandleRequest(void);

#endif

/**/
