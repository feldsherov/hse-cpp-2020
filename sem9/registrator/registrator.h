#pragma once

#include <string>
#include <vector>

// https://stackoverflow.com/questions/12697709/how-can-i-construct-a-locally-unique-identifier-name
#define CAT(a,b) CAT2(a,b)
#define CAT2(a,b) a##b
#define UNIQUE_ID() CAT(_uid_,__COUNTER__)

#define REGISTER(type)  Registrator UNIQUE_ID() (#type)

// https://www.fluentcpp.com/2019/07/23/how-to-define-a-global-constant-in-cpp/
// https://stackoverflow.com/questions/1433204/how-do-i-use-extern-to-share-variables-between-source-files
inline std::vector<std::string> registred_values;

class Registrator {
public:
  Registrator(std::string name);
};
