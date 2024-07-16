#ifndef ARRAYLIST_GLOBAL_H
#define ARRAYLIST_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(ARRAYLIST_LIBRARY)
#define ARRAYLIST_EXPORT Q_DECL_EXPORT
#else
#define ARRAYLIST_EXPORT Q_DECL_IMPORT
#endif

#endif // ARRAYLIST_GLOBAL_H
