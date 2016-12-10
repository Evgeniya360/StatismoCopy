#ifndef __STATISMOH5CPP_H
#define __STATISMOH5CPP_H

/* Use the hdf5 library configured for Statismo.  */
#ifdef STATISMO_ITK_SUPPORT
#include <itk_H5Cpp.h>
#else
#include <H5Cpp.h>
#endif

#endif
