/* msg.x: Remote msg printing protocol */
program MESSAGEPROG {
   version PRINTMESSAGEVERS {
     int PRINTMESSAGE(string) = 1;
   } = 1;
} = 0x20000001;

program TRIPLE_PROG {
  version TRIPLE_INT_VERS {
    int TRIPLE_INT(int) = 1;
  } = 1;
} = 0x100000001;