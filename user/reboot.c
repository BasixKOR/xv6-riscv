#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char **argv)
{
  reboot();
  exit(0);
}
