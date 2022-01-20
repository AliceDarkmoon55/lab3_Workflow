#pragma once
#ifndef WORKFLOW_CANT_GET_NEXT_LINE_H
#define WORKFLOW_CANT_GET_NEXT_LINE_H

#include <exception>
#include <string>

namespace error {
    class cant_get_next_line : std::exception{
    public:
        cant_get_next_line(const std::string & error_message);

        const char * what() const noexcept override;

    private:
        std::string err_msg;
    };
}

#endif //WORKFLOW_CANT_GET_NEXT_LINE_H
