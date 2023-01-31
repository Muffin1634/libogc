#pragma once

#warning This header is deprecated, and remains only for backwards compatibility. \
	<gccore.h> includes <stdbool.h>; you should switch to using that.

#include <gccore.h>

#ifndef BOOL
#define BOOL	bool
#endif

#ifndef TRUE
#define TRUE	true
#endif

#ifndef FALSE
#define FALSE	false
#endif