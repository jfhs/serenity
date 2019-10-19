#pragma once

#include <sys/cdefs.h>

__BEGIN_DECLS

int utime(const char* pathname, const struct utimbuf*);
int utimes(const char *filename, const struct timeval times[2]);

__END_DECLS
