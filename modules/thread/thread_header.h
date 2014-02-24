/* This file has been automatically generated by builder part of the ferite distribution */
#ifndef __thread_HEADER__
#define __thread_HEADER__

#include <ferite.h>

FERITE_API void ferite_thread_register();
FERITE_API void ferite_thread_unregister();
FERITE_API void ferite_thread_init( FeriteScript *script );
FERITE_API void ferite_thread_deinit( FeriteScript *script );

    /* Start user defined header code */



#include "../../libs/aphex/include/aphex.h"

#define SelfThread ((FeriteThread*)self->odata)
#define SelfMutex ((AphexMutex*)self->odata)
#define SelfEvent ((AphexEvent*)self->odata)

 FeriteScript *ferite_thread_create_script( FeriteScript *script );
 void ferite_thread_destroy_script( FeriteScript *script, FeriteThread *ctx, int fd );
 void *ferite_thread_execute( void *ptr );
 

    /* End user defined header code */

FE_NATIVE_FUNCTION( ferite_thread_Thread_sleep_n );
FE_NATIVE_FUNCTION( ferite_thread_Thread_start_n );
FE_NATIVE_FUNCTION( ferite_thread_Thread_isRunning_ );
FE_NATIVE_FUNCTION( ferite_thread_Thread_setPassExceptions_n );
FE_NATIVE_FUNCTION( ferite_thread_Thread_destructor_ );
FE_NATIVE_FUNCTION( ferite_thread_Thread_constructor_ );
FE_NATIVE_FUNCTION( ferite_thread_Thread_join_o );
FE_NATIVE_FUNCTION( ferite_thread_Event_timedWait_n );
FE_NATIVE_FUNCTION( ferite_thread_Event_signal_ );
FE_NATIVE_FUNCTION( ferite_thread_Event_wait_ );
FE_NATIVE_FUNCTION( ferite_thread_Event_destructor_ );
FE_NATIVE_FUNCTION( ferite_thread_Event_constructor_ );
FE_NATIVE_FUNCTION( ferite_thread_Mutex_unlock_ );
FE_NATIVE_FUNCTION( ferite_thread_Mutex_lock_ );
FE_NATIVE_FUNCTION( ferite_thread_Mutex_destructor_ );
FE_NATIVE_FUNCTION( ferite_thread_Mutex_constructor_ );

#endif /* __thread_HEADER__ */
