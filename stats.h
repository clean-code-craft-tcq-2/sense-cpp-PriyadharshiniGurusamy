#include <vector>

struct Stats
    {
        float average;
        float max;
        float min;
    };
namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>& values );
}
