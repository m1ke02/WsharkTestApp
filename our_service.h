#ifndef OUR_SERVICE_H
#define OUR_SERVICE_H

#include <stdint.h>
#include "ble.h"
#include "ble_srv_common.h"

#define BLE_UUID_OUR_BASE_UUID					{{0xEE, 0xFF, 0xC0, 0x11,\
												0x5F, 0x78, \
												0x23, 0x15, \
												0x63, 0x57, \
												0x23, 0x02, \
												0x00, 0x00, 0x00, 0x00}} // 128-bit base UUID
#define BLE_UUID_OUR_SERVICE_UUID				0x00E0

// Defining 16-bit characteristic UUID
#define BLE_UUID_OUR_BUTTONS_CHARACTERISTC_UUID	0x00C0
#define BLE_UUID_OUR_LEDS_CHARACTERISTC_UUID	0x00D0

// This structure contains various status information for our service. 
// The name is based on the naming convention used in Nordics SDKs. 
// 'ble' indicates that it is a Bluetooth Low Energy relevant structure and 
// 'os' is short for Our Service). 
typedef struct
{
    uint16_t                    conn_handle;    /**< Handle of the current connection (as provided by the BLE stack, is BLE_CONN_HANDLE_INVALID if not in a connection).*/
    uint16_t                    service_handle; /**< Handle of Our Service (as provided by the BLE stack). */
    ble_gatts_char_handles_t    buttons_char_handles;
	ble_gatts_char_handles_t    leds_char_handles;
} ble_os_t;

/**@brief Function for handling BLE Stack events related to our service and characteristic.
 *
 * @details Handles all events from the BLE stack of interest to Our Service.
 *
 * @param[in]   p_our_service       Our Service structure.
 * @param[in]   p_ble_evt  Event received from the BLE stack.
 */
void ble_our_service_on_ble_evt(ble_os_t * p_our_service, ble_evt_t * p_ble_evt);

/**@brief Function for initializing our new service.
 *
 * @param[in]   p_our_service       Pointer to Our Service structure.
 */
void our_service_init(ble_os_t * p_our_service);

/**@brief Function for updating and sending new characteristic values
 *
 * @details The application calls this function whenever user clicks a button
 *
 * @param[in]   p_our_service            Our Service structure.
 * @param[in]   value                    New characteristic value.
 */
void our_buttons_char_update(ble_os_t *p_our_service, int32_t *value);

/**@brief Function for updating LEDs state
 *
 * @details The application calls this function whenever LEDS char is written
 *
 * @param[in]   value                    New characteristic value.
 */
void our_leds_char_update(int32_t value);

#endif  /* OUR_SERVICE_H */
