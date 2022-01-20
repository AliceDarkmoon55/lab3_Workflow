#pragma once
#ifndef WORKFLOW_WORKFLOW_H
#define WORKFLOW_WORKFLOW_H
#include <string>
#include <vector>
#include <map>
#include "Commands/ICommand.h"
#include "Parser.h"
#include "BlockFactory.h"


class Workflow {
public:
    explicit Workflow(std::string  path);

    void execute();
private:
    std::string path_;
};


#endif //WORKFLOW_WORKFLOW_H
