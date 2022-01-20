#ifndef WORKFLOW_DUMP_H
#define WORKFLOW_DUMP_H

#include "ICommand.h"
#include <fstream>

class Dump : public ICommand {
public:
    explicit Dump(std::vector<std::string>& args);

    ~Dump() override ;

    std::vector<std::string> execute(std::vector<std::string>& data) override ;

    COMMAND_TYPE get_command_type() const noexcept override;
private:
    std::ofstream file_;
};


#endif //WORKFLOW_DUMP_H
