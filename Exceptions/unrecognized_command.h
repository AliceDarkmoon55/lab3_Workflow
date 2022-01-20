#ifndef WORKFLOW_UNRECOGNIZED_COMMAND_H
#define WORKFLOW_UNRECOGNIZED_COMMAND_H

#include <string>
#include <exception>

namespace error {
    class unrecognized_command : std::exception {
    public:
        unrecognized_command(const std::string& error_message);

        const char * what() const noexcept override;

    private:
        std::string err_msg;
    };
}


#endif //WORKFLOW_UNRECOGNIZED_COMMAND_H
