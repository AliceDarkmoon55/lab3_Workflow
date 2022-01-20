#ifndef WORKFLOW_FIRST_COMMAND_IS_NOT_INPUT_H
#define WORKFLOW_FIRST_COMMAND_IS_NOT_INPUT_H

#include <stdexcept>
#include <string>

namespace error {
    class first_command_is_not_input : std::exception {
    public:
        explicit first_command_is_not_input(const std::string &error_message);

        const char *what() const noexcept override;

    private:
        std::string err_msg;
    };
}

#endif //WORKFLOW_FIRST_COMMAND_IS_NOT_INPUT_H
