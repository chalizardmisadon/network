/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _MSG_H_RPCGEN
#define _MSG_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


#define MESSAGEPROG 0x20000001
#define PRINTMESSAGEVERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define PRINTMESSAGE 1
extern  int * printmessage_1(char **, CLIENT *);
extern  int * printmessage_1_svc(char **, struct svc_req *);
extern int messageprog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define PRINTMESSAGE 1
extern  int * printmessage_1();
extern  int * printmessage_1_svc();
extern int messageprog_1_freeresult ();
#endif /* K&R C */

#define TRIPLE_PROG 0x100000001
#define TRIPLE_INT_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define TRIPLE_INT 1
extern  int * triple_int_1(int *, CLIENT *);
extern  int * triple_int_1_svc(int *, struct svc_req *);
extern int triple_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define TRIPLE_INT 1
extern  int * triple_int_1();
extern  int * triple_int_1_svc();
extern int triple_prog_1_freeresult ();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_MSG_H_RPCGEN */
