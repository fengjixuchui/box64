/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.1.0.16) *
 *******************************************************************/
#ifndef __wrappedgstreamerTYPES_H_
#define __wrappedgstreamerTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFppV_t)(void*, void*, ...);
typedef void (*vFppA_t)(void*, void*, va_list);
typedef int64_t (*iFppV_t)(void*, void*, ...);
typedef int64_t (*iFppA_t)(void*, void*, va_list);
typedef void (*vFpppp_t)(void*, void*, void*, void*);
typedef void (*vFpippippV_t)(void*, int64_t, void*, void*, int64_t, void*, void*, ...);
typedef void (*vFpippippA_t)(void*, int64_t, void*, void*, int64_t, void*, void*, va_list);

#define SUPER() ADDED_FUNCTIONS() \
	GO(gst_caps_set_simple, vFppV_t) \
	GO(gst_structure_remove_fields, vFppV_t) \
	GO(gst_caps_set_simple_valist, vFppA_t) \
	GO(gst_structure_remove_fields_valist, vFppA_t) \
	GO(gst_structure_get, iFppV_t) \
	GO(gst_structure_get_valist, iFppA_t) \
	GO(gst_bus_set_sync_handler, vFpppp_t) \
	GO(gst_pad_set_activatemode_function_full, vFpppp_t) \
	GO(gst_pad_set_chain_function_full, vFpppp_t) \
	GO(gst_pad_set_event_function_full, vFpppp_t) \
	GO(gst_pad_set_getrange_function_full, vFpppp_t) \
	GO(gst_pad_set_query_function_full, vFpppp_t) \
	GO(gst_debug_log, vFpippippV_t) \
	GO(gst_debug_log_valist, vFpippippA_t)

#endif // __wrappedgstreamerTYPES_H_