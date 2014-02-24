/* This file has been automatically generated by builder part of the ferite distribution */
#ifndef __unix_HEADER__
#define __unix_HEADER__

#include <ferite.h>

FERITE_API void ferite_unix_register();
FERITE_API void ferite_unix_unregister();
FERITE_API void ferite_unix_init( FeriteScript *script );
FERITE_API void ferite_unix_deinit( FeriteScript *script );

    /* Start user defined header code */
 
#include "../stream/util_stream.h"
#include <syslog.h>
#include <stdarg.h>
 
#include "../network/util_network.h"

    /* End user defined header code */

FE_NATIVE_FUNCTION( ferite_unix_Unix_SyslogStream_error_s );
FE_NATIVE_FUNCTION( ferite_unix_Unix_SyslogStream_debug_s );
FE_NATIVE_FUNCTION( ferite_unix_Unix_SyslogStream___read___n );
FE_NATIVE_FUNCTION( ferite_unix_Unix_SyslogStream_notice_s );
FE_NATIVE_FUNCTION( ferite_unix_Unix_SyslogStream_warning_s );
FE_NATIVE_FUNCTION( ferite_unix_Unix_SyslogStream_alert_s );
FE_NATIVE_FUNCTION( ferite_unix_Unix_SyslogStream___write___s );
FE_NATIVE_FUNCTION( ferite_unix_Unix_SyslogStream_critical_s );
FE_NATIVE_FUNCTION( ferite_unix_Unix_SyslogStream_info_s );
FE_NATIVE_FUNCTION( ferite_unix_Unix_SyslogStream_emerg_s );
FE_NATIVE_FUNCTION( ferite_unix_Unix_SyslogStream___close___ );
FE_NATIVE_FUNCTION( ferite_unix_Unix_SyslogStream_constructor_ );
FE_NATIVE_FUNCTION( ferite_unix_Unix_openlog_snn );
FE_NATIVE_FUNCTION( ferite_unix_Network_Unix_Stream_listen_n );
FE_NATIVE_FUNCTION( ferite_unix_Network_Unix_Stream_accept_ );
FE_NATIVE_FUNCTION( ferite_unix_Network_Unix_connect_s );
FE_NATIVE_FUNCTION( ferite_unix_Network_Unix_bind_s );

#endif /* __unix_HEADER__ */
