
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from dds_obstacle_map_message_t.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Data Distribution Service distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Data Distribution Service manual.
*/

#ifndef dds_obstacle_map_message_t_1684969828_h
#define dds_obstacle_map_message_t_1684969828_h

#ifndef NDDS_STANDALONE_TYPE
    #ifdef __cplusplus
        #ifndef ndds_cpp_h
            #include "ndds/ndds_cpp.h"
        #endif
    #else
        #ifndef ndds_c_h
            #include "ndds/ndds_c.h"
        #endif
    #endif
#else
    #include "ndds_standalone_type.h"
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *dds_obstacle_map_message_tTYPENAME;
        

#ifdef __cplusplus
}
#endif

typedef struct dds_obstacle_map_message_t
{
    DDS_LongLong  utime;
    DDS_Char  type;
    DDS_Float  resolution;
    DDS_Long  num_rows;
    DDS_Long  num_cols;
    DDS_Long  map_r0;
    DDS_Long  map_c0;
    DDS_Long  array_r0;
    DDS_Long  array_c0;
    DDS_LongLong  length;
     DDS_CharSeq  data;

} dds_obstacle_map_message_t;
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* dds_obstacle_map_message_t_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(dds_obstacle_map_message_tSeq, dds_obstacle_map_message_t);
        
NDDSUSERDllExport
RTIBool dds_obstacle_map_message_t_initialize(
        dds_obstacle_map_message_t* self);
        
NDDSUSERDllExport
RTIBool dds_obstacle_map_message_t_initialize_ex(
        dds_obstacle_map_message_t* self,RTIBool allocatePointers);

NDDSUSERDllExport
void dds_obstacle_map_message_t_finalize(
        dds_obstacle_map_message_t* self);
                        
NDDSUSERDllExport
void dds_obstacle_map_message_t_finalize_ex(
        dds_obstacle_map_message_t* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool dds_obstacle_map_message_t_copy(
        dds_obstacle_map_message_t* dst,
        const dds_obstacle_map_message_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* dds_obstacle_map_message_t_1684969828_h */
