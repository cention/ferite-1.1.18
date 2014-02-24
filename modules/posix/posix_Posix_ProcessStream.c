/* This file has been automatically generated by builder part of the ferite distribution */
/* file:  posix_Posix_ProcessStream.c */
/* class: ProcessStream */

#include <ferite.h>       /* we need this without a doubt */
#include "posix_header.h"  /* this is the module header */

FE_NATIVE_FUNCTION( ferite_posix_Posix_ProcessStream_eos_ )
{
   FeriteObject *self = FE_CONTAINER_TO_OBJECT;
   FeriteObject *super = FE_CONTAINER_TO_OBJECT;

   { /* Main function body. */
#line 116 "posix.fec"

 if( feof(((FILE*)StreamObject->file_pointer)) && StreamObject->input_buffer.length == 0 ) {
 FE_RETURN_TRUE;
 }
 FE_RETURN_FALSE;
	
   }
   FE_RETURN_VOID;
   self = NULL;
   super = NULL;
}

FE_NATIVE_FUNCTION( ferite_posix_Posix_ProcessStream___read___n )
{
   double c = 0.0;
   FeriteObject *self = FE_CONTAINER_TO_OBJECT;
   FeriteObject *super = FE_CONTAINER_TO_OBJECT;

   ferite_get_parameters( params, 1, &c );

   { /* Main function body. */
#line 92 "posix.fec"

 FeriteVariable *in;
 char *p;
 struct Stream *Stream = self->odata;
 in = fe_new_str_static("fgets", NULL, (int)c, FE_CHARSET_DEFAULT );
 p = fgets( FE_STR2PTR(in), (int)c, Stream->file_pointer );
 if( p == NULL )
 ferite_str_set( script, VAS(in), "", 0, FE_CHARSET_DEFAULT );
 else
 FE_STRLEN(in) = strlen(p);
 
 FE_RETURN_VAR( in );
 
   }
   FE_RETURN_VOID;
   self = NULL;
   super = NULL;
}

FE_NATIVE_FUNCTION( ferite_posix_Posix_ProcessStream___write___s )
{
   FeriteString *s = NULL;
   FeriteObject *self = FE_CONTAINER_TO_OBJECT;
   FeriteObject *super = FE_CONTAINER_TO_OBJECT;

   ferite_get_parameters( params, 1, &s );

   { /* Main function body. */
#line 105 "posix.fec"

 int ret;
 struct Stream *Stream = self->odata;
 ret = fwrite( s->data, 1, s->length, Stream->file_pointer );
 FE_RETURN_LONG( ret );
 
   }
   FE_RETURN_VOID;
   self = NULL;
   super = NULL;
}

FE_NATIVE_FUNCTION( ferite_posix_Posix_ProcessStream___close___ )
{
   FeriteObject *self = FE_CONTAINER_TO_OBJECT;
   FeriteObject *super = FE_CONTAINER_TO_OBJECT;

   { /* Main function body. */
#line 111 "posix.fec"
 
 if( StreamObject->file_pointer )
 pclose( StreamObject->file_pointer );
	STREAM_RESET(StreamObject);
 
   }
   FE_RETURN_VOID;
   self = NULL;
   super = NULL;
}

FE_NATIVE_FUNCTION( ferite_posix_Posix_ProcessStream_constructor_o )
{
   FeriteObject *fd = NULL;
   FeriteObject *self = FE_CONTAINER_TO_OBJECT;
   FeriteObject *super = FE_CONTAINER_TO_OBJECT;

   ferite_get_parameters( params, 1, &fd );

   { /* Main function body. */
#line 83 "posix.fec"

 FeriteVariable *c = ferite_create_object_variable_with_data( script, "StdioStream", self, FE_STATIC ); 
 ferite_variable_destroy( script, ferite_object_call_super( script, c, NULL ) );
 ferite_variable_destroy( script, c );
 
 StreamObject->file_pointer = fd->odata;
 StreamObject->read = ferite_object_get_function( script, self, "__read__" );
 StreamObject->write = ferite_object_get_function( script, self, "__write__" );
 
   }
   FE_RETURN_VOID;
   self = NULL;
   super = NULL;
}

