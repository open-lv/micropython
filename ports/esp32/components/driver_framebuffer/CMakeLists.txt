file(GLOB DRIVER_SRC
    "${COMPONENT_DIR}/*.c")
file(GLOB FONT_SRC
    "${COMPONENT_DIR}/fonts/*.c")
file(GLOB PNG_SRC
    "${COMPONENT_DIR}/png/*.c")




idf_component_register(SRCS ${DRIVER_SRC} ${FONT_SRC} ${PNG_SRC}
    INCLUDE_DIRS "include" "png"
    REQUIRES "driver_display_ssd1306" "spi_flash")
