/*
 * This file was generated by orbit-idl-2 - DO NOT EDIT!
 */

#ifndef Bonobo_Sample_Echo_H
#define Bonobo_Sample_Echo_H 1
#include <glib.h>
#define ORBIT_IDL_SERIAL 20
#include <orbit/orbit-types.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/** typedefs **/
#include <bonobo/Bonobo.h>
#if !defined(ORBIT_DECL_Bonobo_Sample_Echo) && !defined(_Bonobo_Sample_Echo_defined)
#define ORBIT_DECL_Bonobo_Sample_Echo 1
#define _Bonobo_Sample_Echo_defined 1
#define Bonobo_Sample_Echo__freekids CORBA_Object__freekids
typedef CORBA_Object Bonobo_Sample_Echo;
extern CORBA_unsigned_long Bonobo_Sample_Echo__classid;
#if !defined(TC_IMPL_TC_Bonobo_Sample_Echo_0)
#define TC_IMPL_TC_Bonobo_Sample_Echo_0 'B'
#define TC_IMPL_TC_Bonobo_Sample_Echo_1 'o'
#define TC_IMPL_TC_Bonobo_Sample_Echo_2 'n'
#define TC_IMPL_TC_Bonobo_Sample_Echo_3 'o'
#define TC_IMPL_TC_Bonobo_Sample_Echo_4 'b'
#define TC_IMPL_TC_Bonobo_Sample_Echo_5 'o'
#define TC_IMPL_TC_Bonobo_Sample_Echo_6 '_'
#define TC_IMPL_TC_Bonobo_Sample_Echo_7 'S'
#define TC_IMPL_TC_Bonobo_Sample_Echo_8 'a'
#define TC_IMPL_TC_Bonobo_Sample_Echo_9 'm'
#define TC_IMPL_TC_Bonobo_Sample_Echo_10 'p'
#define TC_IMPL_TC_Bonobo_Sample_Echo_11 'l'
#define TC_IMPL_TC_Bonobo_Sample_Echo_12 'e'
#define TC_IMPL_TC_Bonobo_Sample_Echo_13 '_'
#define TC_IMPL_TC_Bonobo_Sample_Echo_14 'E'
#define TC_IMPL_TC_Bonobo_Sample_Echo_15 'c'
#define TC_IMPL_TC_Bonobo_Sample_Echo_16 'h'
#define TC_IMPL_TC_Bonobo_Sample_Echo_17 'o'
#ifdef ORBIT_IDL_C_IMODULE_Bonobo_Sample_Echo
static
#else
extern
#endif
ORBIT2_MAYBE_CONST struct CORBA_TypeCode_struct TC_Bonobo_Sample_Echo_struct;
#define TC_Bonobo_Sample_Echo ((CORBA_TypeCode)&TC_Bonobo_Sample_Echo_struct)
#endif
#endif

/** POA structures **/
#ifndef _defined_POA_Bonobo_Sample_Echo
#define _defined_POA_Bonobo_Sample_Echo 1
typedef struct {
  void *_private;
void (*echo)(PortableServer_Servant _servant, const CORBA_char * message, CORBA_Environment *ev);
} POA_Bonobo_Sample_Echo__epv;
typedef struct {
  PortableServer_ServantBase__epv *_base_epv;
  POA_Bonobo_Unknown__epv *Bonobo_Unknown_epv;
  POA_Bonobo_Sample_Echo__epv *Bonobo_Sample_Echo_epv;
} POA_Bonobo_Sample_Echo__vepv;
typedef struct {
  void *_private;
  POA_Bonobo_Sample_Echo__vepv *vepv;
} POA_Bonobo_Sample_Echo;
extern void POA_Bonobo_Sample_Echo__init(PortableServer_Servant servant, CORBA_Environment *ev);
extern void POA_Bonobo_Sample_Echo__fini(PortableServer_Servant servant, CORBA_Environment *ev);
#endif /* _defined_POA_Bonobo_Sample_Echo */

/** skel prototypes **/
void _ORBIT_skel_small_Bonobo_Sample_Echo_echo(POA_Bonobo_Sample_Echo *_ORBIT_servant, gpointer _ORBIT_retval, gpointer *_ORBIT_args, CORBA_Context ctx,CORBA_Environment *ev, void (*_impl_echo)(PortableServer_Servant _servant, const CORBA_char * message, CORBA_Environment *ev));

/** stub prototypes **/
#define Bonobo_Sample_Echo_ref Bonobo_Unknown_ref
#define Bonobo_Sample_Echo_unref Bonobo_Unknown_unref
#define Bonobo_Sample_Echo_queryInterface Bonobo_Unknown_queryInterface
void Bonobo_Sample_Echo_echo(Bonobo_Sample_Echo _obj, const CORBA_char * message, CORBA_Environment *ev);
#include <orbit/orb-core/orbit-interface.h>

#ifdef ORBIT_IDL_C_IMODULE_Bonobo_Sample_Echo
static 
#else
extern 
#endif
ORBit_IInterface Bonobo_Sample_Echo__iinterface;
#define Bonobo_Sample_Echo_IMETHODS_LEN 1
#ifdef ORBIT_IDL_C_IMODULE_Bonobo_Sample_Echo
static 
#else
extern 
#endif
ORBit_IMethod Bonobo_Sample_Echo__imethods[Bonobo_Sample_Echo_IMETHODS_LEN];

/** IMethods index */

#ifndef __Bonobo_Sample_Echo__imethods_index
#define __Bonobo_Sample_Echo__imethods_index
typedef enum {
	Bonobo_Sample_Echo_echo__imethods_index
} Bonobo_Sample_Echo__imethods_index;
#endif /* __Bonobo_Sample_Echo__imethods_index */

#ifndef __ORBIT_IMETHODS_INDEX
#define __ORBIT_IMETHODS_INDEX
#define ORBIT_IMETHODS_INDEX(m) (m ## __imethods_index)
#endif /* __ORBIT_IMETHODS_INDEX */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#ifndef EXCLUDE_ORBIT_H
#include <orbit/orbit.h>

#endif /* EXCLUDE_ORBIT_H */
#endif
#undef ORBIT_IDL_SERIAL