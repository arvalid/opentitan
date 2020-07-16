// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// tl_aon package generated by `tlgen.py` tool

package tl_aon_pkg;

  localparam logic [31:0] ADDR_SPACE_PWRMGR_AON  = 32'h 40400000;
  localparam logic [31:0] ADDR_SPACE_RSTMGR_AON  = 32'h 40410000;
  localparam logic [31:0] ADDR_SPACE_CLKMGR_AON  = 32'h 400c0000;
  localparam logic [31:0] ADDR_SPACE_RBOX_AON    = 32'h 40430000;
  localparam logic [31:0] ADDR_SPACE_DCD_AON     = 32'h 40440000;
  localparam logic [31:0] ADDR_SPACE_PWM_AON     = 32'h 40450000;
  localparam logic [31:0] ADDR_SPACE_PINMUX_AON  = 32'h 40460000;
  localparam logic [31:0] ADDR_SPACE_PADCTRL_AON = 32'h 40470000;
  localparam logic [31:0] ADDR_SPACE_TIMER_AON   = 32'h 40480000;
  localparam logic [31:0] ADDR_SPACE_USBDEV_AON  = 32'h 40500000;
  localparam logic [31:0] ADDR_SPACE_RAM_RET_AON = 32'h 40510000;

  localparam logic [31:0] ADDR_MASK_PWRMGR_AON  = 32'h 00000fff;
  localparam logic [31:0] ADDR_MASK_RSTMGR_AON  = 32'h 00000fff;
  localparam logic [31:0] ADDR_MASK_CLKMGR_AON  = 32'h 00000fff;
  localparam logic [31:0] ADDR_MASK_RBOX_AON    = 32'h 00000fff;
  localparam logic [31:0] ADDR_MASK_DCD_AON     = 32'h 00000fff;
  localparam logic [31:0] ADDR_MASK_PWM_AON     = 32'h 00000fff;
  localparam logic [31:0] ADDR_MASK_PINMUX_AON  = 32'h 00000fff;
  localparam logic [31:0] ADDR_MASK_PADCTRL_AON = 32'h 00000fff;
  localparam logic [31:0] ADDR_MASK_TIMER_AON   = 32'h 00000fff;
  localparam logic [31:0] ADDR_MASK_USBDEV_AON  = 32'h 00000fff;
  localparam logic [31:0] ADDR_MASK_RAM_RET_AON = 32'h 00000fff;

  localparam int N_HOST   = 1;
  localparam int N_DEVICE = 11;

  typedef enum int {
    TlPwrmgrAon = 0,
    TlRstmgrAon = 1,
    TlClkmgrAon = 2,
    TlRboxAon = 3,
    TlDcdAon = 4,
    TlPwmAon = 5,
    TlPinmuxAon = 6,
    TlPadctrlAon = 7,
    TlTimerAon = 8,
    TlUsbdevAon = 9,
    TlRamRetAon = 10
  } tl_device_e;

  typedef enum int {
    TlMain = 0
  } tl_host_e;

endpackage
