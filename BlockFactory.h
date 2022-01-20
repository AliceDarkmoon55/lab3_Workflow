#ifndef WORKFLOW_BLOCKFACTORY_H
#define WORKFLOW_BLOCKFACTORY_H
#include <vector>
#include <string>
#include <map>
#include "IBlockMaker.h"

class BlockFactory {
public:
    static BlockFactory& instance();
    ICommand * create(std::string& cmd, std::vector<std::string>& args) const;
    void register_maker(const std::string& key, IBlockMaker * maker);
private:
    std::map<std::string, IBlockMaker *> makers_;
};


#endif //WORKFLOW_BLOCKFACTORY_H
