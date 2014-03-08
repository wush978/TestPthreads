#ifndef __PTHREAD_HELLO_H__
#define __PTHREAD_HELLO_H__

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

#include <pthread.h>
#include <stdio.h>
#define NUM_THREADS     5

void *PrintHello(void *threadid);

#ifdef __cplusplus
}
#endif //__cplusplus
#endif //__PTHREAD_HELLO_H__