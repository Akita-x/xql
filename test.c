#include "log.h"

void prt(control_msg_t *msg)
{
    printf("msg_type:%d   msg_code:%d\n",msg->msg_type,msg->msg_code);
}