#ifndef WORKFLOW_GREP_H
#define WORKFLOW_GREP_H

#include "ICommand.h"

class Grep : public ICommand{
public:
    explicit Grep(std::vector<std::string>& args);

    std::vector<std::string> execute(std::vector<std::string>& data) override;

    COMMAND_TYPE get_command_type() const noexcept override;
private:
    std::string word_;
};


#endif //WORKFLOW_GREP_H
