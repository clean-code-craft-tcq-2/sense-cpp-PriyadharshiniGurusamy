#include "stats.h"
#include "algorithm"
#include "math.h"

Stats Statistics::ComputeStatistics(const std::vector<float>& values) {
    //Implement statistics here
    Stats computedStats;
    if(!values.empty())
    {
        float sum = 0;
        auto iter = values.begin();
        for (int i = 0;iter != values.end(); iter++)
        {
            sum = sum + values[i];
        }
        computedStats.average = sum/values.size();
        computedStats.max = *std::max_element(values.begin() , values.end());
        computedStats.min = *std::min_element(values.begin() , values.end());
    }
    else
    {
        computedStats.average = NAN;
        computedStats.max = NAN;
        computedStats.min = NAN;
    }
    return computedStats;
}
