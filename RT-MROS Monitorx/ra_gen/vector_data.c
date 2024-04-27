/* generated vector source file - do not edit */
        #include "bsp_api.h"
        /* Do not build these data structures if no interrupts are currently allocated because IAR will have build errors. */
        #if VECTOR_DATA_IRQ_COUNT > 0
        BSP_DONT_REMOVE const fsp_vector_t g_vector_table[BSP_ICU_VECTOR_MAX_ENTRIES] BSP_PLACE_IN_SECTION(BSP_SECTION_APPLICATION_VECTORS) =
        {
                        [0] = sci_uart_rxi_isr, /* SCI9 RXI (Received data full) */
            [1] = sci_uart_txi_isr, /* SCI9 TXI (Transmit data empty) */
            [2] = sci_uart_tei_isr, /* SCI9 TEI (Transmit end) */
            [3] = sci_uart_eri_isr, /* SCI9 ERI (Receive error) */
            [4] = sci_uart_rxi_isr, /* SCI4 RXI (Received data full) */
            [5] = sci_uart_txi_isr, /* SCI4 TXI (Transmit data empty) */
            [6] = sci_uart_tei_isr, /* SCI4 TEI (Transmit end) */
            [7] = sci_uart_eri_isr, /* SCI4 ERI (Receive error) */
            [8] = sdhimmc_accs_isr, /* SDHIMMC1 ACCS (Card access) */
            [9] = sdhimmc_card_isr, /* SDHIMMC1 CARD (Card detect) */
            [10] = dmac_int_isr, /* DMAC0 INT (DMAC transfer end 0) */
            [11] = glcdc_line_detect_isr, /* GLCDC LINE DETECT (Specified line) */
            [12] = ether_eint_isr, /* EDMAC0 EINT (EDMAC 0 interrupt) */
            [13] = r_icu_isr, /* ICU IRQ13 (External pin interrupt 13) */
            [14] = r_icu_isr, /* ICU IRQ9 (External pin interrupt 9) */
            [15] = r_icu_isr, /* ICU IRQ10 (External pin interrupt 10) */
            [16] = r_icu_isr, /* ICU IRQ11 (External pin interrupt 11) */
        };
        const bsp_interrupt_event_t g_interrupt_event_link_select[BSP_ICU_VECTOR_MAX_ENTRIES] =
        {
            [0] = BSP_PRV_IELS_ENUM(EVENT_SCI9_RXI), /* SCI9 RXI (Received data full) */
            [1] = BSP_PRV_IELS_ENUM(EVENT_SCI9_TXI), /* SCI9 TXI (Transmit data empty) */
            [2] = BSP_PRV_IELS_ENUM(EVENT_SCI9_TEI), /* SCI9 TEI (Transmit end) */
            [3] = BSP_PRV_IELS_ENUM(EVENT_SCI9_ERI), /* SCI9 ERI (Receive error) */
            [4] = BSP_PRV_IELS_ENUM(EVENT_SCI4_RXI), /* SCI4 RXI (Received data full) */
            [5] = BSP_PRV_IELS_ENUM(EVENT_SCI4_TXI), /* SCI4 TXI (Transmit data empty) */
            [6] = BSP_PRV_IELS_ENUM(EVENT_SCI4_TEI), /* SCI4 TEI (Transmit end) */
            [7] = BSP_PRV_IELS_ENUM(EVENT_SCI4_ERI), /* SCI4 ERI (Receive error) */
            [8] = BSP_PRV_IELS_ENUM(EVENT_SDHIMMC1_ACCS), /* SDHIMMC1 ACCS (Card access) */
            [9] = BSP_PRV_IELS_ENUM(EVENT_SDHIMMC1_CARD), /* SDHIMMC1 CARD (Card detect) */
            [10] = BSP_PRV_IELS_ENUM(EVENT_DMAC0_INT), /* DMAC0 INT (DMAC transfer end 0) */
            [11] = BSP_PRV_IELS_ENUM(EVENT_GLCDC_LINE_DETECT), /* GLCDC LINE DETECT (Specified line) */
            [12] = BSP_PRV_IELS_ENUM(EVENT_EDMAC0_EINT), /* EDMAC0 EINT (EDMAC 0 interrupt) */
            [13] = BSP_PRV_IELS_ENUM(EVENT_ICU_IRQ13), /* ICU IRQ13 (External pin interrupt 13) */
            [14] = BSP_PRV_IELS_ENUM(EVENT_ICU_IRQ9), /* ICU IRQ9 (External pin interrupt 9) */
            [15] = BSP_PRV_IELS_ENUM(EVENT_ICU_IRQ10), /* ICU IRQ10 (External pin interrupt 10) */
            [16] = BSP_PRV_IELS_ENUM(EVENT_ICU_IRQ11), /* ICU IRQ11 (External pin interrupt 11) */
        };
        #endif