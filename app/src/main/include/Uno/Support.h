// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Backends/CPlusPlus/Uno/Support.h'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once

/**
    \addtogroup ThreadUtils
    @{
*/
struct uThreadLocal;

uThreadLocal* uCreateThreadLocal(void (*destructor)(void*));
void uDeleteThreadLocal(uThreadLocal* tls);

void uSetThreadLocal(uThreadLocal* tls, void* value);
void* uGetThreadLocal(uThreadLocal* tls);

void uEnterCritical();
bool uEnterCriticalIfNull(void* addr);
void uExitCritical();
/** @} */
