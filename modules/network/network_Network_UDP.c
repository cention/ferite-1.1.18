/* This file has been automatically generated by builder part of the ferite distribution */
/* file: network_Network_UDP.c */
/* namespace: UDP */

#include <ferite.h>       /* we need this without a doubt */
#include "network_header.h"  /* this is the module header */

FE_NATIVE_FUNCTION( ferite_network_Network_UDP_connect_snn )
{
   FeriteString *host = NULL;
   double port = 0.0;
   double af = 0.0;
   FeriteNamespace *self = FE_CONTAINER_TO_NS;

   ferite_get_parameters( params, 3, &host, &port, &af );

   { /* Main function body. */
#line 879 "network.fec"
 
            FeriteClass *cls;
            struct sockaddr *sa;
            int size, sock, family = (int)af;
            FeriteVariable **args, *object, *fv;            
            
            if(!(sa = make_sockaddr(script, host->data, (short)port, &family, &size)))
            {
                FE_RETURN_NULL_OBJECT;
            }
            
            if((sock = socket(family, SOCK_DGRAM, 0)) == -1)
            {
                ferite_set_error(script, errno, "%s", strerror(errno));
                ffree(sa);
                FE_RETURN_NULL_OBJECT;
            }
            
            if(connect(sock, sa, size))
            {
                ferite_set_error(script, errno, "%s", strerror(errno));
                close(sock);
                ffree(sa);
                FE_RETURN_NULL_OBJECT;
            }
            
            if((cls = ferite_find_class(script, script->mainns, "Network.UDP.Stream")))
            {
                args = ferite_create_parameter_list(script,4);
                args = ferite_add_to_parameter_list(args,fe_new_lng_static("socket", sock));
                MARK_VARIABLE_AS_DISPOSABLE(args[0]); /* automatically clear up */
                object = ferite_new_object(script, cls, args);
                ferite_delete_parameter_list(script, args);
                fv = ferite_object_get_var(script, VAO(object), "af");
                if(family == AF_INET)
                    VAI(fv) = 0;
                else
                    VAI(fv) = 1;
                set_remoteip(script, VAO(object), sa, VAI(fv));
                ffree(sa);
                FE_RETURN_VAR(object);
            }
        
   }
   FE_RETURN_VOID;
   self = NULL;
}

FE_NATIVE_FUNCTION( ferite_network_Network_UDP_bind_snn )
{
   FeriteString *host = NULL;
   double port = 0.0;
   double af = 0.0;
   FeriteNamespace *self = FE_CONTAINER_TO_NS;

   ferite_get_parameters( params, 3, &host, &port, &af );

   { /* Main function body. */
#line 799 "network.fec"
 
 FeriteClass *cls;
 FeriteVariable **args, *object, *fv; 
 struct sockaddr *sa;
 int size, sock, family = (int)af;
#ifndef USING_SOLARIS 
 int yes = FE_TRUE;
#else
 char yes = FE_TRUE;
#endif
 if(!(sa = make_sockaddr(script, host->data, (short)port, &family, &size)))
 {
 FE_RETURN_NULL_OBJECT;
 }
 
 if((sock = socket(family, SOCK_DGRAM, 0)) == -1)
 {
 ferite_set_error(script, errno, "%s", strerror(errno));
 ffree(sa);
 FE_RETURN_NULL_OBJECT;
 }
 
 if (setsockopt(sock,SOL_SOCKET,SO_REUSEADDR,&yes,sizeof(int)) == -1) {
 ferite_set_error(script, errno, "%s", strerror(errno));
 ffree(sa);
 close(sock);
 FE_RETURN_NULL_OBJECT; 
 } 
 
 if(bind(sock, sa, size))
 {
 ferite_set_error(script, errno, "%s", strerror(errno));
 ffree(sa);
 close(sock);
 FE_RETURN_NULL_OBJECT;
 }
 
 if((cls = ferite_find_class(script, script->mainns, "Network.UDP.Stream")))
 {
 args = ferite_create_parameter_list(script,4);
 args = ferite_add_to_parameter_list(args, fe_new_lng_static("socket", sock));
 MARK_VARIABLE_AS_DISPOSABLE(args[0]); /* automatically clear up */
 object = ferite_new_object(script, cls, args);
 ferite_delete_parameter_list(script, args);
 fv = ferite_object_get_var(script, VAO(object), "af");
 if(family == AF_INET) VAI(fv) = 0;
 else VAI(fv) = 1;
 ffree(sa);
 FE_RETURN_VAR(object);
 }
 close(sock);
 FE_RETURN_NULL_OBJECT;
 
   }
   FE_RETURN_VOID;
   self = NULL;
}

