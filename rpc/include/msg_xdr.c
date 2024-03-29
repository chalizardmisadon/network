/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "msg.h"

bool_t
xdr_nametype (XDR *xdrs, nametype *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, objp, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_namelist (XDR *xdrs, namelist *objp)
{
	register int32_t *buf;

	 if (!xdr_pointer (xdrs, (char **)objp, sizeof (struct namenode), (xdrproc_t) xdr_namenode))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_namearray (XDR *xdrs, namearray *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->namearray_val, (u_int *) &objp->namearray_len, 5,
		sizeof (struct namenode), (xdrproc_t) xdr_namenode))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_namenode (XDR *xdrs, namenode *objp)
{
	register int32_t *buf;

	 if (!xdr_nametype (xdrs, &objp->name))
		 return FALSE;
	 if (!xdr_namelist (xdrs, &objp->next))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_readdir_res (XDR *xdrs, readdir_res *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->errno))
		 return FALSE;
	switch (objp->errno) {
	case 0:
		 if (!xdr_namelist (xdrs, &objp->readdir_res_u.list_0))
			 return FALSE;
		break;
	case 1:
		 if (!xdr_namelist (xdrs, &objp->readdir_res_u.list_1))
			 return FALSE;
		break;
	default:
		break;
	}
	return TRUE;
}
