
// Automatically generated configuration file.

# ifndef __MBED_CONFIG_DATA__
# define __MBED_CONFIG_DATA__

// Configuration parameters

#if !defined(MBED_CONF_LORA_DEVICE_ADDRESS)
	#define MBED_CONF_LORA_DEVICE_ADDRESS (0x00000000)
#endif
#if !defined(MBED_CONF_LORA_PUBLIC_NETWORK)
	#define MBED_CONF_LORA_PUBLIC_NETWORK (1)
#endif
#if !defined(NVSTORE_ENABLED)
	#define NVSTORE_ENABLED (1)
#endif
#if !defined(MBED_CONF_LORA_DEVICE_EUI)
	#define MBED_CONF_LORA_DEVICE_EUI ({0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00})
#endif
#if !defined(MBED_CONF_EVENTS_SHARED_DISPATCH_FROM_APPLICATION)
	#define MBED_CONF_EVENTS_SHARED_DISPATCH_FROM_APPLICATION (0)
#endif
#if !defined(MBED_CONF_TARGET_GPIO_IRQ_DEBOUNCE_SAMPLE_RATE)
	#define MBED_CONF_TARGET_GPIO_IRQ_DEBOUNCE_SAMPLE_RATE (GPIO_DBCLKSEL_16)
#endif
#if !defined(MBED_CONF_LORA_NB_TRIALS)
	#define MBED_CONF_LORA_NB_TRIALS (12)
#endif
#if !defined(MBED_LFS_PROG_SIZE)
	#define MBED_LFS_PROG_SIZE (64)
#endif
#if !defined(MBED_CONF_TARGET_GPIO_IRQ_DEBOUNCE_CLOCK_SOURCE)
	#define MBED_CONF_TARGET_GPIO_IRQ_DEBOUNCE_CLOCK_SOURCE (GPIO_DBCLKSRC_IRC10K)
#endif
#if !defined(MBED_CONF_PLATFORM_FORCE_NON_COPYABLE_ERROR)
	#define MBED_CONF_PLATFORM_FORCE_NON_COPYABLE_ERROR (0)
#endif
#if !defined(MBED_CONF_LORA_PHY)
	#define MBED_CONF_LORA_PHY (0)
#endif
#if !defined(MBED_CONF_DRIVERS_UART_SERIAL_RXBUF_SIZE)
	#define MBED_CONF_DRIVERS_UART_SERIAL_RXBUF_SIZE (256)
#endif
#if !defined(MBED_LFS_LOOKAHEAD)
	#define MBED_LFS_LOOKAHEAD (512)
#endif
#if !defined(NVSTORE_MAX_KEYS)
	#define NVSTORE_MAX_KEYS (16)
#endif
#if !defined(MBED_LFS_BLOCK_SIZE)
	#define MBED_LFS_BLOCK_SIZE (512)
#endif
#if !defined(MBED_CONF_PLATFORM_STDIO_FLUSH_AT_EXIT)
	#define MBED_CONF_PLATFORM_STDIO_FLUSH_AT_EXIT (1)
#endif
#if !defined(MBED_LFS_READ_SIZE)
	#define MBED_LFS_READ_SIZE (64)
#endif
#if !defined(MBED_CONF_PLATFORM_STDIO_BAUD_RATE)
	#define MBED_CONF_PLATFORM_STDIO_BAUD_RATE (9600)
#endif
#if !defined(MBED_CONF_PLATFORM_STDIO_BUFFERED_SERIAL)
	#define MBED_CONF_PLATFORM_STDIO_BUFFERED_SERIAL (0)
#endif
#if !defined(MBED_CONF_LORA_NWKSKEY)
	#define MBED_CONF_LORA_NWKSKEY ({0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00})
#endif
#if !defined(MBED_CONF_EVENTS_SHARED_HIGHPRIO_STACKSIZE)
	#define MBED_CONF_EVENTS_SHARED_HIGHPRIO_STACKSIZE (1024)
#endif
#if !defined(MBED_CONF_LORA_DUTY_CYCLE_ON)
	#define MBED_CONF_LORA_DUTY_CYCLE_ON (1)
#endif
#if !defined(MBED_CONF_LORA_ADR_ON)
	#define MBED_CONF_LORA_ADR_ON (1)
#endif
#if !defined(MBED_CONF_TARGET_GPIO_IRQ_DEBOUNCE_ENABLE)
	#define MBED_CONF_TARGET_GPIO_IRQ_DEBOUNCE_ENABLE (0)
#endif
#if !defined(MBED_CONF_LORA_LBT_ON)
	#define MBED_CONF_LORA_LBT_ON (0)
#endif
#if !defined(MBED_CONF_LORA_TX_MAX_SIZE)
	#define MBED_CONF_LORA_TX_MAX_SIZE (64)
#endif
#if !defined(MBED_CONF_PLATFORM_DEFAULT_SERIAL_BAUD_RATE)
	#define MBED_CONF_PLATFORM_DEFAULT_SERIAL_BAUD_RATE (9600)
#endif
#if !defined(MBED_CONF_EVENTS_SHARED_EVENTSIZE)
	#define MBED_CONF_EVENTS_SHARED_EVENTSIZE (256)
#endif
#if !defined(MBED_CONF_LORA_APP_PORT)
	#define MBED_CONF_LORA_APP_PORT (15)
#endif
#if !defined(MBED_CONF_LORA_APPSKEY)
	#define MBED_CONF_LORA_APPSKEY ({0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00})
#endif
#if !defined(MBED_CONF_LORA_APPLICATION_EUI)
	#define MBED_CONF_LORA_APPLICATION_EUI ({0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00})
#endif
#if !defined(MBED_CONF_DRIVERS_UART_SERIAL_TXBUF_SIZE)
	#define MBED_CONF_DRIVERS_UART_SERIAL_TXBUF_SIZE (256)
#endif
#if !defined(MBED_CONF_PLATFORM_STDIO_CONVERT_TTY_NEWLINES)
	#define MBED_CONF_PLATFORM_STDIO_CONVERT_TTY_NEWLINES (0)
#endif
#if !defined(MBED_CONF_EVENTS_USE_LOWPOWER_TIMER_TICKER)
	#define MBED_CONF_EVENTS_USE_LOWPOWER_TIMER_TICKER (0)
#endif
#if !defined(MBED_CONF_LORA_APPLICATION_KEY)
	#define MBED_CONF_LORA_APPLICATION_KEY ({0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00})
#endif
#if !defined(MBED_CONF_PLATFORM_STDIO_CONVERT_NEWLINES)
	#define MBED_CONF_PLATFORM_STDIO_CONVERT_NEWLINES (0)
#endif
#if !defined(MBED_CONF_LORA_OVER_THE_AIR_ACTIVATION)
	#define MBED_CONF_LORA_OVER_THE_AIR_ACTIVATION (1)
#endif
#if !defined(MBED_CONF_TARGET_GPIO_IRQ_DEBOUNCE_ENABLE_LIST)
	#define MBED_CONF_TARGET_GPIO_IRQ_DEBOUNCE_ENABLE_LIST (NC)
#endif
#if !defined(MBED_LFS_INTRINSICS)
	#define MBED_LFS_INTRINSICS (1)
#endif
#if !defined(MBED_LFS_ENABLE_INFO)
	#define MBED_LFS_ENABLE_INFO (0)
#endif
#if !defined(MBED_CONF_EVENTS_SHARED_STACKSIZE)
	#define MBED_CONF_EVENTS_SHARED_STACKSIZE (1024)
#endif
#if !defined(MBED_CONF_EVENTS_SHARED_HIGHPRIO_EVENTSIZE)
	#define MBED_CONF_EVENTS_SHARED_HIGHPRIO_EVENTSIZE (256)
#endif
#if !defined(UNITY_INCLUDE_CONFIG_H)
	#define UNITY_INCLUDE_CONFIG_H
#endif


# endif
