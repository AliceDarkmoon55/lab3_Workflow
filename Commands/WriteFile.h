#ifndef WORKFLOW_WRITEFILE_H
#define WORKFLOW_WRITEFILE_H

#include "ICommand.h"
#include <fstream>

class WriteFile : public ICommand {
public:
    explicit WriteFile(std::vector<std::string>& args);

    ~WriteFile() override ;

    std::vector<std::string> execute(std::vector<std::string>& data) override;

    COMMAND_TYPE get_command_type() const noexcept override;
private:
    std::ofstream file_;
};


#endif //WORKFLOW_WRITEFILE_H
