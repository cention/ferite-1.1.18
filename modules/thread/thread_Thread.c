/* This file has been automatically generated by builder part of the ferite distribution */
/* file:  thread_Thread.c */
/* class: Thread */

#include <ferite.h>       /* we need this without a doubt */
#include "thread_header.h"  /* this is the module header */

FE_NATIVE_FUNCTION( ferite_thread_Thread_sleep_n )
{
   double msecs = 0.0;
   FeriteObject *self = FE_CONTAINER_TO_OBJECT;
   FeriteObject *super = FE_CONTAINER_TO_OBJECT;

   ferite_get_parameters( params, 1, &msecs );

   { /* Main function body. */
#line 151 "thread.fec"

 
 aphex_thread_sleep( SelfThread->ctxt, (long)msecs );
 
   }
   FE_RETURN_VOID;
   self = NULL;
   super = NULL;
}

FE_NATIVE_FUNCTION( ferite_thread_Thread_start_n )
{
   double detach = 0.0;
   FeriteObject *self = FE_CONTAINER_TO_OBJECT;
   FeriteObject *super = FE_CONTAINER_TO_OBJECT;

   ferite_get_parameters( params, 1, &detach );

   { /* Main function body. */
#line 111 "thread.fec"

 if( SelfThread != NULL )
 {
 if( aphex_thread_start( SelfThread->ctxt, ferite_thread_execute, SelfThread, (int)detach ) != 0 ) {
 ferite_error( script, 0, "Unable to start thread! Not enough resources!\n" );
	FE_RETURN_FALSE;
	}
	FE_RETURN_TRUE;
 }
 else {
 ferite_error( script, 0, "Unable to start thread! (this usually happens when the Thread constructor has not been called from the subclass.)\n" );
 }
	FE_RETURN_FALSE;
 
   }
   FE_RETURN_VOID;
   self = NULL;
   super = NULL;
}

FE_NATIVE_FUNCTION( ferite_thread_Thread_isRunning_ )
{
   FeriteObject *self = FE_CONTAINER_TO_OBJECT;
   FeriteObject *super = FE_CONTAINER_TO_OBJECT;

   { /* Main function body. */
#line 206 "thread.fec"

 if( SelfThread->running )
 {
 FE_RETURN_TRUE;
 }
 FE_RETURN_FALSE;
 
   }
   FE_RETURN_VOID;
   self = NULL;
   super = NULL;
}

FE_NATIVE_FUNCTION( ferite_thread_Thread_setPassExceptions_n )
{
   double value = 0.0;
   FeriteObject *self = FE_CONTAINER_TO_OBJECT;
   FeriteObject *super = FE_CONTAINER_TO_OBJECT;

   ferite_get_parameters( params, 1, &value );

   { /* Main function body. */
#line 194 "thread.fec"

 
 SelfThread->pass_exceptions = (long)value;
 
   }
   FE_RETURN_VOID;
   self = NULL;
   super = NULL;
}

FE_NATIVE_FUNCTION( ferite_thread_Thread_destructor_ )
{
   FeriteObject *self = FE_CONTAINER_TO_OBJECT;
   FeriteObject *super = FE_CONTAINER_TO_OBJECT;

   { /* Main function body. */
#line 92 "thread.fec"

 if( SelfThread != NULL )
 {
 if( !SelfThread->running )
 ferite_thread_destroy_script( script, SelfThread, FE_TRUE );
 self->odata = NULL;
 }
 
   }
   FE_RETURN_VOID;
   self = NULL;
   super = NULL;
}

FE_NATIVE_FUNCTION( ferite_thread_Thread_constructor_ )
{
   FeriteObject *self = FE_CONTAINER_TO_OBJECT;
   FeriteObject *super = FE_CONTAINER_TO_OBJECT;

   { /* Main function body. */
#line 79 "thread.fec"

 /* create new script for this thread */
 self->odata = fmalloc( sizeof(FeriteThread) );
 SelfThread->ctxt = aphex_thread_create();
 SelfThread->script = ferite_thread_create_script( script );
 SelfThread->obj = self;
 SelfThread->running = FE_FALSE;
 SelfThread->pass_exceptions = FE_FALSE;
 
 /* printf( "Creating thread object: parent: %p script: %p ctx: %p\n", script, SelfThread->script, SelfThread ); */
 
   }
   FE_RETURN_VOID;
   self = NULL;
   super = NULL;
}

FE_NATIVE_FUNCTION( ferite_thread_Thread_join_o )
{
   FeriteObject *thread = NULL;
   FeriteClass *self = FE_CONTAINER_TO_CLASS;

   ferite_get_parameters( params, 1, &thread );

   { /* Main function body. */
#line 177 "thread.fec"

 if( thread != NULL && thread->odata != NULL )
 {
 aphex_thread_join( ((FeriteThread*)thread->odata)->ctxt );
	FE_RETURN_TRUE;
 }
	FE_RETURN_FALSE;
 
   }
   FE_RETURN_VOID;
   self = NULL;
}

