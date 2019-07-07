/* msg.x: Remote msg printing protocol */

/* maximum length of a directory entry */
const MAXNAMELEN = 255;

/* a directory entry */
typedef string nametype<MAXNAMELEN>;

/* a link in the listing */
typedef struct namenode *namelist;
typedef struct namenode namearray<5>;

/* A node in the directory listing */
struct namenode {
	nametype name;          /* name of directory entry */
	namelist next;          /* next entry */
};
/* The result of a READDIR operation. */
union readdir_res switch (int errno) {
case 0:
	namelist list_0;  /* no error: return directory listing */
case 1:
	namelist list_1;
default:
	void;           /* error occurred: nothing else to return */
};


program MESSAGEPROG {

	 version PRINTMESSAGEVERS {
		 int PRINTMESSAGE(string) = 1;
	 } = 1;

} = 0x20000001;


program MULTI_PROG {

	version TWO_INT_VERS_1 {
		int TWO_INT(int) = 2;
		int THREE_INT(int) = 3;
		int FOUR_INT(int) = 4;
	} = 1;
	
	version TWO_INT_VERS_2 {
		int TWO_INT(int) = 2;
		int THREE_INT(int) = 3;
		int FOUR_INT(int) = 4;
	} = 2;

} = 0x100000001;

