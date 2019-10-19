#pragma once

#include <sys/cdefs.h>

__BEGIN_DECLS

#define HUGE_VAL 1e10000
#define M_E 2.718281828459045
#define M_PI 3.141592653589793
#define M_PI_2 (M_PI / 2)
#define M_TAU (M_PI * 2)
#define NAN (__builtin_nanf (""))
#define INFINITY (__builtin_inff ())
#define isfinite(x) __builtin_isfinite (x)
#define signbit(x) __builtin_signbit (x)
#define M_LN2 0.69314718055995
#define M_LN10 2.30258509299405

double acos(double);
float acosf(float);
double acosh(double);
double asin(double);
float asinf(float);
double asinh(double);
double atan(double);
float atanf(float);
double atanh(double);
double atan2(double, double);
float atan2f(float, float);
double cos(double);
float cosf(float);
double cosh(double);
float coshf(float);
double sin(double);
float sinf(float);
double sinh(double);
float sinhf(float);
double tan(double);
float tanf(float);
double tanh(double);
float tanhf(float);
double hypot(double, double);
double ceil(double);
float ceilf(float);
double floor(double);
float floorf(float);
double fmin(double, double);
double fmax(double, double);
double round(double);
float roundf(float);
double fabs(double);
float fabsf(float);
double fmod(double, double);
float fmodf(float, float);
double exp(double);
float expf(float);
double frexp(double, int* exp);
float frexpf(float, int* exp);
double log(double);
float logf(float);
double log10(double);
float log10f(float);
double sqrt(double);
float sqrtf(float);
double trunc(double);
float truncf(float);
double modf(double, double*);
float modff(float, float*);
double ldexp(double, int exp);
float ldexpf(float, int exp);

double pow(double x, double y);

double log2(double);
float log2f(float);
long double log2l(long double);
long int lrint (double x);
double frexp(double, int*);
float frexpf(float, int*);
long double frexpl(long double, int*);
int isnan(double x);
double expm1(double);
double log1p(double);
double cbrt(double);

__END_DECLS
