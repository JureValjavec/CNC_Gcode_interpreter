/*****************************************************************************/
/* Author: Jure Valjavec                                                     */	
/* Date: 07.11.2016                                                          */
/* File: types.h                                                             */
/*****************************************************************************/

#ifndef TYPES_H
#define TYPES_H

#ifndef PLUS
typedef char                CHAR; 
typedef int                 INT;
#endif

typedef unsigned char       BYTE;
typedef signed short        SHORT;
typedef unsigned short      WORD;
typedef signed long         LONG;
typedef unsigned long       ULONG;
typedef unsigned long       DWORD;
typedef unsigned long long  DULONG;
typedef double              DOUBLE;

typedef signed char         INT8;
typedef unsigned char       UINT8;
typedef signed short        INT16;
typedef unsigned short      UINT16;
typedef signed long         INT32;
typedef unsigned long       UINT32;
typedef signed long long    INT64;
typedef unsigned long long  UINT64;

typedef unsigned char 		uint8;
typedef unsigned short		uint16;


typedef UINT32         SIZE_T;

typedef volatile unsigned long   UINT32_REG;
typedef volatile unsigned short  UINT16_REG;
typedef volatile unsigned char   UINT8_REG;

typedef unsigned long 		uint32;	

#ifndef VOID
#define VOID           void
#endif

#ifndef NULL
#define NULL           ((void *) 0)
#endif

/* ************************************************************************** */
#ifndef min
#define min(a,b)    (((a) < (b)) ? (a) : (b))
#endif

#ifndef max
#define max(a,b)    (((a) > (b)) ? (a) : (b))
#endif

#define CONST     const
#define EXTERN    extern
#define VOLATILE  volatile

#ifndef FALSE
#define FALSE 0
#endif

#ifndef TRUE
#define TRUE 1
#endif

#ifndef LOW
#define LOW 0
#endif

#ifndef HIGH
#define HIGH 1
#endif

#ifndef LITTLE
#define LITTLE 0
#endif

#ifndef BIG
#define BIG 1
#endif


#endif /*TYPES_H*/
