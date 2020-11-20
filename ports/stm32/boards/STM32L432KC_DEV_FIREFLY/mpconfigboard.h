#define MICROPY_HW_BOARD_NAME       "STM32L432KC_DEV_FIREFLY"
#define MICROPY_HW_MCU_NAME         "STM32L432KC"

#define MICROPY_EMIT_THUMB          (0)
#define MICROPY_EMIT_INLINE_THUMB   (0)
#define MICROPY_PY_BUILTINS_COMPLEX (0)
#define MICROPY_PY_GENERATOR_PEND_THROW (0)
#define MICROPY_PY_USOCKET          (0)
#define MICROPY_PY_NETWORK          (0)
#define MICROPY_PY_STM              (0)
#define MICROPY_PY_PYB_LEGACY       (0)
#define MICROPY_PY_UHEAPQ           (0)
#define MICROPY_PY_UTIMEQ           (0)

#define MICROPY_PY_UZLIB            (0)
#define MICROPY_PY_URE              (0)
#define MICROPY_PY_URE_SUB          (0)
#define MICROPY_PY_UJSON            (0)
#define MICROPY_PY_UHASHLIB         (0)
#define MICROPY_PY_UBINASCII        (0)
#define MICROPY_PY_FRAMEBUF         (0)
//#define MICROPY_PY_USELECT          (0)
#define MICROPY_PY_ASYNC_AWAIT (0)
#define MICROPY_PY_UASYNCIO (0)
#define MICROPY_PY_UCTYPES (0)
#define MICROPY_PY_URANDOM (0)
#define MICROPY_PY_URANDOM_EXTRA_FUNCS (0)

#define MICROPY_HW_ENABLE_INTERNAL_FLASH_STORAGE (1)
#define MICROPY_HW_ENABLE_RTC       (0)
#define MICROPY_HW_ENABLE_ADC       (0)
#define MICROPY_HW_ENABLE_DAC       (0)
#define MICROPY_HW_ENABLE_USB       (1) // using a custom USB connector on PA11/PA12
#define MICROPY_HW_ENABLE_TIMER     (1)
#define MICROPY_HW_HAS_SWITCH       (0)
#define MICROPY_HW_HAS_FLASH        (0) // Whether to expose internal flash storage as pyb.Flash

#define MICROPY_PY_GC (1)
#define MICROPY_CPYTHON_COMPAT (0)
#define MICROPY_PY_ARRAY (0)
#define MICROPY_PY_MATH (1)
#define MICROPY_PY_COLLECTIONS (0)

// MSI is used and is 4MHz
#define MICROPY_HW_CLK_PLLM (1)
#define MICROPY_HW_CLK_PLLN (16)
#define MICROPY_HW_CLK_PLLR (2)
#define MICROPY_HW_CLK_PLLP (7)
#define MICROPY_HW_CLK_PLLQ (2)

// The board has NO external high speed crystal
#define MICROPY_HW_CLK_USE_HSE      (0)
// The board has NO external 32kHz crystal
#define MICROPY_HW_RTC_USE_LSE      (0)
#define MICROPY_HW_FLASH_LATENCY    FLASH_LATENCY_4
// LEDs
//#define MICROPY_HW_LED1             (pin_B3) // Green LD3 LED on Nucleo
//#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_high(pin))
//#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_low(pin))

// USB config
#define MICROPY_HW_USB_FS           (MICROPY_HW_ENABLE_USB)
#define MICROPY_HW_USB_MSC          (1)
#define MICROPY_HW_USB_HID          (0)
#define USBD_CDC_RX_DATA_SIZE       (256)
#define USBD_CDC_TX_DATA_SIZE       (256)
