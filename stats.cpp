#include "stats.h"
#include "algorithm"

Stats Statistics::ComputeStatistics(const std::vector<float>& values) {
    //Implement statistics here
    Stats computedStats;
    float sum = 0;
    std::vector<float>::iterator iter = values.begin();
    computedStats.max = *std::max_element(values.begin() , values.end());
    computedStats.min = *std::min_element(values.begin() , values.end());
    for (int i = 0;iter != values.end(); iter++)
    {
        sum = sum + values[i];
    }
    computedStats.average = sum/vector.size();
    return computedStats;
}
