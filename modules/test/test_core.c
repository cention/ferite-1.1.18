/* This file has been automatically generated by builder part of the ferite distribution */
#include <ferite.h>       /* we need this without a doubt */
#include "test_header.h"  /* this is the module header */

void ferite_test_register()
{
      ferite_module_register_native_function( "Test.__teardown___", ferite_test_Test___teardown___ );
      ferite_module_register_native_function( "Test.run_s", ferite_test_Test_run_s );
      ferite_module_register_native_function( "Test.__shakedown___", ferite_test_Test___shakedown___ );
      ferite_module_register_native_function( "Test.__misc___", ferite_test_Test___misc___ );
      ferite_module_register_native_function( "Test.__setup___", ferite_test_Test___setup___ );
}

void ferite_test_init( FeriteScript *script )
{
}

void ferite_test_deinit( FeriteScript *script )
{
}

void ferite_test_unregister()
{
}

