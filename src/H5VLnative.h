/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Copyright by The HDF Group.                                               *
 * All rights reserved.                                                      *
 *                                                                           *
 * This file is part of HDF5.  The full HDF5 copyright notice, including     *
 * terms governing use, modification, and redistribution, is contained in    *
 * the COPYING file, which can be found at the root of the source code       *
 * distribution tree, or in https://support.hdfgroup.org/ftp/HDF5/releases.  *
 * If you do not have access to either file, you may request a copy from     *
 * help@hdfgroup.org.                                                        *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/*
 * Purpose:	The public header file for the native VOL connector.
 */

#ifndef _H5VLnative_H
#define _H5VLnative_H

/* Identifier for the native VOL connector */
#define H5VL_NATIVE     (H5VL_native_register())

/* Characteristics of the native VOL connector */
#define H5VL_NATIVE_NAME        "native"
#define H5VL_NATIVE_VALUE       H5_VOL_NATIVE   /* enum value */
#define H5VL_NATIVE_VERSION     0


#ifdef __cplusplus
extern "C" {
#endif

H5_DLL hid_t H5VL_native_register(void);


#ifdef __cplusplus
}
#endif

#endif /* _H5VLnative_H */

