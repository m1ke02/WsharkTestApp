/**
 *
 * @defgroup nrf_drv_rtc_config RTC peripheral driver configuration
 * @{
 * @ingroup nrf_drv_rtc
 */
/** @brief 
 *
 *  Set to 1 to activate.
 *
 * @note This is an NRF_CONFIG macro.
 */
#define RTC_ENABLED

/** @brief Frequency
 *
 *  Minimum value: 16
 *  Maximum value: 32768
 *
 * @note This is an NRF_CONFIG macro.
 */
#define RTC_DEFAULT_CONFIG_FREQUENCY


/** @brief Ensures safe compare event triggering
 *
 *  Set to 1 to activate.
 *
 * @note This is an NRF_CONFIG macro.
 */
#define RTC_DEFAULT_CONFIG_RELIABLE


/** @brief Interrupt priority
 *
 * Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
 *
 *  Following options are available:
 * - 0 - 0 (highest)
 * - 1 - 1
 * - 2 - 2
 * - 3 - 3
 * - 4 - 4 (except nRF51 family)
 * - 5 - 5 (except nRF51 family)
 * - 6 - 6 (except nRF51 family)
 * - 7 - 7 (except nRF51 family)
 *
 * @note This is an NRF_CONFIG macro.
 */
#define RTC_DEFAULT_CONFIG_IRQ_PRIORITY


/** @brief Enable RTC0 instance
 *
 *  Set to 1 to activate.
 *
 * @note This is an NRF_CONFIG macro.
 */
#define RTC0_ENABLED


/** @brief Enable RTC1 instance
 *
 *  Set to 1 to activate.
 *
 * @note This is an NRF_CONFIG macro.
 */
#define RTC1_ENABLED


/** @brief Enable RTC2 instance
 *
 *  Set to 1 to activate.
 *
 * @note This is an NRF_CONFIG macro.
 */
#define RTC2_ENABLED


/** @brief Maximum possible time[us] in highest priority interrupt
 *
 *
 * @note This is an NRF_CONFIG macro.
 */
#define NRF_MAXIMUM_LATENCY_US


/** @brief Enables logging in the module.
 *
 *  Set to 1 to activate.
 *
 * @note This is an NRF_CONFIG macro.
 */
#define RTC_CONFIG_LOG_ENABLED

/** @brief Default Severity level
 *
 *  Following options are available:
 * - 0 - Off
 * - 1 - Error
 * - 2 - Warning
 * - 3 - Info
 * - 4 - Debug
 *
 * @note This is an NRF_CONFIG macro.
 */
#define RTC_CONFIG_LOG_LEVEL


/** @brief ANSI escape code prefix.
 *
 *  Following options are available:
 * - 0 - Default
 * - 1 - Black
 * - 2 - Red
 * - 3 - Green
 * - 4 - Yellow
 * - 5 - Blue
 * - 6 - Magenta
 * - 7 - Cyan
 * - 8 - White
 *
 * @note This is an NRF_CONFIG macro.
 */
#define RTC_CONFIG_INFO_COLOR


/** @brief ANSI escape code prefix.
 *
 *  Following options are available:
 * - 0 - Default
 * - 1 - Black
 * - 2 - Red
 * - 3 - Green
 * - 4 - Yellow
 * - 5 - Blue
 * - 6 - Magenta
 * - 7 - Cyan
 * - 8 - White
 *
 * @note This is an NRF_CONFIG macro.
 */
#define RTC_CONFIG_DEBUG_COLOR




/** @} */
