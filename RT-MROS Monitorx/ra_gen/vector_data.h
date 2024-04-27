/* generated vector header file - do not edit */
        #ifndef VECTOR_DATA_H
        #define VECTOR_DATA_H
                /* Number of interrupts allocated */
        #ifndef VECTOR_DATA_IRQ_COUNT
        #define VECTOR_DATA_IRQ_COUNT    (17)
        #endif
        /* ISR prototypes */
        void sci_uart_rxi_isr(void);
        void sci_uart_txi_isr(void);
        void sci_uart_tei_isr(void);
        void sci_uart_eri_isr(void);
        void sdhimmc_accs_isr(void);
        void sdhimmc_card_isr(void);
        void dmac_int_isr(void);
        void glcdc_line_detect_isr(void);
        void ether_eint_isr(void);
        void r_icu_isr(void);

        /* Vector table allocations */
        #define VECTOR_NUMBER_SCI9_RXI ((IRQn_Type) 0) /* SCI9 RXI (Received data full) */
        #define SCI9_RXI_IRQn          ((IRQn_Type) 0) /* SCI9 RXI (Received data full) */
        #define VECTOR_NUMBER_SCI9_TXI ((IRQn_Type) 1) /* SCI9 TXI (Transmit data empty) */
        #define SCI9_TXI_IRQn          ((IRQn_Type) 1) /* SCI9 TXI (Transmit data empty) */
        #define VECTOR_NUMBER_SCI9_TEI ((IRQn_Type) 2) /* SCI9 TEI (Transmit end) */
        #define SCI9_TEI_IRQn          ((IRQn_Type) 2) /* SCI9 TEI (Transmit end) */
        #define VECTOR_NUMBER_SCI9_ERI ((IRQn_Type) 3) /* SCI9 ERI (Receive error) */
        #define SCI9_ERI_IRQn          ((IRQn_Type) 3) /* SCI9 ERI (Receive error) */
        #define VECTOR_NUMBER_SCI4_RXI ((IRQn_Type) 4) /* SCI4 RXI (Received data full) */
        #define SCI4_RXI_IRQn          ((IRQn_Type) 4) /* SCI4 RXI (Received data full) */
        #define VECTOR_NUMBER_SCI4_TXI ((IRQn_Type) 5) /* SCI4 TXI (Transmit data empty) */
        #define SCI4_TXI_IRQn          ((IRQn_Type) 5) /* SCI4 TXI (Transmit data empty) */
        #define VECTOR_NUMBER_SCI4_TEI ((IRQn_Type) 6) /* SCI4 TEI (Transmit end) */
        #define SCI4_TEI_IRQn          ((IRQn_Type) 6) /* SCI4 TEI (Transmit end) */
        #define VECTOR_NUMBER_SCI4_ERI ((IRQn_Type) 7) /* SCI4 ERI (Receive error) */
        #define SCI4_ERI_IRQn          ((IRQn_Type) 7) /* SCI4 ERI (Receive error) */
        #define VECTOR_NUMBER_SDHIMMC1_ACCS ((IRQn_Type) 8) /* SDHIMMC1 ACCS (Card access) */
        #define SDHIMMC1_ACCS_IRQn          ((IRQn_Type) 8) /* SDHIMMC1 ACCS (Card access) */
        #define VECTOR_NUMBER_SDHIMMC1_CARD ((IRQn_Type) 9) /* SDHIMMC1 CARD (Card detect) */
        #define SDHIMMC1_CARD_IRQn          ((IRQn_Type) 9) /* SDHIMMC1 CARD (Card detect) */
        #define VECTOR_NUMBER_DMAC0_INT ((IRQn_Type) 10) /* DMAC0 INT (DMAC transfer end 0) */
        #define DMAC0_INT_IRQn          ((IRQn_Type) 10) /* DMAC0 INT (DMAC transfer end 0) */
        #define VECTOR_NUMBER_GLCDC_LINE_DETECT ((IRQn_Type) 11) /* GLCDC LINE DETECT (Specified line) */
        #define GLCDC_LINE_DETECT_IRQn          ((IRQn_Type) 11) /* GLCDC LINE DETECT (Specified line) */
        #define VECTOR_NUMBER_EDMAC0_EINT ((IRQn_Type) 12) /* EDMAC0 EINT (EDMAC 0 interrupt) */
        #define EDMAC0_EINT_IRQn          ((IRQn_Type) 12) /* EDMAC0 EINT (EDMAC 0 interrupt) */
        #define VECTOR_NUMBER_ICU_IRQ13 ((IRQn_Type) 13) /* ICU IRQ13 (External pin interrupt 13) */
        #define ICU_IRQ13_IRQn          ((IRQn_Type) 13) /* ICU IRQ13 (External pin interrupt 13) */
        #define VECTOR_NUMBER_ICU_IRQ9 ((IRQn_Type) 14) /* ICU IRQ9 (External pin interrupt 9) */
        #define ICU_IRQ9_IRQn          ((IRQn_Type) 14) /* ICU IRQ9 (External pin interrupt 9) */
        #define VECTOR_NUMBER_ICU_IRQ10 ((IRQn_Type) 15) /* ICU IRQ10 (External pin interrupt 10) */
        #define ICU_IRQ10_IRQn          ((IRQn_Type) 15) /* ICU IRQ10 (External pin interrupt 10) */
        #define VECTOR_NUMBER_ICU_IRQ11 ((IRQn_Type) 16) /* ICU IRQ11 (External pin interrupt 11) */
        #define ICU_IRQ11_IRQn          ((IRQn_Type) 16) /* ICU IRQ11 (External pin interrupt 11) */
        #endif /* VECTOR_DATA_H */