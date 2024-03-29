#ifndef WORKFLOW_MISSED_END_OF_COMMAND_BLOCK_H
#define WORKFLOW_MISSED_END_OF_COMMAND_BLOCK_H

#include <exception>
#include <string>

namespace error {
    class missed_end_of_command_block : std::exception{
    public:
        missed_end_of_command_block(const std::string& error_message);

        const char * what() const noexcept override;
    private:
        std::string err_msg;
    };
}

#endif //WORKFLOW_MISSED_END_OF_COMMAND_BLOCK_H
