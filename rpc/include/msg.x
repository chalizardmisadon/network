/* msg.x: Remote msg printing protocol */
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
