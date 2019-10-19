#include <pthread.h>

int pthread_create(pthread_t, pthread_attr_t*, void* (*)(void*), void*)
{
	return 0;
}
void pthread_exit(void*)
{
}
int pthread_kill(pthread_t, int)
{
	return 0;
}
void pthread_cleanup_push(void (*)(void*), void*)
{
}
void pthread_cleanup_pop(int)
{
}
int pthread_join(pthread_t, void**)
{
	return 0;
}
int pthread_mutex_lock(pthread_mutex_t*)
{
	return 0;
}
int pthread_mutex_trylock(pthread_mutex_t*)
{
	return 0;
}
int pthread_mutex_unlock(pthread_mutex_t*)
{
	return 0;
}
int pthread_mutex_init(pthread_mutex_t*, const pthread_mutexattr_t*)
{
	return 0;
}
int pthread_mutex_destroy(pthread_mutex_t*)
{
	return 0;
}
int pthread_attr_init(pthread_attr_t*)
{
	return 0;
}
int pthread_attr_destroy(pthread_attr_t*)
{
	return 0;
}

int pthread_once(pthread_once_t*, void (*)(void))
{
	return 0;
}
void* pthread_getspecific(pthread_key_t)
{
	return 0;
}
int pthread_setspecific(pthread_key_t, const void*)
{
	return 0;
}
int pthread_key_create(pthread_key_t*, void (*destructor)(void*))
{
	(void)destructor;
	return 0;
}
int pthread_key_delete(pthread_key_t)
{
	return 0;
}
int pthread_cond_broadcast(pthread_cond_t*)
{
	return 0;
}
int pthread_cond_init(pthread_cond_t*, const pthread_condattr_t*)
{
	return 0;
}
int pthread_cond_signal(pthread_cond_t*)
{
	return 0;
}
int pthread_cond_wait(pthread_cond_t*, pthread_mutex_t*)
{
	return 0;
}
int pthread_condattr_destroy(pthread_condattr_t*)
{
	return 0;
}
int pthread_cancel(pthread_t)
{
	return 0;
}
int pthread_cond_destroy(pthread_cond_t*)
{
	return 0;
}
int pthread_cond_timedwait(pthread_cond_t*, pthread_mutex_t*, const struct timespec*)
{
	return 0;
}
void pthread_testcancel(void)
{
}
int pthread_spin_destroy(pthread_spinlock_t*)
{
	return 0;
}
int pthread_spin_init(pthread_spinlock_t*, int)
{
	return 0;
}
int pthread_spin_lock(pthread_spinlock_t*)
{
	return 0;
}
int pthread_spin_trylock(pthread_spinlock_t*)
{
	return 0;
}
int pthread_spin_unlock(pthread_spinlock_t*)
{
	return 0;
}
pthread_t pthread_self(void)
{
	return 0;
}
int pthread_detach(pthread_t)
{
	return 0;
}
int pthread_equal(pthread_t, pthread_t)
{
	return 0;
}
int pthread_mutexattr_init(pthread_mutexattr_t*)
{
	return 0;
}
int pthread_mutexattr_settype(pthread_mutexattr_t*, int)
{
	return 0;
}
int pthread_mutexattr_destroy(pthread_mutexattr_t*)
{
	return 0;
}

