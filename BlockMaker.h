#ifndef WORKFLOW_BLOCKMAKER_H
#define WORKFLOW_BLOCKMAKER_H

#include "IBlockMaker.h"
#include "BlockFactory.h"

template <typename T>
class BlockMaker: public IBlockMaker {
public:
    explicit BlockMaker(const std::string& key){
        BlockFactory::instance().register_maker(key, this);
    }

    virtual ICommand * create(std::vector<std::string>& args){
        return new T(args);
    }
};


#endif //WORKFLOW_BLOCKMAKER_H
