/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

#ifndef __PLAT_MODE_MACHINE_DEVICES_H
#define __PLAT_MODE_MACHINE_DEVICES_H

/* These devices are used by the seL4 kernel. */
#define UART0_PPTR                  0xffffffffffff0000
#define GIC_DISTRIBUTOR_PPTR        0xffffffffffff3000
#define GIC_CONTROLLER_PPTR         0xffffffffffff4000

#endif /* __PLAT_MODE_MACHINE_DEVICES_H */
