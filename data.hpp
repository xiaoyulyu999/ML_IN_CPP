//
// Created by Xiaoyu Lyu on 30/09/2025.
//

#ifndef ML_DATA_HPP
#define ML_DATA_HPP

#include <vector>
#include "stdint.h"

class data {
    std::vector<uint8_t> feature_vector;
    uint8_t label;
    int enum_label;

    public:
    void set_feature_vector(std::vector<uint8_t> feature_);
    void append_to_feature_vector(uint8_t);
    void set_label(uint8_t);
    void set_enumerated_label(int);
    int get_feature_vector_size();
    uint8_t get_label();
    uint8_t get_enumerated_label();

    std::vector<uint8_t> get_feature_vector();

};


#endif //ML_DATA_HPP