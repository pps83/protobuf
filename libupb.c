// The upb runtime in one unit, for C code built against generated upb files (libsignal-protocol-c's).
#include <assert.h>
#include <errno.h>
#include <float.h>
#include <limits.h>
#include <math.h>
#include <setjmp.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#if defined(_MSC_VER) && defined(_M_X64)
#include <intrin.h>
#endif
#include "third_party/utf8_range/utf8_range.h"

#if defined(_MSC_VER) && !defined(__clang__)
#pragma warning(push, 1)
#pragma warning(disable: 4146 4163 4305 4311 4701 4702)
#endif
#ifdef __clang__
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wunused-parameter"
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wint-to-pointer-cast"
#pragma GCC diagnostic ignored "-Wpointer-to-int-cast"
#endif
#if defined(__GNUC__) && !defined(__clang__)
#pragma GCC diagnostic ignored "-Wmaybe-uninitialized"
#endif
// The varint encoder's assembly leaves out the alignment clang's ARM64 SEH unwind info can't size only under __SEH__
#if defined(_MSC_VER) && defined(__clang__) && defined(_M_ARM64) && !defined(__SEH__)
#define __SEH__ 1
#endif

#include "upb/base/status.c"
#include "upb/hash/common.c"
#include "upb/mem/alloc.c"
#include "upb/mem/arena.c"
#include "upb/message/array.c"
#include "upb/message/map.c"
#include "upb/message/map_sorter.c"
#include "upb/message/message.c"
#include "upb/message/unknown_fields.c"
#include "upb/message/internal/extension.c"
#include "upb/message/internal/message.c"
#include "upb/mini_table/extension_registry.c"
#include "upb/mini_table/message.c"
#include "upb/port/port.c"
#include "upb/wire/decode.c"
#include "upb/wire/encode.c"
#include "upb/wire/eps_copy_input_stream.c"
#include "upb/wire/reader.c"
#include "upb/wire/internal/back_alloc.c"
#include "upb/wire/internal/decoder.c"
#include "upb/wire/internal/encoder.c"
