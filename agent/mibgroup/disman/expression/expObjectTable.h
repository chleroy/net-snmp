/*
 *Copyright(c)2004,Cisco URP imburses and Network Information Center in Beijing University of Posts and Telecommunications researches.
 *
 *All right reserved
 *
 *File Name: expObjectTable.h
 *File Description: head file.
 *
 *Current Version:1.0
 *Author:JianShun Tong
 *Date:2004.8.20
 */

/*
 * This file was generated by mib2c and is intended for use as a mib module
 * for the ucd-snmp snmpd agent. 
 */


#ifndef _MIBGROUP_EXPOBJECTABLE_H
#define _MIBGROUP_EXPOBJECTABLE_H


/*
 * we may use header_complex from the header_complex module 
 */
config_require(header_complex);

     struct expObjectTable_data {
         char           *expExpressionOwner;
         size_t          expExpressionOwnerLen;
         char           *expExpressionName;
         size_t          expExpressionNameLen;
         unsigned long   expObjectIndex;
         oid            *expObjectID;
         size_t          expObjectIDLen;
         long            expObjectIDWildcard;
         long            expObjectSampleType;
         oid            *expObjectDeltaDiscontinuityID;
         size_t          expObjectDeltaDiscontinuityIDLen;
         long            expObjectDiscontinuityIDWildcard;
         long            expObjectDiscontinuityIDType;
         oid            *expObjectConditional;
         size_t          expObjectConditionalLen;
         long            expObjectConditionalWildcard;
         long            expObjectEntryStatus;


         /*
          * internal variables 
          */
         int             storageType;


     };
     /*
      * enum definitions from the covered mib sections 
      */
#define EXPOBJCETIDWILDCARD_TRUE      1
#define EXPOBJCETIDWILDCARD_FALSE        2
#define EXPOBJCETDISCONTINUITYIDWILDCARD_TRUE        1
#define EXPOBJCETDISCONTINUITYIDWILDCARD_FALSE  2
#define EXPOBJECTCONDITIONALWILDCARD_TRUE      1
#define EXPOBJECTCONDITIONALWILDCARD_FALSE 2
#define EXPOBJECTDISCONTINUITYIDTYPE_TIMETICKS         1
#define EXPOBJECTDISCONTINUITYIDTYPE_TIMESTAMP           2
#define EXPOBJECTDISCONTINUITYIDTYPE_DATEANDTIME		3
#define EXPOBJCETSAMPLETYPE_ABSOLUTEVALUE	1
#define EXPOBJCETSAMPLETYPE_DELTAVALUE	2
#define EXPOBJCETSAMPLETYPE_CHANGEVALUE	3

     extern struct header_complex_index *expObjectTableStorage;

    /*
     * function prototypes 
     */
     void            init_expObjectTable(void);
     FindVarMethod   var_expObjectTable;
     SNMPCallback    store_expObjectTable;
     void            parse_expObjectTable(const char *, char *);

     WriteMethod     write_expObjectID;
     WriteMethod     write_expObjectIDWildcard;
     WriteMethod     write_expObjectSampleType;
     WriteMethod     write_expObjectDeltaDiscontinuityID;
     WriteMethod     write_expObjectDiscontinuityIDWildcard;
     WriteMethod     write_expObjectDiscontinuityIDType;
     WriteMethod     write_expObjectConditional;
     WriteMethod     write_expObjectConditionalWildcard;
     WriteMethod     write_expObjectEntryStatus;




#endif                          /* _MIBGROUP_EXPOBJECTABLE_H */
