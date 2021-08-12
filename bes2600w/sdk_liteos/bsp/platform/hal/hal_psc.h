/*
 * Copyright (c) 2021 bestechnic (Shanghai) Technologies CO., LIMITED.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef __HAL_PSC_H__
#define __HAL_PSC_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "plat_addr_map.h"

#ifdef AON_PSC_BASE

#include CHIP_SPECIFIC_HDR(hal_psc)

void hal_psc_jtag_select_mcu(void);

void hal_psc_init(void);

void hal_psc_core_auto_power_down(void);

void hal_psc_mcu_auto_power_up(void);

void hal_psc_codec_enable(void);

void hal_psc_codec_disable(void);

void hal_psc_bt_enable(void);

void hal_psc_bt_disable(void);

void hal_psc_bt_enable_auto_power_down(void);

#endif

#ifdef __cplusplus
}
#endif

#endif

