// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#include "hw/top_earlgrey/sw/autogen/top_earlgrey.h"

/**
 * PLIC Interrupt Id to Peripheral Map
 *
 * This array is a mapping from `top_earlgrey_plic_irq_id_t` to
 * `top_earlgrey_plic_peripheral_t`.
 */
const top_earlgrey_plic_peripheral_t
    top_earlgrey_plic_interrupt_for_peripheral[141] = {
  [kTopEarlgreyPlicIrqIdNone] = kTopEarlgreyPlicPeripheralUnknown,
  [kTopEarlgreyPlicIrqIdGpioGpio0] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio1] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio2] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio3] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio4] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio5] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio6] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio7] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio8] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio9] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio10] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio11] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio12] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio13] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio14] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio15] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio16] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio17] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio18] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio19] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio20] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio21] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio22] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio23] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio24] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio25] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio26] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio27] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio28] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio29] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio30] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdGpioGpio31] = kTopEarlgreyPlicPeripheralGpio,
  [kTopEarlgreyPlicIrqIdUartTxWatermark] = kTopEarlgreyPlicPeripheralUart,
  [kTopEarlgreyPlicIrqIdUartRxWatermark] = kTopEarlgreyPlicPeripheralUart,
  [kTopEarlgreyPlicIrqIdUartTxEmpty] = kTopEarlgreyPlicPeripheralUart,
  [kTopEarlgreyPlicIrqIdUartRxOverflow] = kTopEarlgreyPlicPeripheralUart,
  [kTopEarlgreyPlicIrqIdUartRxFrameErr] = kTopEarlgreyPlicPeripheralUart,
  [kTopEarlgreyPlicIrqIdUartRxBreakErr] = kTopEarlgreyPlicPeripheralUart,
  [kTopEarlgreyPlicIrqIdUartRxTimeout] = kTopEarlgreyPlicPeripheralUart,
  [kTopEarlgreyPlicIrqIdUartRxParityErr] = kTopEarlgreyPlicPeripheralUart,
  [kTopEarlgreyPlicIrqIdSpiDeviceRxf] = kTopEarlgreyPlicPeripheralSpiDevice,
  [kTopEarlgreyPlicIrqIdSpiDeviceRxlvl] = kTopEarlgreyPlicPeripheralSpiDevice,
  [kTopEarlgreyPlicIrqIdSpiDeviceTxlvl] = kTopEarlgreyPlicPeripheralSpiDevice,
  [kTopEarlgreyPlicIrqIdSpiDeviceRxerr] = kTopEarlgreyPlicPeripheralSpiDevice,
  [kTopEarlgreyPlicIrqIdSpiDeviceRxoverflow] = kTopEarlgreyPlicPeripheralSpiDevice,
  [kTopEarlgreyPlicIrqIdSpiDeviceTxunderflow] = kTopEarlgreyPlicPeripheralSpiDevice,
  [kTopEarlgreyPlicIrqIdFlashCtrlProgEmpty] = kTopEarlgreyPlicPeripheralFlashCtrl,
  [kTopEarlgreyPlicIrqIdFlashCtrlProgLvl] = kTopEarlgreyPlicPeripheralFlashCtrl,
  [kTopEarlgreyPlicIrqIdFlashCtrlRdFull] = kTopEarlgreyPlicPeripheralFlashCtrl,
  [kTopEarlgreyPlicIrqIdFlashCtrlRdLvl] = kTopEarlgreyPlicPeripheralFlashCtrl,
  [kTopEarlgreyPlicIrqIdFlashCtrlOpDone] = kTopEarlgreyPlicPeripheralFlashCtrl,
  [kTopEarlgreyPlicIrqIdFlashCtrlOpError] = kTopEarlgreyPlicPeripheralFlashCtrl,
  [kTopEarlgreyPlicIrqIdKeymgrOpDone] = kTopEarlgreyPlicPeripheralKeymgr,
  [kTopEarlgreyPlicIrqIdHmacHmacDone] = kTopEarlgreyPlicPeripheralHmac,
  [kTopEarlgreyPlicIrqIdHmacFifoEmpty] = kTopEarlgreyPlicPeripheralHmac,
  [kTopEarlgreyPlicIrqIdHmacHmacErr] = kTopEarlgreyPlicPeripheralHmac,
  [kTopEarlgreyPlicIrqIdKmacKmacDone] = kTopEarlgreyPlicPeripheralKmac,
  [kTopEarlgreyPlicIrqIdKmacFifoEmpty] = kTopEarlgreyPlicPeripheralKmac,
  [kTopEarlgreyPlicIrqIdKmacKmacErr] = kTopEarlgreyPlicPeripheralKmac,
  [kTopEarlgreyPlicIrqIdAlertHandlerClassa] = kTopEarlgreyPlicPeripheralAlertHandler,
  [kTopEarlgreyPlicIrqIdAlertHandlerClassb] = kTopEarlgreyPlicPeripheralAlertHandler,
  [kTopEarlgreyPlicIrqIdAlertHandlerClassc] = kTopEarlgreyPlicPeripheralAlertHandler,
  [kTopEarlgreyPlicIrqIdAlertHandlerClassd] = kTopEarlgreyPlicPeripheralAlertHandler,
  [kTopEarlgreyPlicIrqIdNmiGenEsc0] = kTopEarlgreyPlicPeripheralNmiGen,
  [kTopEarlgreyPlicIrqIdNmiGenEsc1] = kTopEarlgreyPlicPeripheralNmiGen,
  [kTopEarlgreyPlicIrqIdNmiGenEsc2] = kTopEarlgreyPlicPeripheralNmiGen,
  [kTopEarlgreyPlicIrqIdNmiGenEsc3] = kTopEarlgreyPlicPeripheralNmiGen,
  [kTopEarlgreyPlicIrqIdUsbdevAonPktReceived] = kTopEarlgreyPlicPeripheralUsbdevAon,
  [kTopEarlgreyPlicIrqIdUsbdevAonPktSent] = kTopEarlgreyPlicPeripheralUsbdevAon,
  [kTopEarlgreyPlicIrqIdUsbdevAonDisconnected] = kTopEarlgreyPlicPeripheralUsbdevAon,
  [kTopEarlgreyPlicIrqIdUsbdevAonHostLost] = kTopEarlgreyPlicPeripheralUsbdevAon,
  [kTopEarlgreyPlicIrqIdUsbdevAonLinkReset] = kTopEarlgreyPlicPeripheralUsbdevAon,
  [kTopEarlgreyPlicIrqIdUsbdevAonLinkSuspend] = kTopEarlgreyPlicPeripheralUsbdevAon,
  [kTopEarlgreyPlicIrqIdUsbdevAonLinkResume] = kTopEarlgreyPlicPeripheralUsbdevAon,
  [kTopEarlgreyPlicIrqIdUsbdevAonAvEmpty] = kTopEarlgreyPlicPeripheralUsbdevAon,
  [kTopEarlgreyPlicIrqIdUsbdevAonRxFull] = kTopEarlgreyPlicPeripheralUsbdevAon,
  [kTopEarlgreyPlicIrqIdUsbdevAonAvOverflow] = kTopEarlgreyPlicPeripheralUsbdevAon,
  [kTopEarlgreyPlicIrqIdUsbdevAonLinkInErr] = kTopEarlgreyPlicPeripheralUsbdevAon,
  [kTopEarlgreyPlicIrqIdUsbdevAonRxCrcErr] = kTopEarlgreyPlicPeripheralUsbdevAon,
  [kTopEarlgreyPlicIrqIdUsbdevAonRxPidErr] = kTopEarlgreyPlicPeripheralUsbdevAon,
  [kTopEarlgreyPlicIrqIdUsbdevAonRxBitstuffErr] = kTopEarlgreyPlicPeripheralUsbdevAon,
  [kTopEarlgreyPlicIrqIdUsbdevAonFrame] = kTopEarlgreyPlicPeripheralUsbdevAon,
  [kTopEarlgreyPlicIrqIdUsbdevAonConnected] = kTopEarlgreyPlicPeripheralUsbdevAon,
  [kTopEarlgreyPlicIrqIdPwrmgrAonWakeup] = kTopEarlgreyPlicPeripheralPwrmgrAon,
  [kTopEarlgreyPlicIrqIdOtpCtrlOtpAccessDone] = kTopEarlgreyPlicPeripheralOtpCtrl,
  [kTopEarlgreyPlicIrqIdOtpCtrlOtpCtrlErr] = kTopEarlgreyPlicPeripheralOtpCtrl,
  [kTopEarlgreyPlicIrqIdDcdAonDebugCableUpdate] = kTopEarlgreyPlicPeripheralDcdAon,
  [kTopEarlgreyPlicIrqIdUart1TxWatermark] = kTopEarlgreyPlicPeripheralUart1,
  [kTopEarlgreyPlicIrqIdUart1RxWatermark] = kTopEarlgreyPlicPeripheralUart1,
  [kTopEarlgreyPlicIrqIdUart1TxEmpty] = kTopEarlgreyPlicPeripheralUart1,
  [kTopEarlgreyPlicIrqIdUart1RxOverflow] = kTopEarlgreyPlicPeripheralUart1,
  [kTopEarlgreyPlicIrqIdUart1RxFrameErr] = kTopEarlgreyPlicPeripheralUart1,
  [kTopEarlgreyPlicIrqIdUart1RxBreakErr] = kTopEarlgreyPlicPeripheralUart1,
  [kTopEarlgreyPlicIrqIdUart1RxTimeout] = kTopEarlgreyPlicPeripheralUart1,
  [kTopEarlgreyPlicIrqIdUart1RxParityErr] = kTopEarlgreyPlicPeripheralUart1,
  [kTopEarlgreyPlicIrqIdUart2TxWatermark] = kTopEarlgreyPlicPeripheralUart2,
  [kTopEarlgreyPlicIrqIdUart2RxWatermark] = kTopEarlgreyPlicPeripheralUart2,
  [kTopEarlgreyPlicIrqIdUart2TxEmpty] = kTopEarlgreyPlicPeripheralUart2,
  [kTopEarlgreyPlicIrqIdUart2RxOverflow] = kTopEarlgreyPlicPeripheralUart2,
  [kTopEarlgreyPlicIrqIdUart2RxFrameErr] = kTopEarlgreyPlicPeripheralUart2,
  [kTopEarlgreyPlicIrqIdUart2RxBreakErr] = kTopEarlgreyPlicPeripheralUart2,
  [kTopEarlgreyPlicIrqIdUart2RxTimeout] = kTopEarlgreyPlicPeripheralUart2,
  [kTopEarlgreyPlicIrqIdUart2RxParityErr] = kTopEarlgreyPlicPeripheralUart2,
  [kTopEarlgreyPlicIrqIdUart3TxWatermark] = kTopEarlgreyPlicPeripheralUart3,
  [kTopEarlgreyPlicIrqIdUart3RxWatermark] = kTopEarlgreyPlicPeripheralUart3,
  [kTopEarlgreyPlicIrqIdUart3TxEmpty] = kTopEarlgreyPlicPeripheralUart3,
  [kTopEarlgreyPlicIrqIdUart3RxOverflow] = kTopEarlgreyPlicPeripheralUart3,
  [kTopEarlgreyPlicIrqIdUart3RxFrameErr] = kTopEarlgreyPlicPeripheralUart3,
  [kTopEarlgreyPlicIrqIdUart3RxBreakErr] = kTopEarlgreyPlicPeripheralUart3,
  [kTopEarlgreyPlicIrqIdUart3RxTimeout] = kTopEarlgreyPlicPeripheralUart3,
  [kTopEarlgreyPlicIrqIdUart3RxParityErr] = kTopEarlgreyPlicPeripheralUart3,
  [kTopEarlgreyPlicIrqIdI2c0FmtWatermark] = kTopEarlgreyPlicPeripheralI2c0,
  [kTopEarlgreyPlicIrqIdI2c0RxWatermark] = kTopEarlgreyPlicPeripheralI2c0,
  [kTopEarlgreyPlicIrqIdI2c0FmtOverflow] = kTopEarlgreyPlicPeripheralI2c0,
  [kTopEarlgreyPlicIrqIdI2c0RxOverflow] = kTopEarlgreyPlicPeripheralI2c0,
  [kTopEarlgreyPlicIrqIdI2c0Nak] = kTopEarlgreyPlicPeripheralI2c0,
  [kTopEarlgreyPlicIrqIdI2c0SclInterference] = kTopEarlgreyPlicPeripheralI2c0,
  [kTopEarlgreyPlicIrqIdI2c0SdaInterference] = kTopEarlgreyPlicPeripheralI2c0,
  [kTopEarlgreyPlicIrqIdI2c0StretchTimeout] = kTopEarlgreyPlicPeripheralI2c0,
  [kTopEarlgreyPlicIrqIdI2c0SdaUnstable] = kTopEarlgreyPlicPeripheralI2c0,
  [kTopEarlgreyPlicIrqIdI2c1FmtWatermark] = kTopEarlgreyPlicPeripheralI2c1,
  [kTopEarlgreyPlicIrqIdI2c1RxWatermark] = kTopEarlgreyPlicPeripheralI2c1,
  [kTopEarlgreyPlicIrqIdI2c1FmtOverflow] = kTopEarlgreyPlicPeripheralI2c1,
  [kTopEarlgreyPlicIrqIdI2c1RxOverflow] = kTopEarlgreyPlicPeripheralI2c1,
  [kTopEarlgreyPlicIrqIdI2c1Nak] = kTopEarlgreyPlicPeripheralI2c1,
  [kTopEarlgreyPlicIrqIdI2c1SclInterference] = kTopEarlgreyPlicPeripheralI2c1,
  [kTopEarlgreyPlicIrqIdI2c1SdaInterference] = kTopEarlgreyPlicPeripheralI2c1,
  [kTopEarlgreyPlicIrqIdI2c1StretchTimeout] = kTopEarlgreyPlicPeripheralI2c1,
  [kTopEarlgreyPlicIrqIdI2c1SdaUnstable] = kTopEarlgreyPlicPeripheralI2c1,
  [kTopEarlgreyPlicIrqIdI2c2FmtWatermark] = kTopEarlgreyPlicPeripheralI2c2,
  [kTopEarlgreyPlicIrqIdI2c2RxWatermark] = kTopEarlgreyPlicPeripheralI2c2,
  [kTopEarlgreyPlicIrqIdI2c2FmtOverflow] = kTopEarlgreyPlicPeripheralI2c2,
  [kTopEarlgreyPlicIrqIdI2c2RxOverflow] = kTopEarlgreyPlicPeripheralI2c2,
  [kTopEarlgreyPlicIrqIdI2c2Nak] = kTopEarlgreyPlicPeripheralI2c2,
  [kTopEarlgreyPlicIrqIdI2c2SclInterference] = kTopEarlgreyPlicPeripheralI2c2,
  [kTopEarlgreyPlicIrqIdI2c2SdaInterference] = kTopEarlgreyPlicPeripheralI2c2,
  [kTopEarlgreyPlicIrqIdI2c2StretchTimeout] = kTopEarlgreyPlicPeripheralI2c2,
  [kTopEarlgreyPlicIrqIdI2c2SdaUnstable] = kTopEarlgreyPlicPeripheralI2c2,
  [kTopEarlgreyPlicIrqIdOtbnDone] = kTopEarlgreyPlicPeripheralOtbn,
  [kTopEarlgreyPlicIrqIdOtbnErr] = kTopEarlgreyPlicPeripheralOtbn,
};
