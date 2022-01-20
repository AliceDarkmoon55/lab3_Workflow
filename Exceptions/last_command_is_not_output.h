#ifndef WORKFLOW_LAST_COMMAND_IS_NOT_OUTPUT_H
#define WORKFLOW_LAST_COMMAND_IS_NOT_OUTPUT_H

#include <stdexcept>
#include <string>

namespace error {
    class last_command_is_not_output : std::exception {
    public:
        explicit last_command_is_not_output(const std::string &error_message);

        const char *what() const noexcept override;

    private:
        std::string err_msg;
    };
}

#endif //WORKFLOW_LAST_COMMAND_IS_NOT_OUTPUT_H
