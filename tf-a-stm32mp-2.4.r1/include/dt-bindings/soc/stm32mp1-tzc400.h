/* SPDX-License-Identifier: GPL-2.0+ OR BSD-3-Clause */
/*
 * Copyright (C) 2020, STMicroelectronics - All Rights Reserved
 * Author(s): Lionel DEBIEVE <lionel.debieve@st.com> for STMicroelectronics.
 */

#ifndef _DT_BINDINGS_STM32MP1_TZC400_H
#define _DT_BINDINGS_STM32MP1_TZC400_H

#include <drivers/arm/tzc_common.h>

#define STM32MP1_TZC_A7_ID		U(0)
#define STM32MP1_TZC_M4_ID		U(1)
#define STM32MP1_TZC_LCD_ID		U(3)
#define STM32MP1_TZC_GPU_ID		U(4)
#define STM32MP1_TZC_MDMA_ID		U(5)
#define STM32MP1_TZC_DMA_ID		U(6)
#define STM32MP1_TZC_USB_HOST_ID	U(7)
#define STM32MP1_TZC_USB_OTG_ID		U(8)
#define STM32MP1_TZC_SDMMC_ID		U(9)
#define STM32MP1_TZC_ETH_ID		U(10)
#define STM32MP1_TZC_DAP_ID		U(15)

#define TZC_REGION_NSEC_ALL_ACCESS_RDWR \
	(TZC_REGION_ACCESS_RDWR(STM32MP1_TZC_A7_ID) | \
	 TZC_REGION_ACCESS_RDWR(STM32MP1_TZC_GPU_ID) | \
	 TZC_REGION_ACCESS_RDWR(STM32MP1_TZC_LCD_ID) | \
	 TZC_REGION_ACCESS_RDWR(STM32MP1_TZC_MDMA_ID) | \
	 TZC_REGION_ACCESS_RDWR(STM32MP1_TZC_M4_ID) | \
	 TZC_REGION_ACCESS_RDWR(STM32MP1_TZC_DMA_ID) | \
	 TZC_REGION_ACCESS_RDWR(STM32MP1_TZC_USB_HOST_ID) | \
	 TZC_REGION_ACCESS_RDWR(STM32MP1_TZC_USB_OTG_ID) | \
	 TZC_REGION_ACCESS_RDWR(STM32MP1_TZC_SDMMC_ID) | \
	 TZC_REGION_ACCESS_RDWR(STM32MP1_TZC_ETH_ID) | \
	 TZC_REGION_ACCESS_RDWR(STM32MP1_TZC_DAP_ID))

#endif /* _DT_BINDINGS_STM32MP1_TZC400_H */
