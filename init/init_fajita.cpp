/*
 * Copyright (C) 2021 crDroid Android Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t fajita_info = {
    .brand = "OnePlus",
    .device = "fajita",
    .name = "OnePlus6T",
    .model = "ONEPLUS A6013",
    .build_fingerprint = "OnePlus/OnePlus6T/OnePlus6T:9/PKQ1.180716.001/1812260627:user/release-keys",
};

void vendor_load_properties() {
    set_dalvik_heap();
    set_variant_props(fajita_info);
}
