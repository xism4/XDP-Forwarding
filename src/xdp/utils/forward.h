#pragma once

#include <common/all.h>

#include <xdp/utils/maps.h>

#include <xdp/utils/helpers.h>
#include <xdp/utils/csum.h>

static __always_inline int forwardpacket4(struct forward_info *info, struct connection *conn, struct xdp_md *ctx);

// The source file is included directly below instead of compiled and linked as an object because when linking, there is no guarantee the compiler will inline the function (which is crucial for performance).
// I'd prefer not to include the function logic inside of the header file.
// More Info: https://stackoverflow.com/questions/24289599/always-inline-does-not-work-when-function-is-implemented-in-different-file
#include "forward.c"