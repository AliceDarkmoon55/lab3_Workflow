#ifndef WORKFLOW_WRONG_COMMAND_ORDER_H
#define WORKFLOW_WRONG_COMMAND_ORDER_H

#include <string>
#include <exception>

namespace error {
    class wrong_command_order : std::exception {
    public:
        wrong_command_order(const std::string& error_message);

        const char * what() const noexcept override;
    private:
        std::string err_msg;
    };
}

#endif //WORKFLOW_WRONG_COMMAND_ORDER_H
