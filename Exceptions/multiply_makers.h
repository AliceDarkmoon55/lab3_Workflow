#ifndef WORKFLOW_MULTIPLY_MAKERS_H
#define WORKFLOW_MULTIPLY_MAKERS_H

#include <exception>
#include <string>

namespace error {
    class multiply_makers : std::exception {
    public:
        multiply_makers(const std::string& error_message);

        const char* what() const noexcept override;

    private:
        std::string err_msg;
    };
}


#endif //WORKFLOW_MULTIPLY_MAKERS_H
