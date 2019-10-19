#include "fenv.h"

int feclearexcept( int ) {
	return 0; 
}
int fetestexcept( int ) {
	return 0;
}

int feraiseexcept( int ) {
	return 0;
}

int fegetexceptflag( fexcept_t*, int ) {
	return 0;
}

int fesetexceptflag( const fexcept_t*, int ) {
	return 0;
}

int fesetround( int ) {
	return 0;
}
int fegetround() {
	return 0;
}
int fegetenv( fenv_t* ) {
	return 0;
}
int fesetenv( const fenv_t* ) {
	return 0;
}
int feholdexcept( fenv_t* ) {
	return 0;
}
int feupdateenv( const fenv_t* ) {
	return 0;
}


