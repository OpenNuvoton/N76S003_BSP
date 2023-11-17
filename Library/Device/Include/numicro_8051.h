
/* for Keil */
#if defined __C51__
#include "N76S003_keil.h"

/* for IAR */
#elif defined __ICC8051__
#include "N76S003_iar.h"

/* for SDCC */
#elif defined __SDCC__
#include "N76S003_sdcc.h"

#endif
