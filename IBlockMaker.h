#ifndef WORKFLOW_IBLOCKMAKER_H
#define WORKFLOW_IBLOCKMAKER_H
#include <string>
#include <vector>
#include "Commands/ICommand.h"

class IBlockMaker {
public:
    virtual ~IBlockMaker() = default;
    virtual ICommand * create(std::vector<std::string>& args) = 0;
};


#endif //WORKFLOW_IBLOCKMAKER_H
