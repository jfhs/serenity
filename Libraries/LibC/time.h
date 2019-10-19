#pragma once

#include <sys/cdefs.h>
#include <sys/types.h>
#include <stddef.h>

__BEGIN_DECLS


struct tm {
    int tm_sec;   /* Seconds (0-60) */
    int tm_min;   /* Minutes (0-59) */
    int tm_hour;  /* Hours (0-23) */
    int tm_mday;  /* Day of the month (1-31) */
    int tm_mon;   /* Month (0-11) */
    int tm_year;  /* Year - 1900 */
    int tm_wday;  /* Day of the week (0-6, Sunday = 0) */
    int tm_yday;  /* Day in the year (0-365, 1 Jan = 0) */
    int tm_isdst; /* Daylight saving time */
    long tm_gmtoff;           /* Seconds east of UTC */
    const char *tm_zone;      /* Timezone abbreviation */
};

extern long timezone;
extern long altzone;
extern char* tzname[2];
extern int daylight;

typedef uint32_t clock_t;
typedef uint32_t time_t;

struct tm* localtime(const time_t*);
struct tm* localtime_r(const time_t*, struct tm *result);
struct tm* gmtime(const time_t*);
time_t mktime(struct tm*);
time_t time(time_t*);
char* ctime(const time_t*);
void tzset();
char* asctime(const struct tm*);

#define CLOCKS_PER_SEC 1000
clock_t clock();

#define CLOCK_REALTIME 0
typedef int clockid_t;

int clock_getres(clockid_t clk_id, struct timespec *res);
int clock_gettime(clockid_t clk_id, struct timespec *tp);
int clock_settime(clockid_t clk_id, const struct timespec *tp);

double difftime(time_t, time_t);
size_t strftime(char* s, size_t max, const char* format, const struct tm*);
int nanosleep(const struct timespec *req, struct timespec *rem);

#define difftime(t1, t0) (double)(t1 - t0)

// This is c++11+, but we have no macro for that now.
typedef struct timespec {
    time_t tv_sec;
    long tv_nsec;
} timespec;

__END_DECLS
