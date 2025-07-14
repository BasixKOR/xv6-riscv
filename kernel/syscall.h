// System call numbers
#define SYS_exit    1
#define SYS_fork    2
#define SYS_read    3
#define SYS_write   4
#define SYS_open    5
#define SYS_close   6
#define SYS_wait    7 // wait4 on freebsd
#define SYS_unlink  9
#define SYS_link    10
#define SYS_exec    11 // obsolete on freebsd
#define SYS_chdir   12
#define SYS_mknod   14 // freebsd11_mknod
#define SYS_getpid  20
#define SYS_kill    37
#define SYS_dup     41
#define SYS_pipe    42 // freebsd10_pipe on freebsd
#define SYS_fstat   62 // old fstat on freebsd
#define SYS_sbrk    69
#define SYS_mkdir   136

// non-standard calls
#define SYS_sleep   613
#define SYS_uptime  614
