/**
 * libcollectdclient - src/libcollectdclient/lcc_features.h
 * Copyright (C) 2009  Sebastian Harl
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * Authors:
 *   Sebastian tokkee Harl <sh at tokkee.org>
 **/

#ifndef LIBCOLLECTD_LCC_FEATURES_H
#define LIBCOLLECTD_LCC_FEATURES_H 1

#ifdef __cplusplus
# define LCC_BEGIN_DECLS extern "C" {
# define LCC_END_DECLS   }
#else
# define LCC_BEGIN_DECLS
# define LCC_END_DECLS
#endif

#define LCC_API_VERSION 0

#define LCC_VERSION_MAJOR 5
#define LCC_VERSION_MINOR 12
#define LCC_VERSION_PATCH 0

#define LCC_VERSION_EXTRA ""

#define LCC_VERSION_STRING "5.12.0"

#define LCC_VERSION_ENCODE(major, minor, patch) \
	((major) * 10000 + (minor) * 100 + (patch))

#define LCC_VERSION \
	LCC_VERSION_ENCODE(LCC_VERSION_MAJOR, LCC_VERSION_MINOR, LCC_VERSION_PATCH)

LCC_BEGIN_DECLS

unsigned int lcc_version (void);

const char *lcc_version_string (void);

const char *lcc_version_extra (void);

LCC_END_DECLS

#endif /* ! LIBCOLLECTD_LCC_FEATURES_H */
