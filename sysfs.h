// SPDX-License-Identifier: GPL-2.0-or-later
/*
 * Helpers for querying USB properties from sysfs
 *
 * Copyright (C) 1999, 2000 Thomas Sailer (sailer@ife.ee.ethz.ch)
 */

#ifndef _SYSFS_H
#define _SYSFS_H

#ifdef __cplusplus
extern "C" {
#endif

/* ---------------------------------------------------------------------- */

int get_sysfs_name(char *buf, size_t size, libusb_device *dev);
extern int read_sysfs_prop(char *buf, size_t size, char *sysfs_name, const char *propname);

/* ---------------------------------------------------------------------- */

#ifdef __cplusplus
}
#endif

#endif /* _SYSFS_H */
