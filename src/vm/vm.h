
#ifndef SJS_VM_H
#define SJS_VM_H

#include "duktape.h"

typedef struct {
    duk_context* ctx;
} sjs_vm_t;


DUK_EXTERNAL_DECL sjs_vm_t* sjs_vm_create(void);
DUK_EXTERNAL_DECL void sjs_vm_destroy(sjs_vm_t* vm);

#endif
