#ifndef WORKFLOW_READFILE_H
#define WORKFLOW_READFILE_H

#include "ICommand.h"
#include <fstream>

class ReadFile : public ICommand {
public:
    explicit ReadFile(std::vector<std::string>& args);

    ~ReadFile() override ;

    std::vector<std::string> execute(std::vector<std::string>& data) override ;

    COMMAND_TYPE get_command_type() const noexcept override;
private:
    std::ifstream file_;
};


#endif //WORKFLOW_READFILE_H
