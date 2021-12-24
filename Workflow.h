#pragma once
#ifndef WORKFLOW_WORKFLOW_H
#define WORKFLOW_WORKFLOW_H


#include <map>
#include "Command.h"
#include "Parser.h"

class Workflow {
private:
    SharedPtr<TextEditor> text;
    std::map<std::string, SharedPtr<Command>> commands;
    std::map<unsigned int, std::string> blocks;
    std::queue<unsigned int> queue;
public:
    Workflow();
    void parse_config(std::ifstream&);
    void work(std::string);
};


#endif //WORKFLOW_WORKFLOW_H