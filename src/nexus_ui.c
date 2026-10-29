#include <stdint.h>
#include <string.h>

#define NEXUS_WIDTH  1920
#define NEXUS_HEIGHT 1080

static void nexus_pixel(
    unsigned char* buffer,
    int x,
    int y,
    uint32_t color
) {
    if (x < 0 || x >= NEXUS_WIDTH ||
        y < 0 || y >= NEXUS_HEIGHT)
        return;

    ((uint32_t*)buffer)[y * NEXUS_WIDTH + x] = color;
}

void nexus_draw(unsigned char* buffer) {
    if (!buffer)
        return;

    for (int y = 0; y < NEXUS_HEIGHT; y++) {
        for (int x = 0; x < NEXUS_WIDTH; x++) {
            nexus_pixel(buffer, x, y, 0xFF171923);
        }
    }
}
