#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<float>&vec ) {
    //Implement statistics here
    auto computedStats.min = *min_element(vec.begin(), vec.end());
    auto computedStats.max = *max_element(vec.begin(), vec.end());
    auto average = 0.0;
    for(int i=0; i<vec.size(); ++i){
     average = average + vec[i];   
    }
    auto computedStats.average = average/vec.size();
    return computedStats;
}
