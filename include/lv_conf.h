#ifndef LV_CONF_H
#define LV_CONF_H

/*====================
   COLOR SETTINGS
 *====================*/
#define LV_COLOR_DEPTH 16

/*====================
   FONT USAGE
 *====================*/
#define LV_FONT_MONTSERRAT_8  1
#define LV_FONT_MONTSERRAT_10 1
#define LV_FONT_MONTSERRAT_12 1
#define LV_FONT_MONTSERRAT_14 1
#define LV_FONT_MONTSERRAT_16 1
#define LV_FONT_MONTSERRAT_18 1
#define LV_FONT_MONTSERRAT_20 1
#define LV_FONT_MONTSERRAT_24 1

/*====================
   MEMORY SETTINGS
 *====================*/
#define LV_MEM_SIZE (128U * 1024U)  // 128KB for S3 PSRAM

/*====================
   FEATURE CONFIGURATION
 *====================*/
#define LV_USE_PERF_MONITOR 1
#define LV_USE_MEM_MONITOR 1

/*====================
   MISC
 *====================*/
#define LV_USE_LOG 1
#define LV_LOG_LEVEL LV_LOG_LEVEL_INFO

/*====================
   ENABLE LVGL ASSERTS
 *====================*/
#ifndef LV_USE_ASSERT_NULL
    #define LV_USE_ASSERT_NULL  1
#endif

/*====================
   REQUIRED
 *====================*/
#define LV_COLOR_SCREEN_BG        lv_color_hex(0xC8D8FF)

/*====================
   EXTRA LIBRARIES
 *====================*/
#define LV_USE_QRCODE 1  // Enable QR code!

/*====================
   QRCODE SIZE
 *====================*/
#define LV_QRCODE_BASE_SIZE 3

#endif /*LV_CONF_H*/
