/***************************************************************************//**
* \file USBFS_1_hid.h
* \version 3.0
*
* \brief
*  This file provides function prototypes and constants for the USBFS component 
*  HID class.
*
* Related Document:
*  Device Class Definition for Human Interface Devices (HID) Version 1.11
*
********************************************************************************
* \copyright
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_USBFS_USBFS_1_hid_H)
#define CY_USBFS_USBFS_1_hid_H

#include "USBFS_1.h"

/***************************************
* Prototypes of the USBFS_1_hid API.
***************************************/
/**
* \addtogroup group_hid
* @{
*/
uint8 USBFS_1_UpdateHIDTimer(uint8 interface) ;
uint8 USBFS_1_GetProtocol(uint8 interface)    ;
/** @} hid */

/***************************************
*Renamed Functions for backward compatible
***************************************/

#define USBFS_1_bGetProtocol   USBFS_1_GetProtocol


/***************************************
*  Constants for USBFS_1_hid API.
***************************************/

#define USBFS_1_PROTOCOL_BOOT              (0x00u)
#define USBFS_1_PROTOCOL_REPORT            (0x01u)

/* Request Types (HID Chapter 7.2) */
#define USBFS_1_HID_GET_REPORT             (0x01u)
#define USBFS_1_HID_GET_IDLE               (0x02u)
#define USBFS_1_HID_GET_PROTOCOL           (0x03u)
#define USBFS_1_HID_SET_REPORT             (0x09u)
#define USBFS_1_HID_SET_IDLE               (0x0Au)
#define USBFS_1_HID_SET_PROTOCOL           (0x0Bu)

/* Descriptor Types (HID Chapter 7.1) */
#define USBFS_1_DESCR_HID_CLASS            (0x21u)
#define USBFS_1_DESCR_HID_REPORT           (0x22u)
#define USBFS_1_DESCR_HID_PHYSICAL         (0x23u)

/* Report Request Types (HID Chapter 7.2.1) */
#define USBFS_1_HID_GET_REPORT_INPUT       (0x01u)
#define USBFS_1_HID_GET_REPORT_OUTPUT      (0x02u)
#define USBFS_1_HID_GET_REPORT_FEATURE     (0x03u)

#endif /*  CY_USBFS_USBFS_1_hid_H */


/* [] END OF FILE */
