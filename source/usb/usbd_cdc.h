/**
 * @file    usbd_cdc.h
 * @brief   USB device CDC header
 *
 * DAPLink Interface Firmware
 * Copyright (c) 2009-2016, ARM Limited, All Rights Reserved
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __USBD_CDC_H__
#define __USBD_CDC_H__


/*--------------------------- Event handling routines ------------------------*/

extern           void usbd_vcom_serial2usb(void);
extern           void usbd_vcom_chkserstate(void);
extern           void usbd_vcom_usb2serial(void);
extern           void usbd_cdc_ser_flush(void);

extern           void USBD_CDC_SOF_Event(void);

extern           void USBD_CDC_EP_INTIN_Event(U32 event);
extern           void USBD_CDC_EP_BULKIN_Event(U32 event);
extern           void USBD_CDC_EP_BULKOUT_Event(U32 event);
extern           void USBD_CDC_EP_BULK_Event(U32 event);

extern     void USBD_RTX_CDC_EP_INTIN_Event(void);
extern     void USBD_RTX_CDC_EP_BULKIN_Event(void);
extern     void USBD_RTX_CDC_EP_BULKOUT_Event(void);
extern     void USBD_RTX_CDC_EP_BULK_Event(void);


#endif  /* __USBD_CDC_H__ */