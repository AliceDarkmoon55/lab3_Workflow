#ifndef WORKFLOW_CANT_OPEN_FILE_H
#define WORKFLOW_CANT_OPEN_FILE_H

#include <exception>
#include <string>

namespace error {
    class cant_open_file : std::exception {
    public:
        cant_open_file(const std::string& error_message);

        const char * what() const noexcept override;
    private:
        std::string err_msg;
    };
}


#endif //WORKLOW_CANT_OPEN_FILE_H
