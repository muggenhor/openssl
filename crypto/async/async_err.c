/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2019 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <openssl/err.h>
#include <openssl/asyncerr.h>

#ifndef OPENSSL_NO_ERR

static const ERR_STRING_DATA ASYNC_str_functs[] = {
    {ERR_PACK(ERR_LIB_ASYNC, ASYNC_F_ASYNC_CTX_NEW, 0), "async_ctx_new"},
    {ERR_PACK(ERR_LIB_ASYNC, ASYNC_F_ASYNC_INIT_THREAD, 0),
     "ASYNC_init_thread"},
    {ERR_PACK(ERR_LIB_ASYNC, ASYNC_F_ASYNC_JOB_INIT, 0), "ASYNC_job_init"},
    {ERR_PACK(ERR_LIB_ASYNC, ASYNC_F_ASYNC_JOB_NEW, 0), "async_job_new"},
    {ERR_PACK(ERR_LIB_ASYNC, ASYNC_F_ASYNC_PAUSE_JOB, 0), "ASYNC_pause_job"},
    {ERR_PACK(ERR_LIB_ASYNC, ASYNC_F_ASYNC_START_FUNC, 0), "async_start_func"},
    {ERR_PACK(ERR_LIB_ASYNC, ASYNC_F_ASYNC_START_JOB, 0), "ASYNC_start_job"},
    {ERR_PACK(ERR_LIB_ASYNC, ASYNC_F_ASYNC_WAIT_CTX_SET_WAIT_FD, 0),
     "ASYNC_WAIT_CTX_set_wait_fd"},
    {0, NULL}
};

static const ERR_STRING_DATA ASYNC_str_reasons[] = {
    {ERR_PACK(ERR_LIB_ASYNC, 0, ASYNC_R_FAILED_TO_SET_POOL),
    "failed to set pool"},
    {ERR_PACK(ERR_LIB_ASYNC, 0, ASYNC_R_FAILED_TO_SWAP_CONTEXT),
    "failed to swap context"},
    {ERR_PACK(ERR_LIB_ASYNC, 0, ASYNC_R_INIT_FAILED), "init failed"},
    {ERR_PACK(ERR_LIB_ASYNC, 0, ASYNC_R_INVALID_POOL_SIZE),
    "invalid pool size"},
    {0, NULL}
};

#endif

int ERR_load_ASYNC_strings(void)
{
#ifndef OPENSSL_NO_ERR
    if (ERR_func_error_string(ASYNC_str_functs[0].error) == NULL) {
        ERR_load_strings_const(ASYNC_str_functs);
        ERR_load_strings_const(ASYNC_str_reasons);
    }
#endif
    return 1;
}
