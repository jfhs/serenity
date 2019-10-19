#include <Kernel/Syscall.h>
#include <errno.h>
#include <utime.h>

extern "C" {

int utime(const char* pathname, const struct utimbuf* buf)
{
    int rc = syscall(SC_utime, (u32)pathname, (u32)buf);
    __RETURN_WITH_ERRNO(rc, rc, -1);
}

int utimes(const char *filename, const struct timeval times[2]) 
{
    // todo: implement propertly
    int rc = syscall(SC_utime, (u32)filename, (u32)times);
    __RETURN_WITH_ERRNO(rc, rc, -1);
}
}
