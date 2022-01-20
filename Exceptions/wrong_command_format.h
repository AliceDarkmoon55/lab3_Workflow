#ifndef WORKFLOW_WRONG_COMMAND_FORMAT_H
#define WORKFLOW_WRONG_COMMAND_FORMAT_H

#include <exception>
#include <string>

namespace error {
    class wrong_command_format : std::exception {
    public:
        wrong_command_format(const std::string& error_message);

        const char * what() const noexcept override;

    private:
        std::string err_msg;
    };
}


#endif //WORKFLOW_WRONG_COMMAND_FORMAT_H
