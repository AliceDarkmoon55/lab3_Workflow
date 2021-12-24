#pragma once
#ifndef WORKFLOW_TEXTHOLDER_H
#define WORKFLOW_TEXTHOLDER_H


#include <fstream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include "Exception.h"

class TextEditor {
private:
    std::vector<std::string> strings;
public:
    explicit TextEditor();
    void read_file(const std::string&);
    void write_file(const std::string&);
    void grep(const std::string&);
    void sort();
    void replace(const std::string&, const std::string&);
    void dump(const std::string&);
};


#endif //WORKFLOW_TEXTHOLDER_H