/* This file has been automatically generated by builder part of the ferite distribution */
/* file:  xml_XML_SAXParser.c */
/* class: SAXParser */

#include <ferite.h>       /* we need this without a doubt */
#include "xml_header.h"  /* this is the module header */

FE_NATIVE_FUNCTION( ferite_xml_XML_SAXParser_parseFile_s )
{
   FeriteString *filename = NULL;
   FeriteObject *self = FE_CONTAINER_TO_OBJECT;
   FeriteObject *super = FE_CONTAINER_TO_OBJECT;

   ferite_get_parameters( params, 1, &filename );

   { /* Main function body. */
#line 966 "xml.fec"

	        int retval = FE_FALSE;
	        SaxRecord *sr = fmalloc( sizeof( SaxRecord ) );
        
	        sr->script = script;
	        sr->obj = self;
	        xmlSetGenericErrorFunc(script, (xmlGenericErrorFunc)tree_error_handler);
	        retval = sax_xmlParseFile( SAXObj, sr, filename->data );
	        ffree( sr );
			if( retval ) {
				FE_RETURN_TRUE;
			}
			FE_RETURN_FALSE;
	    
   }
   FE_RETURN_VOID;
   self = NULL;
   super = NULL;
}

FE_NATIVE_FUNCTION( ferite_xml_XML_SAXParser_destructor_ )
{
   FeriteObject *self = FE_CONTAINER_TO_OBJECT;
   FeriteObject *super = FE_CONTAINER_TO_OBJECT;

   { /* Main function body. */
#line 954 "xml.fec"

	        if( SAXObj )
	            ffree( self->odata );
	    
   }
   FE_RETURN_VOID;
   self = NULL;
   super = NULL;
}

FE_NATIVE_FUNCTION( ferite_xml_XML_SAXParser_parseChunk_s )
{
   FeriteString *chunk = NULL;
   FeriteObject *self = FE_CONTAINER_TO_OBJECT;
   FeriteObject *super = FE_CONTAINER_TO_OBJECT;

   ferite_get_parameters( params, 1, &chunk );

   { /* Main function body. */
#line 988 "xml.fec"

	        int retval = FE_FALSE;
	        SaxRecord *sr = fmalloc( sizeof( SaxRecord ) );
        
	        sr->script = script;
	        sr->obj = self;
	        retval = sax_xmlParseChunk( SAXObj, sr, chunk );
	        ffree( sr );
			if( retval ) {
				FE_RETURN_TRUE;
			}
			FE_RETURN_FALSE;
	    
   }
   FE_RETURN_VOID;
   self = NULL;
   super = NULL;
}

FE_NATIVE_FUNCTION( ferite_xml_XML_SAXParser_constructor_ )
{
   FeriteObject *self = FE_CONTAINER_TO_OBJECT;
   FeriteObject *super = FE_CONTAINER_TO_OBJECT;

   { /* Main function body. */
#line 920 "xml.fec"

	        /* quickly nullify stuff */
	        self->odata = fmalloc( sizeof( xmlSAXHandler ) );
	        memset( SAXObj, '\0', sizeof( xmlSAXHandler ) ); 
	        SAXObj->internalSubset = sax_internalSubset;
	        SAXObj->isStandalone = sax_isStandalone;
	        SAXObj->hasInternalSubset = sax_hasInternalSubset;
	        SAXObj->hasExternalSubset = sax_hasExternalSubset;
	        SAXObj->resolveEntity = sax_resolveEntity;
	        SAXObj->getEntity = sax_getEntity;
	        SAXObj->entityDecl = sax_entityDecl;
	        SAXObj->notationDecl = sax_notationDecl;
	        SAXObj->attributeDecl = sax_attributeDecl;
	        SAXObj->elementDecl = sax_elementDecl;
	        SAXObj->unparsedEntityDecl = sax_unparsedEntityDecl;
	        SAXObj->setDocumentLocator = sax_setDocumentLocator;
	        SAXObj->startDocument = sax_startDocument;
	        SAXObj->endDocument = sax_endDocument;
	        SAXObj->startElement = sax_startElement;
	        SAXObj->endElement = sax_endElement;
	        SAXObj->reference = sax_reference;
	        SAXObj->characters = sax_characters;
	        SAXObj->ignorableWhitespace = sax_ignorableWhitespace;
	        SAXObj->processingInstruction = sax_processingInstruction;
	        SAXObj->comment = sax_comment;
	        SAXObj->warning = sax_warning;
	        SAXObj->error = sax_error;
	        SAXObj->fatalError = sax_fatalError;
	        SAXObj->getParameterEntity = sax_getParameterEntity;
	        SAXObj->cdataBlock = sax_cdataBlock;
	        SAXObj->externalSubset = sax_externalSubset;
	    
   }
   FE_RETURN_VOID;
   self = NULL;
   super = NULL;
}

