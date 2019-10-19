#pragma once

#include <sys/cdefs.h>

__BEGIN_DECLS

enum
  {
    FE_INVALID = 0x01,
#define FE_INVALID	FE_INVALID
    __FE_DENORM = 0x02,
    FE_DIVBYZERO = 0x04,
#define FE_DIVBYZERO	FE_DIVBYZERO
    FE_OVERFLOW = 0x08,
#define FE_OVERFLOW	FE_OVERFLOW
    FE_UNDERFLOW = 0x10,
#define FE_UNDERFLOW	FE_UNDERFLOW
    FE_INEXACT = 0x20
#define FE_INEXACT	FE_INEXACT
  };
#define FE_ALL_EXCEPT \
	(FE_INEXACT | FE_DIVBYZERO | FE_UNDERFLOW | FE_OVERFLOW | FE_INVALID)
/* The ix87 FPU supports all of the four defined rounding modes.  We
   use again the bit positions in the FPU control word as the values
   for the appropriate macros.  */
enum
  {
    FE_TONEAREST = 0,
#define FE_TONEAREST	FE_TONEAREST
    FE_DOWNWARD = 0x400,
#define FE_DOWNWARD	FE_DOWNWARD
    FE_UPWARD = 0x800,
#define FE_UPWARD	FE_UPWARD
    FE_TOWARDZERO = 0xc00
#define FE_TOWARDZERO	FE_TOWARDZERO
  };
/* Type representing exception flags.  */
typedef unsigned short int fexcept_t;
/* Type representing floating-point environment.  This structure
   corresponds to the layout of the block written by the `fstenv'
   instruction and has additional fields for the contents of the MXCSR
   register as written by the `stmxcsr' instruction.  */
typedef struct
  {
    unsigned short int __control_word;
    unsigned short int __unused1;
    unsigned short int __status_word;
    unsigned short int __unused2;
    unsigned short int __tags;
    unsigned short int __unused3;
    unsigned int __eip;
    unsigned short int __cs_selector;
    unsigned int __opcode:11;
    unsigned int __unused4:5;
    unsigned int __data_offset;
    unsigned short int __data_selector;
    unsigned short int __unused5;
#ifdef __WORDSIZE
#if __WORDSIZE == 64
    unsigned int __mxcsr;
#endif
#endif
  }
fenv_t;

int feclearexcept( int excepts );
int fetestexcept( int excepts );
int feraiseexcept( int excepts );
int fegetexceptflag( fexcept_t* flagp, int excepts );
int fesetexceptflag( const fexcept_t* flagp, int excepts );
int fesetround( int round );
int fegetround();
int fegetenv( fenv_t* envp );
int fesetenv( const fenv_t* envp );
int feholdexcept( fenv_t* envp );int feupdateenv( const fenv_t* envp );
int feupdateenv( const fenv_t* envp );

__END_DECLS
