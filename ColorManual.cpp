#include "ColorManual.h"
#include "ColorUtils.h"
#include <iostream>

namespace TelCoColorCoder
{
    void PrintColorManual() {
        std::cout << "Pair Number\tMajor Color\tMinor Color\n";
        for (int i = 1; i <= numberOfMajorColors * numberOfMinorColors; i++) {
            ColorPair pair = GetColorFromPairNumber(i);
            std::cout << i << "\t\t" << MajorColorNames[pair.getMajor()]
                      << "\t\t" << MinorColorNames[pair.getMinor()] << "\n";
        }
    }
}
