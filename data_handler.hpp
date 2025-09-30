//
// Created by Xiaoyu Lyu on 30/09/2025.
//

#ifndef ML_DATA_HANDLER_HPP
#define ML_DATA_HANDLER_HPP

#include data.hpp
#include <fstream>
#include <stdint.h>
#include <vector>
#include <string>
#include <map>
#include <unordered_set>

#include "data.hpp"

class data_handler {

    std::vector<data *> *data_array;
    std::vector<data *> *training_data;
    std::vector<data *> *test_data;
    std::vector<data *> *validation_data;

    int num_classes;
    int feature_vector_size;
    std::map<uint8_t, int> class_map;

    const double TRAIN_SET_PERCENT = 0.75;
    const double TEST_SET_PERCENT = 0.20;
    const double VALIDATION_PERCENT = 0.05;


}


#endif //ML_DATA_HANDLER_HPP