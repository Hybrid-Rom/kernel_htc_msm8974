#ifndef SDHI_H
#define SDHI_H


#ifdef CONFIG_ARCH_SH7372
#include "mach/sdhi-sh7372.h"
#else
#error "unsupported CPU."
#endif

#endif 
