#include <ui/GraphicBuffer.h>
#include <utils/Errors.h>
#include <string>

extern "C" {
    // Shim for GraphicBuffer constructor
    void _ZN7android13GraphicBufferC1Ejjijm(uint32_t inWidth, uint32_t inHeight, int inFormat, uint32_t inUsage, std::string requestorName);

    void _ZN7android13GraphicBufferC1EjjijN7android2spINS_22IGraphicBufferProducerEEE(
            uint32_t inWidth, uint32_t inHeight, int inFormat, uint32_t inUsage,
            std::string requestorName) {
        _ZN7android13GraphicBufferC1Ejjijm(inWidth, inHeight, inFormat, inUsage, requestorName);
    }
}
